// MessageDialog.cpp : implementation file
//
#include "stdafx.h"
#include "MessageDialog.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMessageDialog dialog


CMessageDialog::CMessageDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CMessageDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMessageDialog)
	m_szMessage = _T("");
	//}}AFX_DATA_INIT
}


void CMessageDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMessageDialog)
	DDX_Text(pDX, IDC_STATIC_MESSAGE, m_szMessage);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMessageDialog, CDialog)
	//{{AFX_MSG_MAP(CMessageDialog)
	ON_BN_CLICKED(IDC_BUTTON1, OnUpdateString)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMessageDialog message handlers

void CMessageDialog::OnOK() 
{
	// OnOK is not used to prevent the updating of member variable through DDX.
	CDialog::OnCancel();
}



void CMessageDialog::OnUpdateString()
{
//	m_szMessage = szString;
	UpdateData(FALSE);
}
