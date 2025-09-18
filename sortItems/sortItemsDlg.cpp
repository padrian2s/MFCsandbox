// sortItemsDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sortItems.h"
#include "sortItemsDlg.h"
#include ".\sortitemsdlg.h"

#include <string>
#include <iostream>
#include <fstream>
#include <list>


#include <afxtempl.h>
#include <atlrx.h>

#include "myDialog.h"
#include "myThread.h"

#include "ListCtrlStyled.h"
#include <locale.h>

#include "CclsPDFCreator0.h"
#include "CclsPDFCreatorOptions.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace std;
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


// CsortItemsDlg dialog



CsortItemsDlg::CsortItemsDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CsortItemsDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CsortItemsDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_LIST1, m_list);
    DDX_Control(pDX, IDC_EDIT1, m_express);
    DDX_Control(pDX, IDC_EDIT2, m_expressRet);
    DDX_Control(pDX, IDC_EDIT3, m_data);
    DDX_Control(pDX, IDC_EDIT4, m_advEdit);
    DDX_Control(pDX, IDC_STATIC2, m_staticPic);
    DDX_Control(pDX, IDC_BUTTON8, m_button);
    DDX_Control(pDX, IDC_EDIT5, m_bigBoxCtrl);
    DDX_Control(pDX, IDC_P2I32CTRL1, m_p2i);
}

BEGIN_MESSAGE_MAP(CsortItemsDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDOK, OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnBnClickedButton2)
	ON_NOTIFY(LVN_COLUMNCLICK, IDC_LIST1, OnLvnColumnclickList1)
	ON_BN_CLICKED(IDC_BUTTON3, OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnBnClickedButton7)
	ON_MESSAGE (WM_SHOW, msg)
	ON_BN_CLICKED(IDC_BUTTON8, OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnBnClickedButton9)
    ON_BN_CLICKED(IDC_BUTTON10, OnBnClickedButton10)
    ON_BN_CLICKED(IDC_BUTTON11, OnBnClickedButton11)
    ON_BN_CLICKED(IDC_BUTTON12, OnBnClickedButton12)
    ON_BN_CLICKED(IDC_BUTTON13, OnBnClickedButton13)
    ON_BN_CLICKED(IDC_BUTTON14, OnBnClickedButton14)
    ON_BN_CLICKED(IDC_BUTTON15, OnBnClickedButton15)
    ON_BN_CLICKED(IDC_BUTTON16, OnBnClickedButton16)
END_MESSAGE_MAP()


LRESULT  CsortItemsDlg::msg(WPARAM wParam, LPARAM lParam)
{
	thread2 = AfxBeginThread(RUNTIME_CLASS(myThread));	
	//myThread *p= new myThread();
	//p->CreateThread();

	return 0;
}
// CsortItemsDlg message handlers

BOOL CsortItemsDlg::OnInitDialog()
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
	m_list.InsertColumn(0, "111111111111", LVCFMT_LEFT, 75);
	m_list.InsertColumn(1, "222222222222", LVCFMT_RIGHT, 75);

	int idx=0;

	idx=m_list.InsertItem(0, "111");
	m_list.SetItemText(idx, 1, "12.12.2005");

	idx=m_list.InsertItem(1, "222");
	m_list.SetItemText(idx, 1, "22.22.2005");

	idx=m_list.InsertItem(2, "223");
	m_list.SetItemText(idx, 1, "12.22.2006");

	/*
	columnDataType s;
	s.iColumn=0;
	s.format=CDMS_STRING;
	m_list.m_columnDataType.Add(s);
	*/

	SetWindowLong(this->m_hWnd,GWL_EXSTYLE,GetWindowLong(this->m_hWnd,GWL_EXSTYLE)^WS_EX_LAYERED);
	SetLayeredWindowAttributes(RGB(0,0,0), 220,LWA_ALPHA);


    m_advEdit.SetRestriction(CFormattedEdit::CDMS_STRING, TRUE);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CsortItemsDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CsortItemsDlg::OnPaint() 
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
		m_staticPic.SetBitmap(bmp);
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CsortItemsDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CsortItemsDlg::OnBnClickedOk()
{
	OnOK();
}


