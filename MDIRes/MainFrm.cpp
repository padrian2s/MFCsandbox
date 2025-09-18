// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "MDIRes.h"

#include "MainFrm.h"
#include ".\mainfrm.h"

#include "MDIRes.h"
#include "myFormView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	ON_WM_CREATE()
    ON_COMMAND(ID_HELP_AAA, OnHelpAaa)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};


// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
}

CMainFrame::~CMainFrame()
{
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}
	// TODO: Delete these three lines if you don't want the toolbar to be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CMDIFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}


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


// CMainFrame message handlers


void CMainFrame::OnHelpAaa()
{
    CString sAction;
    sAction.LoadString(IDS_STRING_PROCESSCASE_VIEW);

        CMDIChildWnd * pExistingForm;

        pExistingForm = ((CMainFrame*)AfxGetMainWnd())->FindWindowByTitle(sAction);
        if(pExistingForm == NULL)
        {
            CDocument *pDoc=((CMDIResApp*)AfxGetApp())->pDocTemplate2->CreateNewDocument();

            CMDIChildWnd  *frameChild=new CMDIChildWnd();
            BOOL ret = frameChild->Create(NULL, sAction, WS_CHILD | WS_OVERLAPPEDWINDOW);            
            frameChild->BeginWaitCursor();

            CCreateContext cContext;
            cContext.m_pNewViewClass=RUNTIME_CLASS(myFormView);
            cContext.m_pCurrentDoc=pDoc;	
            frameChild->CreateView(&cContext);

            POSITION vpos;
            vpos=pDoc->GetFirstViewPosition();

            myFormView *pProcessCase=(myFormView*)pDoc->GetNextView(vpos);				

            frameChild->SetWindowPos(&wndTop, 0, 0, 0, 0, SWP_NOSIZE);
            frameChild->InitialUpdateFrame(pDoc, TRUE);
            frameChild->EndWaitCursor();

        }
    
}

CMDIChildWnd * CMainFrame::FindWindowByTitle(CString & windowTitle)
{
    CMDIChildWnd *pMDIChildWnd = MDIGetActive();
    CString _windowTitle;

    while (pMDIChildWnd)
    {
        pMDIChildWnd->GetWindowText(_windowTitle);
        if(windowTitle == _windowTitle)	
            return pMDIChildWnd;

        pMDIChildWnd=(CMDIChildWnd *)pMDIChildWnd->GetNextWindow();
    }

    return NULL;
}