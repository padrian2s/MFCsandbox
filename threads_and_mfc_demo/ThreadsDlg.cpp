// ThreadsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Threads.h"
#include "ThreadsDlg.h"
#include <afxmt.h>
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#define LongLoop 1
#define ShortLoop 0



//Definition of the Worker Threads functions
//-----------------------------------------------------------//
//These worker thread functions  draw their  
//Threads numbers in to the applications main window
//They have also the responsibility to show a part of their
//current executting code in the applicatinos
//main vindow.
//-----------------------------------------------------------//

///////////////////////////////////////////
UINT WorkerThreadFunction_1(LPVOID pParam)
///////////////////////////////////////////
{

	CString code;
	CString s;
	CClientDC dc(theApp.m_pMainWnd);
	CRect rect;
	dc.GetClipBox(&rect);
	CWnd* pWnd=theApp.m_pMainWnd ->GetDlgItem (IDC_STATIC_T1);
	char buf1[10];
	char buf2[10];
	theApp.m_ThreadsState =RUNNING;
	CString str;
	CString ThreadNr;
	
	//Reading the position of the slider one from file slider1.txt
	CStdioFile fr;
	fr.Open("slider1.txt",CFile::modeRead);
	fr.ReadString(str);
	fr.Close();
	UINT n=(int)pParam;
	
	ThreadNr.Format("%d",n);
	int loopfactor=atoi(str);
	CCriticalSection cs;
	dc.SetBkColor (RGB(0,0,255));
	
	
	if(theApp.m_Thread1_LoopType ==LongLoop)
	{
		
		for (int i=0;i<80;i++)
		{
			
			cs.Lock();
			for (int j=0;j<loopfactor * 800;j++)
				dc.TextOut(704*(int)pParam,rect.top+theApp.m_shift1+2 ,ThreadNr,strlen(ThreadNr));
			code="... ;                                                               ";
			code+="for ( int i = 0 ; i <80 ; i++) // i =  ";
			code+=(CString)itoa(i,buf1,10);
			code+="                     ";
			code+="{                                                               ";
			code+="for ( int p = 0 ; p <";
			code+=str;
			code+="*800;p++)//p=";
			code+=(CString)itoa(j,buf2,10);
			code+="      dcObject .TextOut(1)                             ";
			code+="            ... ;                                                                ";
			code+=" }                                                               ";
			code+="... ;                                                       ";
			pWnd->SetWindowText (code);
			pWnd->ShowWindow (SW_SHOW);
			theApp.m_ThreadsState =RUNNING;
			theApp.m_shift1+=7;
			time(&theApp.m_ThreadsActivationTime);
			cs.Unlock();
		}
		
		
		
	}
	
	if(theApp.m_Thread1_LoopType ==ShortLoop)
	{
		for (int i=0;i<80;i++)
		{
			cs.Lock();
			dc.TextOut(704*(int)pParam,rect.top+theApp.m_shift1+2 ,ThreadNr,strlen(ThreadNr));
			theApp.m_shift1+=7;
			theApp.m_ThreadsState =RUNNING;
			time(&theApp.m_ThreadsActivationTime);
			cs.Unlock();
			
			
			
		}
		
	}
	
	if(!theApp.m_winner)
	{
		theApp.m_winner=true;
		theApp.PaintEndLine (RGB(0,0,255));
	}
	theApp.m_ThreadsState=END;
	return 0;
}



