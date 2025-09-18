// bs_Edit.cpp : implementation file
//

#include "stdafx.h"
#include "advancedEdit.h"
#include <atlrx.h>

#include "Utils.h"
#include ".\advancededit.h"
#include "resource.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


enum CDMS_DATA_TYPE
{
	CDMS_STRING		= 1,
	CDMS_DATE		= 2,
	CDMS_CURRENCY	= 3,
	CDMS_CASEID		= 4,
	CDMS_PAN		= 5,
	CDMS_NUMBER		= 6,
	CDMS_STRING_NORMAL = 7,
	CDMS_DATE_LONG	= 8,
};

/////////////////////////////////////////////////////////////////////////////
// CFormattedEdit

CFormattedEdit::CFormattedEdit()
{
	m_currentPosition = 0;
	m_mask = "";
	m_shiftDown = FALSE;
	m_flicker = FALSE;
	m_selCount = 0;

    m_brushKeyRed = CreateSolidBrush(RGB(255, 0, 0));
    m_brushKeyGreen = CreateSolidBrush(RGB(0, 255, 0));
    m_brushBackground = (HBRUSH)GetStockObject(GetSysColor(COLOR_BACKGROUND));

    m_bIsPAN = FALSE;
    m_bIsBarcode = FALSE;
	m_keyPressed = FALSE;
    m_checkOk = -1;
    m_fontInitialized = FALSE;
	
	m_bErrorValidate = FALSE;
	m_errorWnd = NULL;
}


CFormattedEdit::~CFormattedEdit()
{
	if (m_errorWnd != NULL)
	delete m_errorWnd;
}


BEGIN_MESSAGE_MAP(CFormattedEdit, CEdit)
	//{{AFX_MSG_MAP(CFormattedEdit)
	ON_WM_CHAR()
	ON_WM_KEYUP()
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_SETFOCUS()
	ON_WM_CTLCOLOR_REFLECT()
    ON_WM_PAINT()
	//}}AFX_MSG_MAP
	ON_WM_CREATE()
	ON_WM_SHOWWINDOW()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFormattedEdit message handlers

void CFormattedEdit::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	switch(nChar)
	{
	case VK_TAB: break;
	case VK_BACK: int x, y;
				  GetSel(x, y);

				  if(x == y)
				  {
					  if(m_currentPosition > 0)
					  {
						  if(!m_mask.IsEmpty())
						  {
							  int pos = FindPositionBefore(m_currentPosition);
							  if(pos != -1)
							  {
								  m_currentPosition -= (pos + 1);
								  SetSel(m_currentPosition, m_currentPosition + 1);
								  ReplaceSel(" ");
							  }
						  }
						  else
						  {
							  m_currentPosition--;
							  SetSel(m_currentPosition, m_currentPosition + 1);
							  ReplaceSel("");
						  }
						  SetSel(m_currentPosition, m_currentPosition);
					  }
				  }
				  else
				  {
					  if(!m_mask.IsEmpty())
					  {
						  CString szTemp;
						  GetWindowText(szTemp);
						  for(int i = x; i < y; i++)
						  {
							  if(CheckMask(i))
								  szTemp.SetAt(i, ' ');
						  }
						  SetWindowText(szTemp);
						  m_currentPosition = x + FindPositionAfter(x);
					  }
					  else
					  {
						  ReplaceSel("");
						  m_currentPosition = x;
					  }
					  SetSel(m_currentPosition, m_currentPosition);
				  }
				  break;
	default: if((m_currentPosition < m_mask.GetLength()))
			 {
				 BOOL isOK = FALSE;
				 int pos = -1;

				 if((m_mask.GetAt(m_currentPosition) == NUMBER_MASK) && (isdigit(nChar)))
				 {
					 isOK = TRUE;
					 pos = FindPositionAfter(m_currentPosition + 1);
				 }
				 if((m_mask.GetAt(m_currentPosition) == CHAR_MASK) && (isalpha(nChar)))
				 {
					 isOK = TRUE;
					 pos = FindPositionAfter(m_currentPosition + 1);
				 }
				 if(m_mask.GetAt(m_currentPosition) == ANY_MASK)
				 {
					 isOK = TRUE;
					 pos = FindPositionAfter(m_currentPosition + 1);
				 }
				 if(isOK == TRUE)
				 {
					 SetSel(m_currentPosition, m_currentPosition + 1);
					 ReplaceSel((CString)(char)nChar);
					 if(pos == -1)
						 pos = 0;
					 m_currentPosition += (pos + 1);
					 SetSel(m_currentPosition, m_currentPosition);
				 }
				 else
				 {
					 m_keyPressed = TRUE;
					 InvalidateRect(NULL, TRUE);
					 UpdateWindow();
					 m_keyPressed = FALSE;
					 InvalidateRect(NULL, TRUE);
					 UpdateWindow();
				 }
			 }
			 else
			 {
				 if(m_mask.IsEmpty())
				 {
                     SetSel(m_currentPosition, m_currentPosition);
                     short keyDown = ::GetKeyState(VK_CONTROL);
                     if((keyDown & 0x8000) != 0x8000)
                     {
                         ReplaceSel((CString)(char)nChar);
                         m_currentPosition++;
                     }
				 }
			 }
			 break;
	}
    if(m_bIsBarcode == TRUE)
    {
        m_checkOk = VerifyBarcode();
//        if((m_checkOk == 0) || (m_checkOk == 1))
        if(m_checkOk == 1)
        {
            m_keyPressed = TRUE;
            m_flicker = TRUE;
            InvalidateRect(NULL, FALSE);
            UpdateWindow();
            m_keyPressed = FALSE;
            m_flicker = FALSE;
        }
        else
        {
            m_flicker = TRUE;
            InvalidateRect(NULL, TRUE);
            UpdateWindow();
            m_flicker = FALSE;
        }
    }
    else if(m_bIsPAN == TRUE)
    {
        m_checkOk = VerifyPAN();
//        if((m_checkOk == 0) || (m_checkOk == 1))
        if(m_checkOk == 1)
        {
            m_keyPressed = TRUE;
            m_flicker = TRUE;
            InvalidateRect(NULL, FALSE);
            UpdateWindow();
            m_keyPressed = FALSE;
            m_flicker = FALSE;
        }
        else
        {
            m_flicker = TRUE;
            InvalidateRect(NULL, TRUE);
            UpdateWindow();
            m_flicker = FALSE;
        }
    }
}