void CsortItemsDlg::OnBnClickedButton1()
{
	//std::list<columnDataType> lst;
}

void CsortItemsDlg::OnBnClickedButton2()
{
	int i=0;
	columnDataType s;
	s.iColumn=0;
	s.format=CDMS_STRING;
	m_list.m_columnDataType.Add(s);

	CArray<columnDataType> lst;	
	
	lst.Add(s);

	for (i=0; i<lst.GetCount(); i++)
	{
		columnDataType foo=lst[i];
		TRACE1("%i\n", foo.iColumn);
	}

}

void CsortItemsDlg::OnLvnColumnclickList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	
	AfxMessageBox("DD");
	*pResult = 0;
}

void CsortItemsDlg::OnBnClickedButton3()
{
	CString foo;
	m_express.GetWindowText(foo);

	CString foo2;
	m_data.GetWindowText(foo2);

	CAtlRegExp<> re;
	re.Parse(foo);
	CAtlREMatchContext<> mc; 
	BOOL isMached=re.Match(foo2, &mc);
	if (isMached)
	{
		m_expressRet.SetWindowText("ok!!!");
	}
	else
		m_expressRet.SetWindowText("-----------");

}

void CsortItemsDlg::OnBnClickedButton4()
{
	double f=0.0;
	
	CString t="1072";

	f=atof(t);

	TRACE1("%d\n", f);
}

void CsortItemsDlg::OnBnClickedButton5()
{
	m_advEdit.SetRestriction(1);
	m_advEdit.SetRestriction(1, FALSE);

	HWND hwnd = ::GetTopWindow(this->GetSafeHwnd());
	// while we have a valid hwnd,
	// loop through all child windows
	while (hwnd)
	{
		// do something with the hwnd
		// and get the next child control's hwnd
		hwnd = ::GetNextWindow(hwnd	, GW_HWNDNEXT);
		
		CWnd *t = FromHandle(hwnd);

		if (t!=NULL)
		if (GetWindowLong(t->m_hWnd, GWL_USERDATA)==323994)
		{
				t->SetWindowText("-------------------------");
				CFormattedEdit *ctrl = (CFormattedEdit *)t;
				ctrl->m_bErrorValidate = TRUE;				
		}
/*
		if (t->IsKindOf(RUNTIME_CLASS(CFormattedEdit)))
		{
			TRACE1("long data=%ld\n", GetWindowLong(t->m_hWnd, GWL_USERDATA));
			CFormattedEdit *foo=(CFormattedEdit*)FromHandle(t->GetSafeHwnd());
		}		
*/
	}
}

UINT showWorker(LPVOID pParam)
{
	CsortItemsDlg *foo=(CsortItemsDlg*)pParam;
	
	foo->m_button.EnableWindow(FALSE);

	if (foo!=NULL)
	foo->insertItems();

	foo->m_button.EnableWindow(TRUE);
	return 0;
}

void CsortItemsDlg::insertItems()
{
	m_list.DeleteAllItems();

	for (int i=0; i<=100; i++)
	{
		m_list.InsertItem(i, "ddd");
		m_list.SetItemText(i, 1, "ddd2");
	}
}