//////////////////////////////////////////
UINT WorkerThreadFunction_2(LPVOID pParam)
//////////////////////////////////////////
{
    CString code;
	CString s;
	CClientDC dc(theApp.m_pMainWnd);
	CRect rect;
	dc.GetClipBox(&rect);
	CWnd* pWnd=theApp.m_pMainWnd ->GetDlgItem (IDC_STATIC_T2);
	char buf1[10];
	char buf2[10];
	theApp.m_ThreadsState =RUNNING;
	CString str;
	CString ThreadNr;
	
	//Reading the position of the slider one from file slider1.txt
	CStdioFile fr;
	fr.Open("slider2.txt",CFile::modeRead);
	fr.ReadString(str);
	fr.Close();
	UINT n=(int)pParam;
	ThreadNr.Format("%d",n);
	int loopfactor=atoi(str);
	CCriticalSection cs;
	dc.SetBkColor (RGB(255,0,255));
	
	
	if(theApp.m_Thread2_LoopType ==LongLoop)
	{
		
		for (int i=0;i<80;i++)
		{
			
			cs.Lock();
			for (int j=0;j<loopfactor * 800;j++)
				dc.TextOut(753,rect.top+theApp.m_shift2+20 ,ThreadNr,strlen(ThreadNr));
			code="... ;                                                               ";
			code+="for ( int i = 0 ; i <80 ; i++) // i =  ";
			code+=(CString)itoa(i,buf1,10);
			code+="                     ";
			code+="{                                                               ";
			code+="for ( int p = 0 ; p <";
			code+=str;
			code+="*800;p++)//p=";
			code+=(CString)itoa(j,buf2,10);
			code+="      dcObject .TextOut(2)                             ";
			code+="            ... ;                                                                ";
			code+=" }                                                               ";
			code+="... ;                                                       ";
			pWnd->SetWindowText (code);
			pWnd->ShowWindow (SW_SHOW);
			theApp.m_shift2+=7;
			theApp.m_ThreadsState =RUNNING;
			time(&theApp.m_ThreadsActivationTime);
			cs.Unlock();
		}
		
		
		
	}
	
	if(theApp.m_Thread2_LoopType ==ShortLoop)
	{
		for (int i=0;i<80;i++)
		{
			cs.Lock();
			dc.TextOut(753,rect.top+theApp.m_shift2+2 ,ThreadNr,strlen(ThreadNr));
			theApp.m_ThreadsState =RUNNING;
			theApp.m_shift2+=7;
			time(&theApp.m_ThreadsActivationTime);
			cs.Unlock();
			
			
			
		}
		
	}
	
	if(!theApp.m_winner)
	{
		theApp.m_winner=true;
		theApp.PaintEndLine (RGB(255,0,255));
	}
	theApp.m_ThreadsState=END;
	return 0;	
}



///////////////////////////////////////////
UINT WorkerThreadFunction_3(LPVOID pParam)
//////////////////////////////////////////
{
    CString code;
	CString s;
	CClientDC dc(theApp.m_pMainWnd);
	CRect rect;
	dc.GetClipBox(&rect);
	CWnd* pWnd=theApp.m_pMainWnd ->GetDlgItem (IDC_STATIC_T3);
	char buf1[10];
	char buf2[10];
	CString str;
	CString ThreadNr;
	
	//Reading the position of the slider one from file slider1.txt
	CStdioFile fr;
	fr.Open("slider3.txt",CFile::modeRead);
	fr.ReadString(str);
	fr.Close();
	UINT n=(int)pParam;
	ThreadNr.Format("%d",n);
	int loopfactor=atoi(str);
	CCriticalSection cs;
	dc.SetBkColor (RGB(192,192,192));
	
	
	if(theApp.m_Thread3_LoopType ==LongLoop)
	{
		
		for (int i=0;i<80;i++)
		{
			
			cs.Lock();
			for (int j=0;j<loopfactor * 800;j++)
				dc.TextOut(803,rect.top+theApp.m_shift3+20 ,ThreadNr,strlen(ThreadNr));
			code="... ;                                                               ";
			code+="for ( int i = 0 ; i <80 ; i++) // i =  ";
			code+=(CString)itoa(i,buf1,10);
			code+="                     ";
			code+="{                                                               ";
			code+="for ( int p = 0 ; p <";
			code+=str;
			code+="*800;p++)//p=";
			code+=(CString)itoa(j,buf2,10);
			code+="      dcObject .TextOut(3)                             ";
			code+="            ... ;                                                                ";
			code+=" }                                                               ";
			code+="... ;                                                       ";
			pWnd->SetWindowText (code);
			pWnd->ShowWindow (SW_SHOW);
			theApp.m_ThreadsState =RUNNING;
			theApp.m_shift3+=7;
			time(&theApp.m_ThreadsActivationTime);
			cs.Unlock();
		}
		
		
		
	}
	
	if(theApp.m_Thread3_LoopType ==ShortLoop)
	{
		for (int i=0;i<80;i++)
		{
			cs.Lock();
			dc.TextOut(803,rect.top+theApp.m_shift3+2 ,ThreadNr,strlen(ThreadNr));
			theApp.m_ThreadsState =RUNNING;
			theApp.m_shift3+=7;
			time(&theApp.m_ThreadsActivationTime);
			cs.Unlock();
			
			
		}
		
	}
	
	if(!theApp.m_winner)
	{
		theApp.m_winner=true;
		theApp.PaintEndLine (RGB(192,192,192));
	}
	theApp.m_ThreadsState=END;
	return 0;
}