void CFormattedEdit::SetMask(CString _mask)
{
	CString tempMask = _mask;

	m_mask = _mask;

	m_currentPosition = 0;
	m_shiftDown = FALSE;
	m_selCount = 0;
	m_keyPressed = FALSE;

	for(int i = 0; i < tempMask.GetLength(); i++)
	{
		if(CheckMask(i))
			tempMask.SetAt(i, ' ');
	}
	SetWindowText(tempMask);
	SetSel(m_currentPosition, m_currentPosition + 1);
}

void CFormattedEdit::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
    //CEdit::OnKeyUp(nChar, nRepCnt, nFlags);

    CString str;

	switch(nChar)
	{
	case VK_HOME: if(m_shiftDown)
				  {
					  SetSel(m_currentPosition, 0);
				  }
				  else
				  {
					  m_currentPosition = 0;
					  GetWindowText(str);
					  SetSel(m_currentPosition, m_currentPosition);
				  }
				  break;
	case VK_END: GetWindowText(str);
				 if(m_shiftDown)
				 {
					 SetSel(m_currentPosition, str.GetLength());
				 }
				 else
				 {
					 m_currentPosition = str.GetLength();
					 SetSel(m_currentPosition, m_currentPosition);
				 }
				 break;
	case VK_SHIFT: m_shiftDown = FALSE;
				   m_selCount = 0;
	               break;
	case VK_DELETE: int x, y;
					GetSel(x, y);
					if(x == y)
					{
						if(m_mask.IsEmpty())
						{
							ReplaceSel("");
						}
						else
						{
                            SetSel(m_currentPosition, m_currentPosition + 1);
                            ReplaceSel(" ");
						}
					}
					else
					{
						m_currentPosition = x;
						if(m_mask.IsEmpty())
						{
							ReplaceSel("");
						}
						else
						{
							CString szTemp;
							GetWindowText(szTemp);
							for(int i = x; i < y; i++)
							{
								if(CheckMask(i))
									szTemp.SetAt(i, ' ');
							}
							SetWindowText(szTemp);
							m_currentPosition += FindPositionAfter(x);
						}
					}
					SetSel(m_currentPosition, m_currentPosition);
					break;
	}
}

