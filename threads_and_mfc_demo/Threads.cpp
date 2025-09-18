// Threads.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Threads.h"
#include "ThreadsDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CThreadsApp

BEGIN_MESSAGE_MAP(CThreadsApp, CWinApp)
	//{{AFX_MSG_MAP(CThreadsApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CThreadsApp construction

CThreadsApp::CThreadsApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
	Initialize();
}



////////////////////////////////////////////////////
void CThreadsApp::CreateFilesForSlidersPosition ()
{
	CString strFileNames[5]={"slider1.txt","slider2.txt","slider3.txt","slider4.txt","slider5.txt",};
	CStdioFile file;
	CString str="1";
	for(int i=0;i<5;i++)
	{
		file.Open(strFileNames[i],CFile::modeCreate);
		file.Close();
		//Writing init position for sliders in the files ,this info will be
		//used in the Threads function in order to make a factor for the threads loop
		file.Open(strFileNames[i],CFile::modeWrite|CFile::typeText);
		file.WriteString(str);
		file.Close();
			
	}	
}


/////////////////////////////////////////////////////////////////////////////
// The one and only CThreadsApp object

CThreadsApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CThreadsApp initialization

BOOL CThreadsApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	CThreadsDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}


//////////////////////////////////
void CThreadsApp::Initialize()
{
	if(!m_ThreadsState)m_ThreadsState=END;
	if(!m_ThreadsState)m_ThreadsActivationTime=0;
	if(!m_ThreadsState)m_ThreadsCreationTime=0;
	m_SpeakerEnable=false;
	m_shift1=2;
	m_shift2=2;
	m_shift3=2;
	m_shift4=2;
	m_shift5=2;
	//initial loop type is long loop for all threads
	
	m_Thread1_LoopType=true;
	m_Thread2_LoopType=true;
	m_Thread3_LoopType=true;
	m_Thread4_LoopType=true;
	m_Thread5_LoopType=true;
	
	//Creating files to save the slider position
	CreateFilesForSlidersPosition();
	m_winner=false;
	
}





/////////////////////////////////////////////////////
void CThreadsApp::PaintEndLine(COLORREF winersColor)
{
	CDC* pDC=m_pMainWnd->GetDC ();
	CRect rect,EndLine;
	pDC->GetClipBox (&rect);
	CRgn EndLineRgn;
	CBrush winerbrush;
	EndLine.left =rect.left+649;
	EndLine.top = 550;
	EndLine.right =rect.right ;
	EndLine.bottom =rect.bottom -115;
	EndLineRgn.CreateRectRgn(EndLine.left ,EndLine.top ,EndLine.right ,EndLine.bottom );
	winerbrush.CreateSolidBrush(winersColor);
	pDC->FillRgn(&EndLineRgn,&winerbrush);
	
}