//////////////////////////////////////////
UINT WorkerThreadFunction_4(LPVOID pParam)
	//////////////////////////////////////////
{
	CString code;
	CString s;
	CClientDC dc(theApp.m_pMainWnd);
	CRect rect;
	dc.GetClipBox(&rect);
	CWnd* pWnd=theApp.m_pMainWnd ->GetDlgItem (IDC_STATIC_T4);
	char buf1[10];
	char buf2[10];
	CString str;
	CString ThreadNr;
	
	//Reading the position of the slider one from file slider1.txt
	CStdioFile fr;
	fr.Open("slider4.txt",CFile::modeRead);
	fr.ReadString(str);
	fr.Close();
	UINT n=(int)pParam;
	ThreadNr.Format("%d",n);
	int loopfactor=atoi(str);
	CCriticalSection cs;
	dc.SetBkColor (RGB(255,128,0));
	
	
	if(theApp.m_Thread4_LoopType ==LongLoop)
	{
		
		for (int i=0;i<80;i++)
		{
			
			cs.Lock();
			for (int j=0;j<loopfactor * 800;j++)
				dc.TextOut(853,rect.top+theApp.m_shift4+20 ,ThreadNr,strlen(ThreadNr));
			code="... ;                                                               ";
			code+="for ( int i = 0 ; i <80 ; i++) // i =  ";
			code+=(CString)itoa(i,buf1,10);
			code+="                     ";
			code+="{                                                               ";
			code+="for ( int p = 0 ; p <";
			code+=str;
			code+="*800;p++)//p=";
			code+=(CString)itoa(j,buf2,10);
			code+="      dcObject .TextOut(4)                             ";
			code+="            ... ;                                                                ";
			code+=" }                                                               ";
			code+="... ;                                                       ";
			pWnd->SetWindowText (code);
			pWnd->ShowWindow (SW_SHOW);
			theApp.m_ThreadsState =RUNNING;
			theApp.m_shift4+=7;
			time(&theApp.m_ThreadsActivationTime);
			cs.Unlock();
		}
		
		
		
	}
	
	if(theApp.m_Thread4_LoopType ==ShortLoop)
	{
		for (int i=0;i<80;i++)
		{
			cs.Lock();
			dc.TextOut(853,rect.top+theApp.m_shift4+2 ,ThreadNr,strlen(ThreadNr));
			theApp.m_ThreadsState =RUNNING;
			theApp.m_shift4+=7;
			time(&theApp.m_ThreadsActivationTime);
			cs.Unlock();
			
			
			
		}
	}
	if(!theApp.m_winner)
	{
		theApp.m_winner=true;
		theApp.PaintEndLine (RGB(255,128,0));
	}
	
	theApp.m_ThreadsState=END;
	return 0;
	
	
}

//////////////////////////////////////////
UINT WorkerThreadFunction_5(LPVOID pParam)
	//////////////////////////////////////////
{
	CString code;
	CString s;
	CClientDC dc(theApp.m_pMainWnd);
	CRect rect;
	dc.GetClipBox(&rect);
	CWnd* pWnd=theApp.m_pMainWnd ->GetDlgItem (IDC_STATIC_T5);
	char buf1[10];
	char buf2[10];
	CString str;
	CString ThreadNr;
	
	//Reading the position of the slider one from file slider1.txt
	CStdioFile fr;
	fr.Open("slider5.txt",CFile::modeRead);
	fr.ReadString(str);
	fr.Close();
	UINT n=(int)pParam;
	ThreadNr.Format("%d",n);
	int loopfactor=atoi(str);
	CCriticalSection cs;
	dc.SetBkColor (RGB(128,128,0));
	
	
	if(theApp.m_Thread5_LoopType ==LongLoop)
	{
		
		for (int i=0;i<80;i++)
		{
			
			cs.Lock();
			for (int j=0;j<loopfactor * 800;j++)
				dc.TextOut(903,rect.top+theApp.m_shift5+20 ,ThreadNr,strlen(ThreadNr));
			code="... ;                                                               ";
			code+="for ( int i = 0 ; i <80 ; i++) // i =  ";
			code+=(CString)itoa(i,buf1,10);
			code+="                     ";
			code+="{                                                               ";
			code+="for ( int p = 0 ; p <";
			code+=str;
			code+="*800;p++)//p=";
			code+=(CString)itoa(j,buf2,10);
			code+="      dcObject .TextOut(5)                             ";
			code+="            ... ;                                                                ";
			code+=" }                                                               ";
			code+="... ;                                                       ";
			pWnd->SetWindowText (code);
			pWnd->ShowWindow (SW_SHOW);
			theApp.m_shift5+=7;
			theApp.m_ThreadsState =RUNNING;
			time(&theApp.m_ThreadsActivationTime);
			cs.Unlock();
		}
		
		
		
	}
	
	if(theApp.m_Thread5_LoopType ==ShortLoop)
	{
		for (int i=0;i<80;i++)
		{
			cs.Lock();
			dc.TextOut(903,rect.top+theApp.m_shift5+2 ,ThreadNr,strlen(ThreadNr));
			theApp.m_shift5+=7;
			theApp.m_ThreadsState =RUNNING;
			time(&theApp.m_ThreadsActivationTime);
			cs.Unlock();
			
		}
		
	}
	if(!theApp.m_winner)
	{
		theApp.m_winner=true;
		theApp.PaintEndLine (RGB(128,128,0));
	}
	theApp.m_ThreadsState=END;
	
	return 0;
}



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
// CThreadsDlg dialog

