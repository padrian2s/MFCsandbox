// ReadOnlyDlg.cpp : implementation file
//

#include "stdafx.h"

#include "ReadOnly.h"
#include "ReadOnlyDlg.h"



#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReadOnlyDlg dialog

CReadOnlyDlg::CReadOnlyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReadOnlyDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReadOnlyDlg)
	m_ToAdd = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CReadOnlyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReadOnlyDlg)
	DDX_Control(pDX, IDC_EDIT1, m_wndReadOnly);
	DDX_Text(pDX, IDC_TOADD, m_ToAdd);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CReadOnlyDlg, CDialog)
	//{{AFX_MSG_MAP(CReadOnlyDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_BACK, OnBack)
	ON_BN_CLICKED(IDC_TEXT, OnText)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReadOnlyDlg message handlers

BOOL CReadOnlyDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here

	//set back color
	m_wndReadOnly.SetBackColor(RGB(0,255,255));
	//settext color
	m_wndReadOnly.SetTextColor(RGB(255,0,0));
	//add some text
	m_wndReadOnly.SetWindowText("Note: This edit box is read only but still has a white background.");
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CReadOnlyDlg::OnPaint() 
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
HCURSOR CReadOnlyDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CReadOnlyDlg::OnAdd() 
{
	UpdateData(TRUE);
	CString str;
	m_wndReadOnly.GetWindowText(str);
	m_wndReadOnly.SetWindowText(str + "\r\n" + m_ToAdd);
}


void CReadOnlyDlg::OnBack() 
{
	// call color dialog and change background color
	CColorDialog dlg;
	if (dlg.DoModal() == IDOK)
		m_wndReadOnly.SetBackColor(dlg.GetColor());
	
}

void CReadOnlyDlg::OnText() 
{
	// call color dialog and change text color
	CColorDialog dlg;
	if (dlg.DoModal() == IDOK)
		m_wndReadOnly.SetTextColor(dlg.GetColor());
}
