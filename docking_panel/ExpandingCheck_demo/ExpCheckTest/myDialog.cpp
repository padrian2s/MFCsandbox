// myDialog.cpp : implementation file
//

#include "stdafx.h"
#include "ExpCheckTest.h"
#include "myDialog.h"
#include ".\mydialog.h"
#include "ScrollHelper.h"

// myDialog dialog

IMPLEMENT_DYNAMIC(myDialog, CDialog)
myDialog::myDialog(CWnd* pParent /*=NULL*/)
	: CDialog(myDialog::IDD, pParent)
{
}

myDialog::~myDialog()
{
}

void myDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(myDialog, CDialog)
    ON_BN_CLICKED(IDC_BUTTON1, OnBnClickedButton1)
    ON_WM_SIZE()
    ON_WM_VSCROLL()
    ON_WM_HSCROLL()
    ON_BN_CLICKED(IDOK, OnBnClickedOk)
END_MESSAGE_MAP()


// myDialog message handlers

void myDialog::OnBnClickedButton1()
{
    ScrollWindow(0,20);
}

void myDialog::OnSize(UINT nType, int cx, int cy)
{
    CDialog::OnSize(nType, cx, cy);
        
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

void myDialog::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
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

BOOL myDialog::CreateEx(DWORD dwExStyle, LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, LPVOID lpParam)
{    

    return CDialog::CreateEx(dwExStyle, lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, lpParam);
}

void myDialog::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
    int i=0;
    CDialog::OnHScroll(nSBCode, nPos, pScrollBar);
}

void myDialog::OnBnClickedOk()
{

}
BOOL myDialog::OnInitDialog()
{
    CDialog::OnInitDialog();
    
    GetWindowRect(m_rect);
    m_nScrollPos = 0;
    m_rect.InflateRect(0, 0, 0, 200);
//    SetWindowPos(&CWnd::wndTop, 0, 0, m_rect.Width(), m_rect.Height()-200, SWP_SHOWWINDOW|SWP_NOMOVE);

   // BOOL t = this->EnableScrollBar(SB_BOTH);    


    return TRUE;  // return TRUE unless you set the focus to a control
    // EXCEPTION: OCX Property Pages should return FALSE
}