CThreadsDlg::CThreadsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CThreadsDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CThreadsDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CThreadsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CThreadsDlg)
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Control(pDX, IDC_SLIDER_T5, m_slider5);
	DDX_Control(pDX, IDC_SLIDER_T4, m_slider4);
	DDX_Control(pDX, IDC_SLIDER_T3, m_slider3);
	DDX_Control(pDX, IDC_SLIDER_T2, m_slider2);
	DDX_Control(pDX, IDC_SLIDER_T1, m_slider1);
	DDX_Control(pDX, IDC_SPEAKER, m_speaker);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CThreadsDlg, CDialog)
	//{{AFX_MSG_MAP(CThreadsDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_LBN_DBLCLK(IDC_LIST1, OnDblclkList1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CThreadsDlg message handlers

BOOL CThreadsDlg::OnInitDialog()
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
   

    // Initializing the list box
	m_list.AddString ("Initialize Threads");
    m_list.AddString ("Start the Run");
	m_list.AddString ("Minimum Loop for Thread 1");
	m_list.AddString ("Variable Loop for Thread 1");
	m_list.AddString ("Minimum Loop for Thread 2");
	m_list.AddString ("Variable Loop for Thread 2");
	m_list.AddString ("Minimum Loop for Thread 3");
	m_list.AddString ("Variable Loop for Thread 3");
	m_list.AddString ("Minimum Loop for Thread 4");
	m_list.AddString ("Variable Loop for Thread 4");
	m_list.AddString ("Minimum Loop for Thread 5");
	m_list.AddString ("Variable Loop for Thread 5");
    m_list.AddString ("Running Time of threads");
    m_list.AddString ("Minimum Loop for all threads");
	m_list.AddString ("Maximum Loop for all threads");
	m_list.SetCurSel (1);

    //Initialize the sliders position 
	m_slider1.initSlider ();
    m_slider2.initSlider ();
	m_slider3.initSlider ();
	m_slider4.initSlider ();
	m_slider5.initSlider ();
    //m_speaker.Speak ("Long Run for all threads");
   
	//Showing the piece of code which will be executed as sefault ( Loong Loop is default for all threads)
	ShowCode(IDC_STATIC_T1,LongLoop);
	ShowCode(IDC_STATIC_T2,LongLoop);
	ShowCode(IDC_STATIC_T3,LongLoop);
	ShowCode(IDC_STATIC_T4,LongLoop);
	ShowCode(IDC_STATIC_T5,LongLoop);
	
	//Initialize the Threads State
	 theApp.m_ThreadsState=END;
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CThreadsDlg::OnSysCommand(UINT nID, LPARAM lParam)
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





