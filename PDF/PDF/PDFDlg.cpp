// PDFDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PDF.h"
#include "PDFDlg.h"

#include <afxctl.h>

#include ".\pdfdlg.h"

#include "PDFCreator_i.c"

#import "C:\WINDOWS\system32\MSVBVM60.DLL" rename ( "EOF", "VBEOF" ), rename ( "RGB", "VBRGB" )

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CPDFDlg dialog



CPDFDlg::CPDFDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CPDFDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPDFDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CPDFDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, OnBnClickedButton1)
END_MESSAGE_MAP()


// CPDFDlg message handlers

BOOL CPDFDlg::OnInitDialog()
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

void CPDFDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CPDFDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

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

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CPDFDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CPDFDlg::OnBnClickedButton1()
{
    try{
	::CoInitialize(NULL);	
    LPCLSID out;    

    HRESULT hr = NULL;
    //HRESULT hr=CoCreateInstance(IID__clsPDFCreator,NULL,CLSCTX_INPROC_SERVER,IID_IDispatch,(void**) &pdfEvent);
    
    if (hr == REGDB_E_CLASSNOTREG)
    {
        int i=0;
    }

    if (hr==CLASS_E_NOAGGREGATION)
    {
        int i=0;
    }

    if (hr==E_NOINTERFACE)
    {
        int i=0;
    }

    m_pSink = new PDFSink();
    LPUNKNOWN m_pUnk=m_pSink->GetIDispatch(FALSE);

	hr = pdfObject.CoCreateInstance(L"PDFCreator.clsPDFCreator");    

    DWORD m_dwCookie=1;
    if(AfxConnectionAdvise(pdfObject, DIID___clsPDFCreator,m_pUnk,FALSE,&m_dwCookie))
    {

        AfxMessageBox("passed");
    }
    else
    {
        return;
    }
    
	
	if (hr == REGDB_E_CLASSNOTREG)
	{
		int i=0;
	}
	
	if (hr==CLASS_E_NOAGGREGATION)
	{
		int i=0;
	}

	if (hr==E_NOINTERFACE)
	{
		int i=0;
	}

	if (!FAILED(hr))
	{

		if (pdfObject->cStart(L"/NoProcessingAtStartup", FALSE)==FALSE)
		{
			AfxMessageBox("can't start printer");
		};

		PDFCreator::_clsPDFCreatorOptionsPtr opt= pdfObject->GetcOptions();
		opt->PutUseAutosave(1);
		opt->PutUseAutosaveDirectory(1);
		opt->PutAutosaveDirectory(L"c:\\pdf\\");
		opt->PutAutosaveFormat(0);
		opt->PutAutosaveFilename(L"2.pdf");

		pdfObject->PutRefcOptions(opt);
		pdfObject->PutcDefaultPrinter(L"PDFCreator");
		
		pdfObject->cClearCache();
		//pdfObject->cSaveOptions(L"1");
		pdfObject->PutcPrinterStop(VARIANT_FALSE);
		pdfObject->cPrintFile(L"c:\\root_20070822_155742_20070000055_P25txn.doc");		
		BSTR fn = pdfObject->GetcOutputFilename();

		AfxMessageBox(CString((const wchar_t*)fn));		
		pdfObject->cClose();
	}
	
	pdfObject.Release();
    }
    catch(...)
    {
        AfxMessageBox("err");
    }
}
