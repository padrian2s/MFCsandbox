// MainDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Main.h"
#include "MainDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMainDlg dialog

CMainDlg::CMainDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMainDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMainDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

	// initialize the app pointer for comparison
	m_pApp = AfxGetApp(); 

	// our event sink support
	m_dwMfcCookie = 0; 
	m_bMfcConnected = FALSE; 
	m_bAtlConnected = FALSE; 
}

void CMainDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMainDlg)
	DDX_Control(pDX, IDC_EVENTCONTROL1, m_ctlEventControl);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMainDlg, CDialog)
	//{{AFX_MSG_MAP(CMainDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnControlButton)
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_EVENTSINK_MAP(CMainDlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CMainDlg)
	ON_EVENT(CMainDlg, IDC_EVENTCONTROL1, 1 /* TestEvent */, OnTestEvent, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMainDlg message handlers

BOOL CMainDlg::OnInitDialog()
{
	// call the base class routine 
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// hookup for events using the MFC event sink class 
	if (!AfxConnectionAdvise(m_ctlEventControl.GetControlUnknown(), DIID__IEventControlEvents, 
					m_MfcSink.GetIDispatch(FALSE), FALSE, &m_dwMfcCookie))
		AfxMessageBox(_T("Error hooking up the MFC event sink.")); 
	else
		m_bMfcConnected = TRUE; 

	// hookup for events using the ATL event sink class
	HRESULT hRes = m_AtlSink.DispEventAdvise(m_ctlEventControl.GetControlUnknown());
	if (hRes != S_OK)
		AfxMessageBox(_T("Error hooking up the ATL event sink.")); 
	else
		m_bAtlConnected = TRUE; 

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMainDlg::OnDestroy() 
{
	// disconnect the MFC event sink 
	if (m_bMfcConnected)
		AfxConnectionUnadvise(m_ctlEventControl.GetControlUnknown(), 
				DIID__IEventControlEvents, m_MfcSink.GetIDispatch(FALSE), FALSE, m_dwMfcCookie); 

	// disconnect the ATL event sink 
	if (m_bAtlConnected)
		HRESULT hRes = m_AtlSink.DispEventUnadvise(m_ctlEventControl.GetControlUnknown()); 

	// call the base class routine 
	CDialog::OnDestroy();
}

void CMainDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMainDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMainDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

// call the control's method to fire off the test event
void CMainDlg::OnControlButton() 
{
	// call the method in the ActiveX control, this in turn will 
	// fire back an event.
	m_ctlEventControl.TestMethod(); 
}

/////////////////////////////////////////////////////////////////////////////
// Demonstration code

// *********************************************************
//	OnTestEvent
//
//	ActiveX event handler for the TestEvent fired from 
//	the control. 
//
//	This one is wired in by the COleControlSite and takes 
//	care of setting the MFC state before we are called.  
//	To see this, put a breakpoint in the function below and 
//	take a look at the call stack when it is reached.  Shortly
//	before the OnTestEvent function is called, the control site's
//  COleControlSite::XEventSink::Invoke is called and in this 
//	routine the METHOD_PROLOGUE_EX(COleControlSite, EventSink)
//	call sets the MFC state. 
//
//	Arguments:
//
//		None
//
//	Returns:
//
//		Nothing
//

void CMainDlg::OnTestEvent() 
{
	// get our app pointer (it is correct here, CMainApp *)
	CWinApp *pApp = AfxGetApp(); 

	// make sure the MFC state is correct
	if (m_pApp == pApp)
		AfxMessageBox(_T("In the dialog's ActiveX event handler, the MFC state is correct.")); 
	else
		AfxMessageBox(_T("In the dialog's ActiveX event handler, the MFC state is NOT correct.")); 
}