///////////////////////////
void CThreadsDlg::OnPaint()
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
		//CDialog::OnPaint();
		CRect rect,RunningField,Rect,NextRect;
		CRgn Rgn1,Rgn2,Rgn3,Rgn4,Rgn5,EndLineRgn;
		CBrush Whitebrush,Greenbrush;
		CPaintDC dc(this); // device context for painting
		CDC* pDC=theApp.m_pMainWnd ->GetDC();
		GetClientRect(&rect);
		GetClientRect(&NextRect);
		rect.left =rect.right -320;
		
	    //Making the runnign field redish
		dc.FillSolidRect(rect.left ,rect.top ,rect.right ,rect.bottom-40 ,RGB(249,91,154));
		
		
		//Setting  Threads running Fields white:
		//Making the Thread one's running field
		Rgn1.CreateRectRgn(RunningField.left ,RunningField.top ,RunningField.right ,RunningField.bottom );
		RunningField.left =rect.left+50;
		RunningField.top =rect.top ;
		RunningField.right =RunningField.left +17;
		RunningField.bottom =rect.bottom -50;
		Rgn1.CreateRectRgn(RunningField.left ,RunningField.top ,RunningField.right ,RunningField.bottom );
		Whitebrush.CreateSolidBrush(RGB(250,238,244));
		dc.FillRgn(&Rgn1,&Whitebrush);
		
		//Making Thread Two's running field
		RunningField.left =rect.left+100;
		RunningField.top =rect.top ;
		RunningField.right =RunningField.left +17;
		Rgn2.CreateRectRgn(RunningField.left ,RunningField.top ,RunningField.right ,RunningField.bottom );
		dc.FillRgn(&Rgn2,&Whitebrush);
		
		//Making  Thread 3's running field
		RunningField.left =rect.left+150;
		RunningField.top =rect.top ;
		RunningField.right =RunningField.left +17;
		Rgn3.CreateRectRgn(RunningField.left ,RunningField.top ,RunningField.right ,RunningField.bottom );
		dc.FillRgn(&Rgn3,&Whitebrush);
		
		//Making Thread 4's running field
		RunningField.left =rect.left+200;
		RunningField.top =rect.top ;
		RunningField.right =RunningField.left +17;
		Rgn4.CreateRectRgn(RunningField.left ,RunningField.top ,RunningField.right ,RunningField.bottom );
		dc.FillRgn(&Rgn4,&Whitebrush);
		
		//Making Thread 5's running field
		RunningField.left =rect.left+250;
		RunningField.top =rect.top ;
		RunningField.right =RunningField.left +17;
		Rgn5.CreateRectRgn(RunningField.left ,RunningField.top ,RunningField.right ,RunningField.bottom );
		dc.FillRgn(&Rgn5,&Whitebrush);
		
		
		//Making the End line
		RunningField.left =rect.left;
		RunningField.top = 550;
		RunningField.right =rect.right ;
		RunningField.bottom =rect.bottom -115;
		EndLineRgn.CreateRectRgn(RunningField.left ,RunningField.top ,RunningField.right ,RunningField.bottom );
		Greenbrush.CreateSolidBrush(RGB(0,255,0));
		dc.FillRgn(&EndLineRgn,&Greenbrush);
		
	}
		
}


// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CThreadsDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}



