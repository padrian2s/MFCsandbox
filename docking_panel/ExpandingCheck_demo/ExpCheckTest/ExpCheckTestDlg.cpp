// ExpCheckTestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ExpCheckTest.h"
#include "ExpCheckTestDlg.h"
#include ".\expchecktestdlg.h"
#include "ScrollHelper.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExpCheckTestDlg dialog

CExpCheckTestDlg::CExpCheckTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CExpCheckTestDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CExpCheckTestDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_chName.SetFrame(&m_stName);
	m_chType.SetFrame(&m_stType);
    m_chType2.SetFrame(&m_myCheck);

}

void CExpCheckTestDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    //{{AFX_DATA_MAP(CExpCheckTestDlg)
    DDX_Control(pDX, IDC_STTYPE, m_stType);
    DDX_Control(pDX, IDC_STNAME, m_stName);
    DDX_Control(pDX, IDC_CHUNNAMED, m_chUnnamed);
    DDX_Control(pDX, IDC_CHTYPE, m_chType);
    DDX_Control(pDX, IDC_CHNAME, m_chName);
    //}}AFX_DATA_MAP
    DDX_Control(pDX, IDC_STTYPE2, m_myCheck);
    DDX_Control(pDX, IDC_CHECK3, m_chType2);
}

BEGIN_MESSAGE_MAP(CExpCheckTestDlg, CDialog)
	//{{AFX_MSG_MAP(CExpCheckTestDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CHUNNAMED, OnChunnamed)
	ON_BN_CLICKED(IDC_CHNAME, OnChname)
	//}}AFX_MSG_MAP
    ON_BN_CLICKED(IDC_BUTTON9, OnBnClickedButton9)
    ON_WM_SIZE()
    ON_WM_VSCROLL()
    ON_BN_CLICKED(IDC_BUTTON11, OnBnClickedButton11)
    ON_BN_CLICKED(IDC_BUTTON12, OnBnClickedButton12)
    ON_BN_CLICKED(IDC_BUTTON1, OnBnClickedButton1)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExpCheckTestDlg message handlers

BOOL CExpCheckTestDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

    CRect r;
    (GetDlgItem(IDC_STATIC_1))->GetWindowRect(&r);
    m_SubForms.SetCenterPos(r);
    m_myDialog = new myDialog();
    BOOL ret = m_SubForms.CreateSubForm(m_myDialog, IDD_DIALOG1, GetParent());
    if (ret == TRUE)
    {
        m_SubForms.ShowSubForm();
    }
    
    //m_myDialog->MoveWindow(r.left, r.top, 50, 50, TRUE);
    
	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
//	m_chType.SetCheck(1);
//	m_chUnnamed.SetCheck(1);

    CRect m_rect2;
    GetWindowRect(m_rect);
    m_nScrollPos = 0;

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CExpCheckTestDlg::OnPaint() 
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
HCURSOR CExpCheckTestDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CExpCheckTestDlg::OnChunnamed() 
{
	int nCheck = m_chUnnamed.GetCheck();

	if(nCheck == 1)
		m_chName.SetCheck(0);
	else
		m_chName.SetCheck(1);
	
}

void CExpCheckTestDlg::OnChname() 
{
	int nCheck = m_chName.GetCheck();

	if(nCheck == 1)
		m_chUnnamed.SetCheck(0);
	else
		m_chUnnamed.SetCheck(1);

}

void CExpCheckTestDlg::OnBnClickedButton9()
{    
    m_rect.bottom-=20;
    //m_myDialog->SetWindowPos(&CWnd::wndTop, 0, 0, m_rect.Width()-40, m_rect.Height()-40, SWP_SHOWWINDOW);    
}

void CExpCheckTestDlg::OnSize(UINT nType, int cx, int cy)
{
    CDialog::OnSize(nType, cx, cy);
    
    return;
    // TODO: Add your message handler code here.
    m_nCurHeight = cy;
    int nScrollMax;
    if (cy < m_rect.Height())
    {
        nScrollMax = m_rect.Height() - cy;
    }
    else
        nScrollMax = 0;

    SCROLLINFO si;
    si.cbSize = sizeof(SCROLLINFO);
    si.fMask = SIF_ALL; // SIF_ALL = SIF_PAGE | SIF_RANGE | SIF_POS;
    si.nMin = 0;
    si.nMax = nScrollMax;
    si.nPage = si.nMax/10;
    si.nPos = 0;
    SetScrollInfo(SB_VERT, &si, TRUE);   
}



void CExpCheckTestDlg::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
    int nDelta;
    int nMaxPos = m_rect.Height() - m_nCurHeight;

    switch (nSBCode)
    {
    case SB_LINEDOWN:
        if (m_nScrollPos >= nMaxPos)
            return;
        nDelta = min(nMaxPos/100,nMaxPos-m_nScrollPos);
        break;

    case SB_LINEUP:
        if (m_nScrollPos <= 0)
            return;
        nDelta = -min(nMaxPos/100,m_nScrollPos);
        break;

    case SB_PAGEDOWN:
        if (m_nScrollPos >= nMaxPos)
            return;
        nDelta = min(nMaxPos/10,nMaxPos-m_nScrollPos);
        break;

    case SB_THUMBPOSITION:
        nDelta = (int)nPos - m_nScrollPos;
        break;

    case SB_PAGEUP:
        if (m_nScrollPos <= 0)
            return;
        nDelta = -min(nMaxPos/10,m_nScrollPos);
        break;

    default:
        return;
    }
    m_nScrollPos += nDelta;
    SetScrollPos(SB_VERT,m_nScrollPos,TRUE);
    ScrollWindow(0,-nDelta);
    CDialog::OnVScroll(nSBCode, nPos, pScrollBar);
}

void CExpCheckTestDlg::OnBnClickedButton11()
{    
}

void CExpCheckTestDlg::OnBnClickedButton12()
{
    // TODO: Add your control notification handler code here
}

void CExpCheckTestDlg::OnBnClickedButton1()
{
    // TODO: Add your control notification handler code here
}
