// ThreadedDialogDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ThreadedDialog.h"
#include "ThreadedDialogDlg.h"
#include ".\threadeddialogdlg.h"

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
// CThreadedDialogDlg dialog

CThreadedDialogDlg::CThreadedDialogDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CThreadedDialogDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CThreadedDialogDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pThread = NULL;
}

void CThreadedDialogDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CThreadedDialogDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CThreadedDialogDlg, CDialog)
	//{{AFX_MSG_MAP(CThreadedDialogDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_TIMER()
	ON_MESSAGE(WM_INFORM_CLOSE, OnClosing)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDOK, OnBnClickedOk)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CThreadedDialogDlg message handlers

BOOL CThreadedDialogDlg::OnInitDialog()
{
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
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CThreadedDialogDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CThreadedDialogDlg::OnPaint() 
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
HCURSOR CThreadedDialogDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CThreadedDialogDlg::OnOK() 
{
	if(m_pThread == NULL)
	{
		m_pThread = new CUIThread();
		m_pThread->m_bAutoDelete = FALSE;	// Disable auto deletion of thread object upon thread termination.
		m_pThread->SetParent(this);
		
		// Set the display message.
		m_pThread->SetString("This is a threaded dialog box.\n\nThis message will be cleared in 10 second(s) or when OK button is depressed.");

		// Start the interface thread.
		m_pThread->CreateThread();
		m_nDownCounter = 10;
		SetTimer(1, 1000, NULL);


		CWnd* pWnd = GetDlgItem(IDOK);
		pWnd->EnableWindow(FALSE);
	}
}

void CThreadedDialogDlg::OnCancel() 
{
	CDialog::OnCancel();
}


void CThreadedDialogDlg::OnTimer(UINT nIDEvent) 
{
	// Down counting.
	if(m_pThread && m_pThread->IsRunning())
	{
		m_szMessage.Format("This is a threaded dialog box.\n\nThis message will be cleared in %d second(s) or when OK button is depressed.", --m_nDownCounter);
		m_pThread->SetString(m_szMessage);
	}

	
	// Killing the interface thread.
	if(m_pThread && nIDEvent == 1 && m_nDownCounter == 0)
	{
		if( m_pThread->IsRunning())
		{
			m_pThread->Kill();
			KillTimer(1);
		}
	}	
	
	CDialog::OnTimer(nIDEvent);
}

LRESULT CThreadedDialogDlg::OnClosing(WPARAM wParam, LPARAM lParam)
{
	DWORD dwStatus;
	
	// Removing UI thread
	if (m_pThread != NULL)
	{
		VERIFY(::GetExitCodeThread(m_pThread->m_hThread, &dwStatus));
		if (dwStatus == STILL_ACTIVE)
		{
			// If the thread is still running, try to remove it 
			// in the next round.
			PostMessage(WM_INFORM_CLOSE, 0, 0);
		}
		else
		{
			// Completely remove the thread object
			delete m_pThread;
			m_pThread = NULL;

			CWnd* pWnd = GetDlgItem(IDOK);
			pWnd->EnableWindow(TRUE);

		}
	}

	return 0;
}


void CThreadedDialogDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here	
	OnOK();
	Sleep(5000);
}