///////////////////////////////////
void CThreadsDlg::OnDblclkList1()
{
	int SelectedSel=m_list.GetCurSel ();
	switch(SelectedSel)
	{
		case 0:{
				theApp.CreateFilesForSlidersPosition();
				Initialize();
				//
				theApp.m_pMainWnd ->Invalidate (TRUE);
				EnableWindow(IDC_SLIDER_T1);
				EnableWindow(IDC_SLIDER_T2);
				EnableWindow(IDC_SLIDER_T3);
				EnableWindow(IDC_SLIDER_T4);
				EnableWindow(IDC_SLIDER_T5);
				if(theApp.m_ThreadsState==END)
				{
				  SetDefaultCode();
				}
				m_list.SetCurSel (1);
				break;
			}
		case 1:{
				
				StartTheRun();
				theApp.m_SpeakerEnable =true;
				break;
			}
		case 2:{
				DisableWindow(IDC_SLIDER_T1);
				Speak("Thread one's Loop factor, 0 ");
				ShowCode(IDC_STATIC_T1,ShortLoop);
				theApp.m_Thread1_LoopType =ShortLoop;
				break;
			}
		case 3:{
				EnableWindow(IDC_SLIDER_T1);
				SetVariableCode(IDC_STATIC_T1);
				Speak("Use Thread one's S lider to vary the Loop");
				theApp.m_Thread1_LoopType =LongLoop;
				
				break;
			}
		case 4:{
				DisableWindow(IDC_SLIDER_T2);
				Speak("Thread 2's Loop factor, 0");
				ShowCode(IDC_STATIC_T2,ShortLoop);
				theApp.m_Thread2_LoopType=ShortLoop;
				break;
			}
		case 5:{
				EnableWindow(IDC_SLIDER_T2);
				SetVariableCode(IDC_STATIC_T2);
				Speak("Use Thread two's S lider, to vary the Loop");
				theApp.m_Thread2_LoopType =LongLoop;
				break;
			}
		case 6:{
				DisableWindow(IDC_SLIDER_T3);
				Speak("Thread 3's Loop factor, 0");
				ShowCode(IDC_STATIC_T3,ShortLoop);
				theApp.m_Thread3_LoopType=ShortLoop;
				break;
			}
		case 7:{
				EnableWindow(IDC_SLIDER_T3);
				SetVariableCode(IDC_STATIC_T3);
				Speak("Use Thread Three's S lider , to vary the Loop");
				theApp.m_Thread3_LoopType=LongLoop;
				break;
			}
		case 8:{
				DisableWindow(IDC_SLIDER_T4);
				Speak("Thread 4's Loop factor, 0");
				ShowCode(IDC_STATIC_T4,ShortLoop);
				theApp.m_Thread4_LoopType=ShortLoop;
				break;
			}
		case 9:{
				EnableWindow(IDC_SLIDER_T4);
				SetVariableCode(IDC_STATIC_T4);
				Speak("Use Thread four's  S lider , to vary the Loop");
				theApp.m_Thread4_LoopType=LongLoop;
				break;
			}
		case 10:{
				DisableWindow(IDC_SLIDER_T5);
				Speak("Thread 5's Loop factor, 0");
				ShowCode(IDC_STATIC_T5,ShortLoop);
				theApp.m_Thread5_LoopType=ShortLoop;
				break;
			}
		case 11:{
				EnableWindow(IDC_SLIDER_T5);
				SetVariableCode(IDC_STATIC_T5);
				Speak("Use Thread five's S lider, to  vary the Loop");
				theApp.m_Thread5_LoopType=LongLoop;
				break;
			}
		case 12:{
				
				bool talked=false;
				if((theApp.m_ThreadsState==END)&&(theApp.m_SpeakerEnable))
				{
					double time=difftime(theApp.m_ThreadsActivationTime,theApp.m_ThreadsCreationTime);
					CString str;
					char buf[20];
					itoa((int)time,buf,10);
					str=(CString)buf;
					if(str=="0")
					{
						talked=true;
						str="Under  1 Second";
						Speak(str);
					}
					if((str=="1")&&(!talked))
					{
						talked=true;
						str="Nearly , ";
						str+=(CString)buf;
						str+=" Second";
						Speak(str);
					}
					if((buf!="1")&&(buf!="0")&&(!talked))
					{
						talked=true;
						str+=" Seconds";
						Speak(str);
					}
					
					
				}
			
				break;
			}
			
		case 13:{
				
				Initialize();
				ShowCode(IDC_STATIC_T1,ShortLoop);
				theApp.m_Thread1_LoopType=ShortLoop;
				ShowCode(IDC_STATIC_T2,ShortLoop);
				theApp.m_Thread2_LoopType=ShortLoop;
				ShowCode(IDC_STATIC_T3,ShortLoop);
				theApp.m_Thread3_LoopType=ShortLoop;
				ShowCode(IDC_STATIC_T4,ShortLoop);
				theApp.m_Thread4_LoopType=ShortLoop;
				ShowCode(IDC_STATIC_T5,ShortLoop);
				theApp.m_Thread5_LoopType=ShortLoop;
				
				
				
				break;
			}
		case 14:
			{
				Initialize();
				ShowCode(IDC_STATIC_T1,LongLoop);
				theApp.m_Thread1_LoopType=LongLoop;
				ShowCode(IDC_STATIC_T2,LongLoop);
				theApp.m_Thread2_LoopType=LongLoop;
				ShowCode(IDC_STATIC_T3,LongLoop);
				theApp.m_Thread3_LoopType=LongLoop;
				ShowCode(IDC_STATIC_T4,LongLoop);
				theApp.m_Thread4_LoopType=LongLoop;
				ShowCode(IDC_STATIC_T5,LongLoop);
				theApp.m_Thread5_LoopType=LongLoop;
				m_slider1.SetSlidePos (9);
				m_slider2.SetSlidePos (9);
				m_slider3.SetSlidePos (9);
				m_slider4.SetSlidePos (9);
				m_slider5.SetSlidePos (9);
				CString filename="";
				CString position="9";
				filename="slider1.txt";
				WriteSliderPostionToFiles(filename,position);
				filename="slider2.txt";
				WriteSliderPostionToFiles(filename,position);
				filename="slider3.txt";
				WriteSliderPostionToFiles(filename,position);
				filename="slider4.txt";
				WriteSliderPostionToFiles(filename,position);
				filename="slider5.txt";
				WriteSliderPostionToFiles(filename,position);
				
				
				break;
			}
			
			
			break;
	}
}

