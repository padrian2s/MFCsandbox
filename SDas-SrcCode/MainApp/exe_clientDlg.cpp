// exe_clientDlg.cpp : implementation file
//

#include "stdafx.h"
#include "exe_client.h"
#include "exe_clientDlg.h"
#include "ChoseProgId.h"

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
// CExe_clientDlg dialog

CExe_clientDlg::CExe_clientDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CExe_clientDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CExe_clientDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CExe_clientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CExe_clientDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CExe_clientDlg, CDialog)
	//{{AFX_MSG_MAP(CExe_clientDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_FILE_INSERTCONTROL, OnFileInsertcontrol)
	ON_COMMAND(ID_EXIT, OnExit)
	ON_COMMAND(ID_HELP_ABOUT, OnHelpAbout)
	ON_COMMAND(ID_DESTROYCONTROL, OnDestroycontrol)
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExe_clientDlg message handlers

BOOL CExe_clientDlg::OnInitDialog()
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
    //m_ControlWrapper=NULL;
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CExe_clientDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CExe_clientDlg::OnPaint() 
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
HCURSOR CExe_clientDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CExe_clientDlg::OnFileInsertcontrol() 
    {
	// TODO: Add your command handler code here

    //
    //prompt  the user for the progid of the ActiveX  control
    //
	CChoseProgID dlgControlProgid;
    if (IDCANCEL== dlgControlProgid.DoModal())
        {
        return;
        }
    CString strControlProgid;
    strControlProgid=dlgControlProgid.Progid();

    OnDestroycontrol();


    //
    //we will make the ActiveX control occupy the entire client area
    //
    RECT rc;
    ::GetClientRect(m_hWnd,&rc);


    //
    //create the ActiveX control with the given prog id
    //

   BOOL bStat=FALSE;
    bStat=
    m_ControlWrapper.CreateControl (
                            strControlProgid,
                            "",
                            WS_VISIBLE, 
                            rc,
                            this,
                            5000,
                            NULL,
                            FALSE,
                            NULL);

    if (bStat == FALSE)
        {
        ::MessageBox (m_hWnd,"Error!!","Could not place control",MB_OK);
        return;
        }

    ::EnableMenuItem(
                ::GetMenu(m_hWnd),
                ID_DESTROYCONTROL,
                MF_ENABLED | MF_BYCOMMAND);


    //
    //display the prog id in the window's title bar
    //
    ::SetWindowText (m_hWnd,strControlProgid );

    }

void CExe_clientDlg::OnExit() 
    {
	// TODO: Add your command handler code here
	PostQuitMessage(0);
    }

void CExe_clientDlg::OnHelpAbout() 
    {
	// TODO: Add your command handler code here
	CAboutDlg dlgAbout;
    dlgAbout.DoModal ();
    }

void CExe_clientDlg::OnDestroycontrol() 
    {
	// TODO: Add your command handler code here

    //
    //invoke CWnd::DestroyWindow() for destruction of the 
    //ActiveX control
    //

    m_ControlWrapper.DestroyWindow();

    //
    //we are now ready to place a new ActiveX control
    //
    ::EnableMenuItem(
                ::GetMenu(m_hWnd),
                ID_DESTROYCONTROL,
                MF_GRAYED | MF_DISABLED | MF_BYCOMMAND);

    ::SetWindowText (m_hWnd,"ActiveX Container");
    }

void CExe_clientDlg::OnSize(UINT nType, int cx, int cy) 
    {
	CDialog::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
    //
    //update the control's dimensions, 
    //

    //
    //make sure that we have a valid embedded control
    //
    if (m_ControlWrapper.GetControlUnknown() == NULL) return;

    IOleObjectPtr pOleObj(m_ControlWrapper.GetControlUnknown ());
    if (pOleObj != NULL) 
        {

        RECT rc;
        ::GetClientRect (m_hWnd, &rc);

        CSize size(rc.right , rc.bottom );
	    CClientDC dc(NULL);

        //
        //convert from pixel to twips.
        //
	    dc.DPtoHIMETRIC(&size);


        pOleObj->SetExtent (1,(SIZEL*)&size);
        pOleObj->Update();//this does not seem to be working
        ::RedrawWindow(m_hWnd,NULL,NULL,RDW_ALLCHILDREN | RDW_UPDATENOW | RDW_INVALIDATE);
        }


    }


