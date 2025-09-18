// ctimeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ctime.h"
#include "ctimeDlg.h"
#include ".\ctimedlg.h"

#include <stdlib.h>
#include <atlrx.h>

#include <time.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include <time.h>

// CAboutDlg dialog used for App About

clock_t start, finish;

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


// CctimeDlg dialog



CctimeDlg::CctimeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CctimeDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CctimeDlg::DoDataExchange(CDataExchange* pDX)
{
CDialog::DoDataExchange(pDX);
DDX_Control(pDX, IDC_EDIT1, m_regval);
DDX_Control(pDX, IDC_EDIT2, m_value);
DDX_Control(pDX, IDC_LIST1, m_result);
}

BEGIN_MESSAGE_MAP(CctimeDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON5, OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnBnClickedButton7)
END_MESSAGE_MAP()


// CctimeDlg message handlers

BOOL CctimeDlg::OnInitDialog()
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

	start=clock();
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CctimeDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CctimeDlg::OnPaint() 
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
HCURSOR CctimeDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CctimeDlg::OnBnClickedButton1()
{
	CTime t=CTime::GetCurrentTime();

	CString foo;
	char buff[255];


	__time64_t ltime;

	_time64( &ltime );
	sprintf( buff, "The time is %s\n", _ctime64( &ltime ) );

//	sprintf(buff, "%d-%d-%d %d:%d:%d\n", t.GetDay(), t.GetMonth(), t.GetYear(), t.GetHour(), t.GetMinute(), t.GetSecond());
	
	start=clock();
	sprintf(buff, "%2.1f", start);
		
	foo="20050210";
	

	CString foo1="", foo2="";
	m_regval.GetWindowText(foo1);
	m_value.GetWindowText(foo2);

	CAtlRegExp<> regex;
	REParseError status = regex.Parse(foo1, TRUE);

	if (REPARSE_ERROR_OK == status) 
	{
		CAtlREMatchContext<> mc;
		if (regex.Match(foo2, &mc)) 
		{
			for (int j=0; j<=m_result.GetCount(); j++)
				m_result.DeleteString(j);

			for (UINT nGroupIndex = 0; nGroupIndex < mc.m_uNumGroups; ++nGroupIndex) 
			{
				const CAtlREMatchContext<>::RECHAR* szStart = 0;
				const CAtlREMatchContext<>::RECHAR* szEnd = 0;
				mc.GetMatch(nGroupIndex, &szStart, &szEnd);
				ptrdiff_t nLength = szEnd - szStart;
				CString text(szStart, nLength);
				TRACE1("regex=%s\n", text);
				m_result.InsertString(nGroupIndex, text);	
			}

		}
		else
			AfxMessageBox("DDD2");
	}
}



CTime CctimeDlg::convertToTime(CString time, SHORTDATEFORMAT type)
{	
	return convertToTime(atof(time), type);
}

BOOL validateTimeFromConvertToTime(int y, int m, int d)
{
	if (m==0) return FALSE;
	if (d==0) return FALSE;
	if (y==0) return FALSE;
	if (m>12) return FALSE;
	if (d>31) return FALSE;

	return TRUE;
}

CTime CctimeDlg::convertToTime(double time, SHORTDATEFORMAT type)
{
	char y[5], d[5], m[5];
	CString foo="";

	foo.Format("%.0f", time);
	switch(type)
	{
	case YYYYmmdd:
		sscanf(foo, "%4s%2s%2s", y, m, d);
		if (validateTimeFromConvertToTime(atoi(y), atoi(m), atoi(d)))
			return CTime(atoi(y), atoi(m), atoi(d), 0, 0, 0);
		break;

	case YYYYddmm:
		sscanf(foo, "%4s%2s%2s", y, d, m);
		if (validateTimeFromConvertToTime(atoi(y), atoi(m), atoi(d)))
			return CTime(atoi(y), atoi(m), atoi(d), 0, 0, 0);
		break;

	case mmddYYYY:	
		sscanf(foo, "%2s%2s%4s", m, d, y);
		if (validateTimeFromConvertToTime(atoi(y), atoi(m), atoi(d)))
			return CTime(atoi(y), atoi(m), atoi(d), 0, 0, 0);
		break;

	case ddmmYYYY:	
		sscanf(foo, "%2s%2s%4s", d, m, y);
		if (validateTimeFromConvertToTime(atoi(y), atoi(m), atoi(d)))
			return CTime(atoi(y), atoi(m), atoi(d), 0, 0, 0);
		break;
	}

	return NULL;
}


void CctimeDlg::OnBnClickedButton2()
{
	double f=0;
	CString foo="";
	
	CTime t=convertToTime(f, YYYYmmdd);
	if (t==NULL)
	{
		AfxMessageBox("err");
	}
	
	CTime exp(t.GetYear(), t.GetMonth(), t.GetDay(), 0, 0, 0);
	CTime exp3(t.GetYear(), t.GetMonth(), t.GetDay(), 0, 0, 0);

	CTimeSpan exp2(20, 0, 0, 0);

	CTime rez=exp+exp2;


	TRACE1("myf=%s\n", rez.Format("%Y%m%d"));
	t=convertToTime(rez.Format("%Y%m%d"), YYYYmmdd);	
	foo=t.Format("%Y%m%d");
	TRACE1("foo=%s\n", foo);

	
}

void CctimeDlg::OnBnClickedButton3()
{
	double f=010142006; //01/20/2006 12 13 14;
	CString foo="";

	CTime t=convertToTime(f, mmddYYYY);
	if (t==NULL)
	{
		AfxMessageBox("err");	
	}
	TRACE1("%s", t.Format("%m%d%Y %hh%MM%ss"));
}



void CctimeDlg::OnBnClickedButton5()
{
	
}

void CctimeDlg::OnBnClickedButton4()
{
	finish=clock();

	TRACE1("time=%2.1f\n", (double)finish-start/CLOCKS_PER_SEC);
	TRACE1("time=%2.1f\n", (double)difftime(finish, start));
	
}




void CctimeDlg::OnBnClickedButton6()
{
	BOOL *t=new BOOL();
	*t=TRUE;

}

void CctimeDlg::OnBnClickedButton7()
{
	short CFormattedEdit::VerifyBarcode()
	{
		short i = 0;
		int total = 0;
		CString barcode;
		GetWindowText(barcode);

		// Calculate a Luhn check digit
		if(barcode.IsEmpty())
			return -1;

		if (barcode.GetLength() != 10)
		{
			return 0;
		}

		for(i = barcode.GetLength() - 2; i > -1; i -= 2)
		{
			if (barcode.GetAt(i) < '5')
				total+= (barcode.GetAt(i) - '0') * 2;
			else
				total+= (((barcode.GetAt(i) - '0') * 2) - 10) + 1;
		}

		for(i = barcode.GetLength() - 3; i > -1; i -= 2)
			total += barcode.GetAt(i) - '0';

		total = (((total / 10) + 1) * 10) - total;
		if (total == 10) total = 0;

		//----- MVE
		if (total > 10) total -= 10;
		//----- MVE

		char checkDigit = total + '0';

		// Check the last digit of the barcode against our calculated check 
		// digit.
		if (barcode.GetAt(barcode.GetLength() - 1) != checkDigit)
			return 0;
		else
			return 1;
	}

}