///////////////////////////////
void CThreadsDlg::Initialize()
{
 
	 m_slider1.SetSlidePos (1);
     m_slider2.SetSlidePos (1);
     m_slider3.SetSlidePos (1);
	 m_slider4.SetSlidePos (1);
	 m_slider5.SetSlidePos (1);
	 theApp.Initialize ();
      
}
/////////////////////////////////
void CThreadsDlg::StartTheRun()
{
	
	int i=1;
	
	//Saving the start time of threads
	time(&theApp.m_ThreadsCreationTime);
	
	//The Creation and running of Threads Starts
	theApp.m_pThreads [0]=AfxBeginThread(WorkerThreadFunction_1,(LPVOID)i);
	i=2;
	theApp.m_pThreads [1]=AfxBeginThread(WorkerThreadFunction_2,(LPVOID)i);
	i=3;
	theApp.m_pThreads [2]=AfxBeginThread(WorkerThreadFunction_3,(LPVOID)i);
	i=4;
	theApp.m_pThreads [3]=AfxBeginThread(WorkerThreadFunction_4,(LPVOID)i);
	i=5;
	theApp.m_pThreads [4]=AfxBeginThread(WorkerThreadFunction_5,(LPVOID)i);
	
	
}





void CThreadsDlg::Speak(CString speech)
{
m_speaker.Speak (speech);
}


///////////////////////////////////////////////////////////////
void CThreadsDlg::ShowCode(int StaticWindowID,int LoopType)
{
	CWnd* pWnd=GetDlgItem(StaticWindowID);
	CString code;
	switch(LoopType)
	{
		case LongLoop:{
				code="... ;                                                               ";
				code+="for ( int i = 0 ; i <80 ; i++)                                     ";
				code+="{                                                                      ";
				code+="for ( int p = 0 ; p <1*800;p++);";
				code+="                         dcObject .TextOut( ThreadsNr ) ;";
				code+="                 ... ;                                                    ";
				code+="      }                                                              ";
				code+="... ; ";
				break;
			}
		case ShortLoop:{
				
				code="... ;                                                              ";
				code+="for ( int i = 0 ; i <80 ; i++)                               ";
				code+="{                                                          ";
				code+="      dcObject .TextOut( ThreadsNr ) ;           ";
				code+="      ... ;                                                                 ";
				code+="}                                                                   ";
				code+="...; ";
				break;
			}
			
			break;
	}
	
pWnd->SetWindowText (code);
}





///////////////////////////////////
void CThreadsDlg::SetDefaultCode()
{
    ShowCode(IDC_STATIC_T1,LongLoop);
	ShowCode(IDC_STATIC_T2,LongLoop);
	ShowCode(IDC_STATIC_T3,LongLoop);
	ShowCode(IDC_STATIC_T4,LongLoop);
	ShowCode(IDC_STATIC_T5,LongLoop);
}






