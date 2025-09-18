#include "stdafx.h"
#include <commctrl.h>
#include "advancedStaticCtrl.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


CStaticStyledCtrl::CStaticStyledCtrl()
 {
  m_clrBackColor                    = ::GetSysColor(COLOR_3DFACE);
  m_clrTextBackColor                = ::GetSysColor(COLOR_3DFACE);
  m_clrTextColor                    = ::GetSysColor(COLOR_WINDOWTEXT);
  m_clrSaveTextColor                = m_clrTextColor;
  m_clrHightLight                   = ::GetSysColor(COLOR_HIGHLIGHT);
  m_hBackBrush                      = ::CreateSolidBrush(m_clrBackColor);

  ::GetObject((HFONT)GetStockObject(DEFAULT_GUI_FONT), sizeof(m_stLF), &m_stLF);  
  m_cFont.CreateFontIndirect(&m_stLF);
 }

CStaticStyledCtrl::~CStaticStyledCtrl()
 {  
  m_cFont.DeleteObject();
  DeleteObject(m_hBackBrush);
 }

// PROTECTED MEMBER FUNCTIONS
BOOL CStaticStyledCtrl::ReconstructFont()
 {
  m_cFont.DeleteObject();

  BOOL bRet = m_cFont.CreateFontIndirect(&m_stLF);
  this->SetFont(&m_cFont);
  Invalidate(TRUE);

  return bRet;
 }

// COLOR FUNCTIONS
CStaticStyledCtrl &CStaticStyledCtrl::SetBkColor(COLORREF clr)
 {
  m_clrBackColor         = clr;

  DeleteObject(m_hBackBrush);

  m_hBackBrush = CreateSolidBrush(m_clrBackColor);

  Invalidate(TRUE);

  return *this;
 }

CStaticStyledCtrl &CStaticStyledCtrl::SetDefaultBkColor()
 {
  m_clrBackColor         = ::GetSysColor(COLOR_3DFACE);
  DeleteObject(m_hBackBrush);
  m_hBackBrush = CreateSolidBrush(m_clrBackColor);
  Invalidate(TRUE);
  return *this;
 }

CStaticStyledCtrl &CStaticStyledCtrl::SetDefaultTextBackColor()
 {
  m_clrTextBackColor         = ::GetSysColor(COLOR_3DFACE);
  Invalidate(TRUE);
  return *this;
 }

CStaticStyledCtrl &CStaticStyledCtrl::SetDefaultTextColor()
 {
  m_clrTextColor         = ::GetSysColor(COLOR_WINDOWTEXT);
  Invalidate(TRUE);
  return *this;
 }

CStaticStyledCtrl &CStaticStyledCtrl::SetHighLightColor(COLORREF clr)
 {
  m_clrHightLight = clr;
  Invalidate(TRUE);
  return *this;
 }

CStaticStyledCtrl &CStaticStyledCtrl::SetTextBackColor(COLORREF clr)
 {
  m_clrTextBackColor         = clr;
  Invalidate(TRUE);
  return *this;
 }

CStaticStyledCtrl &CStaticStyledCtrl::SetTextColor(COLORREF clr)
 {
  m_clrTextColor         = clr;
  Invalidate(TRUE);
  return *this;
 }

// FONT FUNCTIONS
CStaticStyledCtrl &CStaticStyledCtrl::SetFontBold(BOOL bBold)
 {
  m_stLF.lfWeight = bBold ? FW_BOLD : FW_NORMAL;
  ReconstructFont();
  return *this;
 }

// --------------------------------------------------------------------------

CStaticStyledCtrl &CStaticStyledCtrl::SetFontItalic(BOOL bItalic)
 {
  m_stLF.lfItalic = bItalic;
  ReconstructFont();
  return *this;
 }

// --------------------------------------------------------------------------

CStaticStyledCtrl &CStaticStyledCtrl::SetFontName(LPCTSTR szFaceName)
 {
  strcpy(m_stLF.lfFaceName, szFaceName);
  ReconstructFont();
  return *this;
 }

// --------------------------------------------------------------------------

CStaticStyledCtrl &CStaticStyledCtrl::SetFontSize(BOOL iSize)
 {
  m_stLF.lfHeight = iSize;
  ReconstructFont();
  return *this;
 }

// --------------------------------------------------------------------------

CStaticStyledCtrl &CStaticStyledCtrl::SetFontUnderline(BOOL bUnderline)
 {
  m_stLF.lfUnderline = bUnderline;
  ReconstructFont();
  return *this;
 }


CString CStaticStyledCtrl::GetText()
 {
  return m_strText;
 }


CStaticStyledCtrl &CStaticStyledCtrl::SetText(LPCTSTR szText)
 {
  CStatic::SetWindowText(szText);
  return *this;
 }

CStaticStyledCtrl &CStaticStyledCtrl::SetToolTipPosition(int iPosition)
 {
  m_cControlToolTip.SetPosition(iPosition);
  return *this;
 }

// --------------------------------------------------------------------------

CStaticStyledCtrl &CStaticStyledCtrl::SetToolTipText(LPCTSTR lpszText)
 {
  m_cControlToolTip.SetText(lpszText);
  return *this;
 }

CStaticStyledCtrl &CStaticStyledCtrl::ShowToolTipOnlyOnMouseClick(BOOL bUse)
 {
  m_cControlToolTip.ShowOnlyOnMouseClickDown(bUse);
  return *this;
 }


CStaticStyledCtrl &CStaticStyledCtrl::UseToolTip(BOOL bUse)
 {
  m_bUseToolTip = bUse;
  if (bUse)
   {
    m_cControlToolTip.Attach(this);
   }
  else {
        m_cControlToolTip.Detach();
       }
  return *this;
 }

BEGIN_MESSAGE_MAP(CStaticStyledCtrl, CStatic)
	//{{AFX_MSG_MAP(CStaticStyledCtrl)	
	ON_WM_CTLCOLOR_REFLECT()
	ON_WM_PAINT()	
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

// CStaticStyledCtrl message handlers
BOOL CStaticStyledCtrl::DestroyWindow() 
 {
  return CStatic::DestroyWindow();
 }

HBRUSH CStaticStyledCtrl::CtlColor(CDC *pDC, UINT nCtlColor)
 {  
    pDC->SetTextColor(m_clrTextColor);
	pDC->SetBkColor(m_clrBackColor);
    pDC->SetBkMode(TRANSPARENT);   
	return m_hBackBrush;
 }

void CStaticStyledCtrl::OnPaint() 
 {
    CStatic::OnPaint();
    return;
 }

 void CStaticStyledCtrl::PreSubclassWindow() 
 {
	CStatic::PreSubclassWindow();
 }

 LRESULT CStaticStyledCtrl::WindowProc(UINT message, WPARAM wParam, LPARAM lParam) 
 {
	return CStatic::WindowProc(message, wParam, lParam);
 }