void CFormattedEdit::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	CString str;

	switch(nChar)
	{
    case VK_CONTROL: break;
	case VK_RIGHT: GetWindowText(str);
				   if(m_shiftDown)
				   {
					   m_selCount++;
					   SetSel(m_currentPosition, m_selCount);
				   }
				   else
				   {
					   if(m_currentPosition >= (str.GetLength() - 1))
					   {
						   m_currentPosition = str.GetLength();
					   }
					   else
					   {
						   if(!m_mask.IsEmpty())
						   {
							   int pos = -1;
							   if(m_currentPosition < m_mask.GetLength() - 1)
								   pos = FindPositionAfter(m_currentPosition + 1);
							   if(pos != -1)
							   {
								   m_currentPosition += (pos + 1);
							   }
						   }
						   else
						   {
							   m_currentPosition++;
						   }
					   }
					   SetSel(m_currentPosition, m_currentPosition);
				   }
				   break;
	case VK_LEFT: if(m_shiftDown)
				  {
					  if(m_selCount > 0)
					  {
						  m_selCount--;
						  SetSel(m_currentPosition, m_selCount);
					  }
				  }
				  else
				  {
					  if(m_currentPosition > 0)
					  {
						  if(!m_mask.IsEmpty())
						  {
							  int pos = FindPositionBefore(m_currentPosition);
							  if(pos != -1)
							  {
								  m_currentPosition -= (pos + 1);
							  }
						  }
						  else
						  {
							  m_currentPosition--;
						  }
						  SetSel(m_currentPosition, m_currentPosition);
					  }
				  }
				  break;
	case VK_SHIFT: m_shiftDown = TRUE;
				   m_selCount = m_currentPosition;
				   break;
	case VK_DELETE:
				   CEdit::OnKeyDown(nChar, nRepCnt, nFlags);
				   break;
    default: short keyDown = ::GetKeyState(VK_CONTROL);
             if((keyDown & 0x8000) != 0x8000)
             {
                 if(nChar != 67)
                 {
                     int x, y;
                     GetSel(x, y);
                     if(x != y)
                     {
                         m_currentPosition = x;
                         if(m_mask.IsEmpty())
                         {
                             ReplaceSel("");
                         }
                     }
                 }
             }
             //CEdit::OnKeyDown(nChar, nRepCnt, nFlags);
	}
}

void CFormattedEdit::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
    if(!m_mask.IsEmpty())
    {
        int x, y;
        GetSel(x, y);
        char c = m_mask.GetAt(x);
        if((c != NUMBER_MASK) && (c != CHAR_MASK) && (c != ANY_MASK) && (c != '\0'))
            x++;
        m_currentPosition = x;
        SetSel(m_currentPosition, m_currentPosition); // go to beginning
//        SetSel(0, 0); // go to beginning
    }
    else
    {
        int x, y;
        GetSel(x, y);
        m_currentPosition = x;
    }
	CEdit::OnLButtonUp(nFlags, point);
}

void CFormattedEdit::OnSetFocus(CWnd* pOldWnd) 
{
	CEdit::OnSetFocus(pOldWnd);
	
	// TODO: Add your message handler code here
    if(m_currentPosition == m_mask.GetLength())
        m_currentPosition = 0;

	//SetSel(0, 0); //go to beginning
}

void CFormattedEdit::SetFlicker(BOOL _flicker)
{
	m_flicker = _flicker;
}

HBRUSH CFormattedEdit::CtlColor(CDC* pDC, UINT nCtlColor) 
{
	if (GetWindowLong(this->m_hWnd, GWL_USERDATA)==0)
		SetWindowLong(this->m_hWnd, GWL_USERDATA, 323994);	
	
	if(m_flicker == TRUE)
	{
		Sleep(10);
        if(m_keyPressed)
        {
            if(m_checkOk == 1)
            {
                /*
                pDC->SelectObject(&m_brushKeyGreen);
                pDC->SetBkMode(TRANSPARENT);
                return m_brushKeyGreen;
                */
            }
            else
            {
//                pDC->SelectObject(&m_brushKeyRed);
                pDC->SetBkMode(TRANSPARENT);
                return m_brushKeyRed;
            }
        }
		else
        {
//            pDC->SelectObject(&m_brushBackground);
            pDC->SetBkMode(TRANSPARENT);
            return m_brushBackground;
        }
	}
    else
    {
        pDC->SetBkMode(TRANSPARENT);
        return m_brushBackground;
    }
	
	// TODO: Return a non-NULL brush if the parent's handler should not be called
	return NULL;
}

BOOL CFormattedEdit::ValidateMask()
{
	BOOL validateOK = TRUE;
	CString sz;

	GetWindowText(sz);
	for(int i = 0; (i < m_mask.GetLength()) && (validateOK == TRUE); i++)
	{
		switch(m_mask[i])
		{
		case NUMBER_MASK: validateOK = IsCharAlphaNumeric(sz.GetAt(i));
						  break;
		case CHAR_MASK: validateOK = IsCharAlpha(sz.GetAt(i));
						break;
		default: break;
		}
	}

	return validateOK;
}