/////////////////////////////////////////////////////
void CThreadsDlg::SetVariableCode(int StaticWindowsId)
{
	int SliderPosition;
	CString code;
	CWnd* pWnd=theApp.m_pMainWnd ->GetDlgItem(StaticWindowsId);
	char buf[2];
	switch(StaticWindowsId)
	{
		case IDC_STATIC_T1:
			{
				SliderPosition=GetSliderPositionFromFile(1);
				itoa(SliderPosition,buf,10);
				code="... ;                                                               ";
				code+="for ( int i = 0 ; i <80 ; i++)                                     ";
				code+="{                                                                      ";
				code+="for ( int p = 0 ; p <";
				code+=buf;
				code+="*800;p++);";
				code+="                         dcObject .TextOut( ThreadsNr ) ;";
				code+="                 ... ;                                                    ";
				code+="      }                                                              ";
				code+="... ;                                                       ";
				pWnd->SetWindowText (code);
				pWnd->ShowWindow (SW_SHOW);
				break;
			}
			
		case IDC_STATIC_T2:
			{
				SliderPosition=GetSliderPositionFromFile(2);
				itoa(SliderPosition,buf,10);
				code="... ;                                                               ";
				code+="for ( int i = 0 ; i <80 ; i++)                                     ";
				code+="{                                                                      ";
				code+="for ( int p = 0 ; p <";
				code+=buf;
				code+="*800;p++);";
				code+="                         dcObject .TextOut( ThreadsNr ) ;";
				code+="                 ... ;                                                    ";
				code+="      }                                                              ";
				code+="... ;                                                       ";
				pWnd->SetWindowText (code);
				pWnd->ShowWindow (SW_SHOW);
				break;
			}
			
		case IDC_STATIC_T3:
			{
				SliderPosition=GetSliderPositionFromFile(3);
				itoa(SliderPosition,buf,10);
				code="... ;                                                               ";
				code+="for ( int i = 0 ; i <80 ; i++)                                     ";
				code+="{                                                                      ";
				code+="for ( int p = 0 ; p <";
				code+=buf;
				code+="*800;p++);";
				code+="                         dcObject .TextOut( ThreadsNr ) ;";
				code+="                 ... ;                                                    ";
				code+="      }                                                              ";
				code+="... ;                                                       ";
				pWnd->SetWindowText (code);
				pWnd->ShowWindow (SW_SHOW);
				break;
			}
			
		case IDC_STATIC_T4:
			{
				SliderPosition=GetSliderPositionFromFile(4);
				itoa(SliderPosition,buf,10);
				code="... ;                                                               ";
				code+="for ( int i = 0 ; i <80 ; i++)                                     ";
				code+="{                                                                      ";
				code+="for ( int p = 0 ; p <";
				code+=buf;
				code+="*800;p++);";
				code+="                         dcObject .TextOut( ThreadsNr ) ;";
				code+="                 ... ;                                                    ";
				code+="      }                                                              ";
				code+="... ;                                                       ";
				pWnd->SetWindowText (code);
				pWnd->ShowWindow (SW_SHOW);
				break;
			}
		case IDC_STATIC_T5:
			{
				SliderPosition=GetSliderPositionFromFile(5);
				itoa(SliderPosition,buf,10);
				code="... ;                                                               ";
				code+="for ( int i = 0 ; i <80 ; i++)                                     ";
				code+="{                                                                      ";
				code+="for ( int p = 0 ; p <";
				code+=buf;
				code+="*800;p++);";
				code+="                         dcObject .TextOut( ThreadsNr ) ;";
				code+="                 ... ;                                                    ";
				code+="      }                                                              ";
				code+="... ;                                                       ";
				pWnd->SetWindowText (code);
				pWnd->ShowWindow (SW_SHOW);
				break;
			}
			
			break;
	}
}

/////////////////////////////////////////////////////////
int CThreadsDlg::GetSliderPositionFromFile(int sliderNr)
{
	int SliderPosition;
	CStdioFile fr;
	CString str;
	
	switch(sliderNr)
	{
		
		case 1:
			{
				fr.Open ("slider1.txt",CFile::modeRead);
				fr.ReadString(str);
				fr.Close ();
				SliderPosition=atoi(str);
				break;
			}
			
		case 2:
			{
				fr.Open ("slider2.txt",CFile::modeRead);
				fr.ReadString(str);
				fr.Close ();
				SliderPosition=atoi(str);
				break;
			}
			
		case 3:
			{
				fr.Open ("slider3.txt",CFile::modeRead);
				fr.ReadString(str);
				fr.Close ();
				SliderPosition=atoi(str);
				break;
			}
			
		case 4:
			{
				fr.Open ("slider4.txt",CFile::modeRead);
				fr.ReadString(str);
				fr.Close ();
				SliderPosition=atoi(str);
				break;
			}
			
		case 5:
			{
				fr.Open ("slider5.txt",CFile::modeRead);
				fr.ReadString(str);
				fr.Close ();
				SliderPosition=atoi(str);
				break;
			}
			
			break;
	}
	
	return SliderPosition;
}

//////////////////////////////////////////////
void CThreadsDlg::DisableWindow(int WindowId)
{
	CWnd* pWnd=theApp.m_pMainWnd ->GetDlgItem (WindowId);
	pWnd->EnableWindow(FALSE);
}



///////////////////////////////////////////////
void CThreadsDlg::EnableWindow(int WindowId)
{
	CWnd* pWnd=theApp.m_pMainWnd ->GetDlgItem (WindowId);
	pWnd->EnableWindow(TRUE);
}


///////////////////////////////////////////////////////////////////////////////
void CThreadsDlg::WriteSliderPostionToFiles(CString filename, CString position)
{
	CStdioFile fw;
	fw.Open (filename,CFile::modeWrite);
	fw.WriteString (position);
	fw.Close ();
}