void CsortItemsDlg::OnBnClickedButton6()
{    
		
//	AfxBeginThread(showWorker, this);
//	PostMessage(WM_SHOW, 0, 0);
	
	//thread2->ResumeThread();
	//thread2->CreateThread();	

	HWND hwnd = ::GetTopWindow(this->GetSafeHwnd());
	// while we have a valid hwnd,
	// loop through all child windows
	while (hwnd)
	{	
		hwnd = ::GetNextWindow(hwnd	, GW_HWNDNEXT);

		CWnd *t = FromHandle(hwnd);

		if (t!=NULL)
			if (GetWindowLong(t->m_hWnd, GWL_USERDATA)==323994)
			{
				//t->SetWindowText("-------------------------");
				CFormattedEdit *ctrl = (CFormattedEdit *)t;
				ctrl->RedrawWindow();
				if (ctrl->IsValid())
                {
                    AfxMessageBox("DDD");
                }
			}
	}
}

void CsortItemsDlg::OnBnClickedButton7()
{
//	thread2->PostThreadMessage(QUIT, 0, 0);	
}

void CsortItemsDlg::OnBnClickedButton8()
{
	m_list.DeleteAllItems();
	AfxBeginThread(showWorker, this);
}

UINT showWorker2(LPVOID pParam)
{
	CsortItemsDlg *foo=(CsortItemsDlg*)pParam;
	
	sample stu;
	foo->makeNULL(&stu);

	if (stu.f != NULL)
	{
		int whatthefuck=0;
		AfxMessageBox("is not null");
	}
	return 0;
}


void CsortItemsDlg::makeNULL(sample *st)
{
	st->f=NULL;
	st->foo=NULL;
}


void CsortItemsDlg::OnBnClickedButton9()
{
	AfxBeginThread(showWorker2, this);
}


#define decorationMask 0xFF00
#define restrictionMask 0xFF

#define R1 1
#define R2 2
#define R3 4

#define A 16
#define B 32
#define C 48
#define D 64

#define V 

void CsortItemsDlg::OnBnClickedButton10()
{
    int t;
    
    t = R1;

    switch(t & restrictionMask)
    {
    case 1:
        AfxMessageBox("1");
        break;
    case 2:
        AfxMessageBox("2");
        break;
    case 4:
        AfxMessageBox("3");
        break;
    case 3:
        AfxMessageBox("3");
        break;
    }

    switch(t & decorationMask)
    {
        case 16:
            AfxMessageBox("ok1");
            break;

        case 32:
            AfxMessageBox("ok2");
            break;

        case 48:
            AfxMessageBox("ok3");
            break;
        case 64:
            AfxMessageBox("ok4");
            break;

    }

}

void CsortItemsDlg::OnBnClickedButton11()
{
    int f = StrToInt("LLLLLLLLLL");
    TRACE1("%i", f);
}

void CsortItemsDlg::OnBnClickedButton12()
{
    m_bigBoxCtrl.SetWindowText("DDDDD\r\nVVVVVVVVVVrrrrrrrrrrrrrrrrrrrrwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\r\nEEEEEEEEEEEEEE\r\nWWWWWWWWWWW");
}

void CsortItemsDlg::OnBnClickedButton13()
{
    setlocale( LC_ALL, "" ); 
    struct lconv *lc = localeconv();

    //std::list<std::string>str;
    //stringtok(str, "  f ppp ddsada");
    
  //  for (std::list<std::string>const_iterator i = str.begin(); i != str.end(); ++i)
    {
//        cerr << *i << std::endl;
    } 
}

void CsortItemsDlg::OnBnClickedButton14()
{
    int i=0;

    bool j =  i ? true : false;

}

void CsortItemsDlg::OnBnClickedButton15()
{
}

void CsortItemsDlg::OnBnClickedButton16()
{
    CclsPDFCreator0 *d = new CclsPDFCreator0();    
    CclsPDFCreatorOptions opt;
    opt.put_AutosaveDirectory("1");
    opt.put_AutosaveFormat(0);    
    d->cStart("/NoProcessingAtStartup", TRUE);
    //d->Create("", WS_VISIBLE, CRect(0, 0, 0, 0), this, 0x123123);
    d->put_cDefaultPrinter("PDFCreator");
    d->cPrintFile("c:\\pagefile.sys");
    
}