int CFormattedEdit::FindPositionAfter(int _startPos)
{
	int pos = 0;
	CString sz;

	sz.Format("%c%c%c", NUMBER_MASK, CHAR_MASK, ANY_MASK);
	pos = (m_mask.Mid(_startPos)).FindOneOf(sz);
	
	return pos;
}

int CFormattedEdit::FindPositionBefore(int _stopPos)
{
	if(_stopPos == 0)
		return 0;
	
	CString sz;
	sz.Format("%c%c%c", NUMBER_MASK, CHAR_MASK, ANY_MASK);
	CString szTemp = m_mask.Left(_stopPos);
	szTemp.MakeReverse();
	int pos = szTemp.FindOneOf(sz);

	return pos;
}

BOOL CFormattedEdit::CheckMask(int _pos)
{
	return ((m_mask[_pos] == NUMBER_MASK) || (m_mask[_pos] == CHAR_MASK) || (m_mask[_pos] == ANY_MASK));
}

void CFormattedEdit::SetPAN(BOOL bIsPAN)
{
	m_bIsPAN = bIsPAN;
}

void CFormattedEdit::SetBarcode(BOOL bIsBarcode /* = FALSE */)
{
    m_bIsBarcode = bIsBarcode;
}

short CFormattedEdit::VerifyPAN()
{
    short i = 0;
    int total = 0;
    CString sPAN;
    GetWindowText (sPAN);

    sPAN.Remove(' ');
    sPAN.Remove('-');
    // Check validity of the PAN.
    if(sPAN.IsEmpty())
        return -1;
    if (sPAN.GetLength() >= 19 || sPAN.GetLength() < 16 )
    {
        return 0;
    }

    // Calculate a Luhn check digit
    for(i = sPAN.GetLength()-2; i > -1; i -= 2)
    {
        if (sPAN.GetAt(i)< '5')
            total+= ( sPAN.GetAt(i)- '0') * 2;
        else
            total+= (((sPAN.GetAt(i) - '0') * 2) - 10) + 1;
    }

    for(i = sPAN.GetLength()-3; i> -1; i -= 2)
        total += sPAN.GetAt(i) - '0';

    total = (((total/10) + 1) * 10) - total;
    if (total == 10) total = 0;

    //----- MVE
    if (total > 10) total -= 10;
    //----- MVE

    char checkDigit = total + '0';

    // Check the last digit of the PAN against our calculated check 
    // digit.
    if ( sPAN.GetAt(sPAN.GetLength()-1) != checkDigit)
        return 0;
    else
        return 1;
}

short CFormattedEdit::VerifyBarcode()
{
	CString barcode;
	GetWindowText(barcode);

//	return (Utils::VerifyBarcode(barcode));
	return 1;
}

void CFormattedEdit::OnPaint()
{
    CEdit::OnPaint();

    if((m_fontInitialized == FALSE) && (m_mask.IsEmpty()))
    {
        SetFont(this->GetFont());
        m_fontInitialized = TRUE;
    }

    if((m_bIsBarcode == TRUE) || (m_bIsPAN == TRUE))
    {
        CDC * pDC = GetDC();
        RECT cl;
        GetClientRect(&cl);
        CSize t = pDC->GetTextExtent("1");
        COLORREF col = RGB(255, 255, 255);
        if(m_checkOk == 1)
            col = RGB(0, 255, 0);
        CPen pen( PS_SOLID, 3, col );
        CPen * pOldPen = (CPen*)pDC->SelectObject( &pen );
        pDC->MoveTo( 2, t.cy + 1 );
        pDC->LineTo( cl.right - 2, t.cy + 1 );
        pDC->SelectObject( pOldPen );
    }

	if (m_bErrorValidate)
	{
		RECT cl;
		CDC * pDC = GetDC();
		GetClientRect(&cl);

		CPen pen( PS_SOLID, 1, RGB(255, 0, 0) );
		CPen * pOldPen = (CPen*)pDC->SelectObject( &pen );

		pDC->MoveTo(cl.left+1, cl.top+1);
		pDC->LineTo(cl.right-1, cl.top+1);
		pDC->LineTo(cl.right-1, cl.bottom-1);
		pDC->LineTo(cl.left+1, cl.bottom-1);
		pDC->LineTo(cl.left+1, cl.top+1);
		pDC->SelectObject( pOldPen );
	}
}

