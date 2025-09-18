// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "SCBDemo.h"

#include "AForm.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_WM_EXITMENULOOP()
	//}}AFX_MSG_MAP
	ON_COMMAND_RANGE(ID_VIEW_1, ID_VIEW_5, OnViewMy)
	ON_UPDATE_COMMAND_UI_RANGE(ID_VIEW_1, ID_VIEW_5, OnUpdateViewMy)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,			// status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	m_hWndBeforeMenu = NULL;
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.Create(this) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;		// fail to create
	}

	// second toolbar must have different ID
	if (!m_wndToolBar2.Create(this, WS_CHILD | WS_VISIBLE | CBRS_TOP, 
		AFX_IDW_CONTROLBAR_FIRST + 32) ||
		!m_wndToolBar2.LoadToolBar(IDR_TOOLBAR1))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;		// fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;		// fail to create
	}

	int i;
	CString sTitle;
	for (i = 0; i < NUMBARS; i++)
	{
		sTitle.Format(_T("My Bar %d"), i + 1);
		if (!m_wndMyBars[i].Create(this,
			RUNTIME_CLASS (CAForm),
			(CCreateContext *)(lpCreateStruct->lpCreateParams),
			sTitle, WS_CHILD | WS_VISIBLE | CBRS_TOP,
			AFX_IDW_CONTROLBAR_FIRST + 33 + i))
		{
			TRACE0("Failed to create ViewBar\n");
			return -1;		// fail to create
		}
	}

	// TODO: Remove this if you don't want tool tips or a resizeable toolbar
	m_wndToolBar.SetBarStyle(m_wndToolBar.GetBarStyle() |
		CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC);
	m_wndToolBar2.SetBarStyle(m_wndToolBar.GetBarStyle() |
		CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC);
	// CBRS_SIZE_DYNAMIC allows the bar to be resized when floating
	for (i = 0; i < NUMBARS; i++)
		m_wndMyBars[i].SetBarStyle(m_wndMyBars[i].GetBarStyle() |
			CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC);

	EnableDocking(CBRS_ALIGN_ANY);
//	m_pFloatingFrameClass = RUNTIME_CLASS(CSCBMiniDockFrameWnd);

	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	m_wndToolBar2.EnableDocking(CBRS_ALIGN_ANY);
	for (i = 0; i < NUMBARS; i++)
		m_wndMyBars[i].EnableDocking(CBRS_ALIGN_ANY);

	DockControlBar(&m_wndToolBar);
	DockControlBar(&m_wndToolBar2, AFX_IDW_DOCKBAR_RIGHT);
	for (i = 0; i < NUMBARS; i++)
		DockControlBar(&m_wndMyBars[i], AFX_IDW_DOCKBAR_LEFT);

	CSizingControlBar::GlobalLoadState(this, _T("SCBDemo2.BarState"));
	LoadBarState(_T("SCBDemo2.BarState"));

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//	the CREATESTRUCT cs

	return CMDIFrameWnd::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CMDIFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CMDIFrameWnd::Dump(dc);
}

#endif //_DEBUG

BOOL CMainFrame::DestroyWindow() 
{
	CSizingControlBar::GlobalSaveState(this,_T("SCBDemo2.BarState"));
	SaveBarState(_T("SCBDemo2.BarState"));

	return CMDIFrameWnd::DestroyWindow();
}

void CMainFrame::OnViewMy(UINT nID) 
{
	int nBar = nID - ID_VIEW_1;
	BOOL bShow = m_wndMyBars[nBar].IsVisible();
	ShowControlBar(&m_wndMyBars[nBar], !bShow, FALSE);
}

void CMainFrame::OnUpdateViewMy(CCmdUI* pCmdUI) 
{
	int nBar = pCmdUI->m_nID - ID_VIEW_1;
	pCmdUI->Enable();
	pCmdUI->SetCheck(m_wndMyBars[nBar].IsVisible());
}


/* ---------------------------------------------------------------
		If the last key pressed before the menu is exited was
	the escape key, then set the focus back to the window that
	was active before the menu was activated.
	*	This message is not available in class wizard as a
	frame window message. *
--------------------------------------------------------------- */

void CMainFrame::OnExitMenuLoop( BOOL bIsTrackPopupMenu )
{
	if (((CSCBDemoApp *)AfxGetApp())->m_nLastKey == VK_ESCAPE) {
		if (m_hWndBeforeMenu) {
			::SetFocus(m_hWndBeforeMenu);
		}
	}
	m_hWndBeforeMenu = NULL;
	CWnd::OnExitMenuLoop(bIsTrackPopupMenu);
}
