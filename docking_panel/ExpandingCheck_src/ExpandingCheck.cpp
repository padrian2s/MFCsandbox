/////////////////////////////////////////////////////////////////////////////////////
// CExpandingCheck class written by MAV, 9 October 2002                            //
// Feel free to use this code in your applications or distribute it.               //
// If you have found a bug or improved the code, drop me e-mail to mav_stuff@bk.ru //
/////////////////////////////////////////////////////////////////////////////////////

// ExpandingCheck.cpp : implementation file
//

#include "stdafx.h"
#include "ExpandingCheck.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExpandingCheck

CExpandingCheck::CExpandingCheck()
{
	m_pFrame = NULL;
	m_bPrevState = 0;
}

CExpandingCheck::~CExpandingCheck()
{

}


BEGIN_MESSAGE_MAP(CExpandingCheck, CButton)
	//{{AFX_MSG_MAP(CExpandingCheck)
	ON_CONTROL_REFLECT_EX(BN_CLICKED, OnClicked)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExpandingCheck message handlers

BOOL CExpandingCheck::OnClicked() 
{
	if(m_pFrame == NULL)
		return 0;

	int nCheck = GetCheck();

	if (nCheck == m_bPrevState)
		return 0;

	m_bPrevState = nCheck;

	if(nCheck == 1)
	{
		Expand();
	}
	else if(nCheck == 0)
	{
		Collapse();
	}
	
	return 0;
}

//call this function in your dialog's constuctor
//pFrame must point to static in which contols are about to be hidden or shown
void CExpandingCheck::SetFrame(CWnd *pFrame)
{
	ASSERT(pFrame != NULL);
	m_pFrame = pFrame;

}

void CExpandingCheck::PreSubclassWindow() 
{
	ASSERT(m_pFrame);
	ASSERT(::IsWindow(m_pFrame->m_hWnd));
	RecalcLayout();	

	m_bPrevState = GetCheck();

	if(m_bPrevState == 0)
		Collapse();
	CButton::PreSubclassWindow();
}

void CExpandingCheck::Expand()
{
	CWnd* pParent = GetParent();
	ASSERT(pParent);
	int dx = m_rcMaxSize.bottom - m_rcMinSize.top - 20;
	RECT rcWnd;

	for (int i=0;i<=m_haInsideWindows.GetUpperBound();i++)
	{
		::ShowWindow(m_haInsideWindows[i],SW_SHOW);
		::RedrawWindow(m_haInsideWindows[i],NULL,NULL,RDW_UPDATENOW);
	}

	m_pFrame->GetWindowRect(&rcWnd);
	pParent->ScreenToClient(&rcWnd);
	rcWnd.bottom+=dx;
	m_pFrame->MoveWindow(&rcWnd);
	
	for (i=0;i<=m_haOutsideWindows.GetUpperBound();i++)
	{
		::GetWindowRect(m_haOutsideWindows[i],&rcWnd);
		pParent->ScreenToClient(&rcWnd);

		rcWnd.top+=dx;
		rcWnd.bottom+=dx;

		::MoveWindow(m_haOutsideWindows[i],rcWnd.left,rcWnd.top,rcWnd.right - rcWnd.left,
			rcWnd.bottom - rcWnd.top,TRUE);
	}

	pParent->GetWindowRect(&rcWnd);
	rcWnd.bottom += dx;
	pParent->MoveWindow(&rcWnd);
//	pParent->CenterWindow(NULL);

}

void CExpandingCheck::Collapse()
{
	CWnd* pParent = GetParent();
	ASSERT(pParent);
	int dx = m_rcMaxSize.bottom - m_rcMinSize.top - 20;
	RECT rcWnd;

	for (int i=0;i<=m_haInsideWindows.GetUpperBound();i++)
	{
		::ShowWindow(m_haInsideWindows[i],SW_HIDE);
	}

	m_pFrame->GetWindowRect(&rcWnd);
	pParent->ScreenToClient(&rcWnd);
	rcWnd.bottom-=dx;
	m_pFrame->MoveWindow(&rcWnd);


	for (i=0;i<=m_haOutsideWindows.GetUpperBound();i++)
	{
		::GetWindowRect(m_haOutsideWindows[i],&rcWnd);
		pParent->ScreenToClient(&rcWnd);

		rcWnd.top-=dx;
		rcWnd.bottom-=dx;

		::MoveWindow(m_haOutsideWindows[i],rcWnd.left,rcWnd.top,rcWnd.right - rcWnd.left,
			rcWnd.bottom - rcWnd.top,TRUE);
	}
	
	pParent->GetWindowRect(&rcWnd);
	rcWnd.bottom -= dx;
	pParent->MoveWindow(&rcWnd);
//	pParent->CenterWindow(NULL);

}

BOOL CALLBACK CExpandingCheck::WndEnumProc(HWND hWnd, LPARAM lParam)
{
	CExpandingCheck* p = (CExpandingCheck*)lParam;
	ASSERT(p);
	HWND hPar = ::GetParent(p->m_hWnd);
	if(::GetParent(hWnd) != hPar || !(::GetWindowLong(hWnd,GWL_STYLE)&WS_VISIBLE))
		return TRUE;

	RECT rcWnd;
	::GetWindowRect(hWnd,&rcWnd);
	CWnd* pWnd = CWnd::FromHandle(hPar);
	pWnd->ScreenToClient(&rcWnd);
	// is it inside?
	if(rcWnd.top > p->m_rcMaxSize.top && rcWnd.bottom < p->m_rcMaxSize.bottom)
		p->m_haInsideWindows.Add(hWnd);
	else if (rcWnd.top > p->m_rcMaxSize.bottom)
		p->m_haOutsideWindows.Add(hWnd);
	return TRUE;
}


void CExpandingCheck::SetCheck(int nCheck)
{
	CButton::SetCheck(nCheck);

	if (nCheck == m_bPrevState)
		return;

	if(nCheck == 0)
		Collapse();
	else
		Expand();

	m_bPrevState = nCheck;

}


void CExpandingCheck::RecalcLayout()
{
	CWnd* pParent = GetParent();
	ASSERT(pParent);

	GetWindowRect(&m_rcMinSize);
	m_rcMinSize.bottom += 5;

	if (m_pFrame != NULL)
	{
		if(::IsWindow(m_pFrame->m_hWnd))
			m_pFrame->GetWindowRect(&m_rcMaxSize);
	}

	m_rcMinSize.left = m_rcMaxSize.left;
	m_rcMinSize.right = m_rcMaxSize.right;

	pParent->ScreenToClient(&m_rcMinSize);
	pParent->ScreenToClient(&m_rcMaxSize);
	
	m_haInsideWindows.RemoveAll();
	m_haOutsideWindows.RemoveAll();

	::EnumChildWindows(pParent->m_hWnd,WndEnumProc,(long)this);


}