BOOL CFormattedEdit::PreTranslateMessage(MSG* pMsg)
{
    if(pMsg->message == WM_KEYDOWN)
    {
        short keyDown = ::GetKeyState(VK_CONTROL);
        if((keyDown & 0x8000) == 0x8000)
        {
            int x, y;
            GetSel(x, y);
            if(pMsg->wParam == 67)
            {
                CString szTemp;
                GetWindowText(szTemp);
                if(x != y)
                    szTemp = szTemp.Mid(x, y - x);

                HGLOBAL hGLOBAL;
                LPSTR lpszData;

                if(::OpenClipboard(this->GetSafeHwnd()))
                {
                    ::EmptyClipboard();

                    hGLOBAL = ::GlobalAlloc(GMEM_ZEROINIT, szTemp.GetLength() + 1);
                    if(hGLOBAL == NULL) return TRUE;
                    lpszData = (LPSTR)::GlobalLock(hGLOBAL);
                    strcpy(lpszData, szTemp);

                    ::GlobalUnlock(hGLOBAL);
                    ::SetClipboardData(CF_TEXT, hGLOBAL);
                    ::CloseClipboard();
                }
            }
            else if(pMsg->wParam == 86)
            {
                if(::OpenClipboard(this->GetSafeHwnd()))
                {
                    CString existingText;
                    GetWindowText(existingText);

                    char * buffer;
                    buffer = (char *)::GetClipboardData(CF_TEXT);
                    ::CloseClipboard();

                    if(x != y)
                    {
                        existingText.Replace(existingText.Mid(x, y - x), buffer);
                    }
                    else
                        existingText.Insert(m_currentPosition, buffer);
                    SetWindowText(existingText);
                    m_currentPosition = x;
                }
            }
        }
    }

    return CEdit::PreTranslateMessage(pMsg);
}

BOOL CFormattedEdit::isPatternMached(CString val, CString pattern)
{
	CAtlRegExp<> re;
	re.Parse(pattern);
    CAtlREMatchContext<> mc; 
	return re.Match(val, &mc);
}

void CFormattedEdit::SetRestriction(int type, BOOL required)
{
    m_restrictionRequired = required;
    m_restrictionType = type;
}

BOOL CFormattedEdit::IsValid()
{
    CString strWindowText="";
    GetWindowText(strWindowText);
    BOOL bIsValid=FALSE;
    
    if (strWindowText.GetLength()==0)
    {
        if (m_restrictionRequired == TRUE)
        {
            m_bErrorValidate = TRUE;
            RaiseError();
            return FALSE;
        }
        return TRUE;
    }

    switch(m_restrictionType)
    {
    case CDMS_STRING:
        bIsValid = isPatternMached(strWindowText, "([a-zA-Z0-9])");
        break;

    case CDMS_NUMBER:
        bIsValid = isPatternMached(strWindowText, "([0-9])");
        break;
    }

    if (bIsValid == TRUE)
    {
        if (m_errorWnd != NULL)
        {
          m_errorWnd->ShowWindow(SW_HIDE);
          GetParent()->RedrawWindow();
        }
    }

    if (bIsValid == FALSE)
    {
        RaiseError();
    }    
    
    m_bErrorValidate = !bIsValid;    
    return bIsValid;
}

void CFormattedEdit::RaiseError(void)
{
	Invalidate(TRUE);
	OnPaint();
	CRect cl;
	GetClientRect(&cl);
	
	ClientToScreen(&cl);
	GetParent()->ScreenToClient(&cl);
    m_bErrorValidate = TRUE;
	if (m_errorWnd == NULL)
	{	
		m_errorWnd = new CStatic();
		m_errorWnd->Create("", WS_VISIBLE|WS_CHILD|SS_BITMAP|SS_CENTERIMAGE, CRect(cl.right+3, cl.top, cl.right+19, cl.bottom), GetParent());
		
		bmp.LoadBitmap(IDB_BITMAP1);
		m_errorWnd->SetBitmap(bmp);	
	}
    else
    {
        if (m_errorWnd->IsWindowVisible()==FALSE)
        {
            m_errorWnd->ShowWindow(SW_SHOW);
        }
    }
    Invalidate(TRUE);
}

int CFormattedEdit::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	SetWindowLong(this->m_hWnd, GWL_USERDATA, 323994);

	if (CEdit::OnCreate(lpCreateStruct) == -1)
		return -1;

	return 0;
}

void CFormattedEdit::OnShowWindow(BOOL bShow, UINT nStatus)
{
	CEdit::OnShowWindow(bShow, nStatus);

	// TODO: Add your message handler code here
}

BOOL CFormattedEdit::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Add your specialized code here and/or call the base class

	return CEdit::PreCreateWindow(cs);
}
