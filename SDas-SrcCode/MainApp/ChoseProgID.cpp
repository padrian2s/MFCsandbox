// ChoseProgID.cpp : implementation file
//

#include "stdafx.h"
#include "exe_client.h"
#include "ChoseProgID.h"
#include ".\choseprogid.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChoseProgID dialog


CChoseProgID::CChoseProgID(CWnd* pParent /*=NULL*/)
	: CDialog(CChoseProgID::IDD, pParent)
{
	//{{AFX_DATA_INIT(CChoseProgID)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CChoseProgID::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CChoseProgID)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CChoseProgID, CDialog)
	//{{AFX_MSG_MAP(CChoseProgID)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDOK, OnBnClickedOk)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChoseProgID message handlers

CString CChoseProgID::Progid()
    {

    return m_strProgId;
    }

void CChoseProgID::OnCancel() 
    {
	// TODO: Add extra cleanup here
	EndDialog(IDCANCEL);	
	CDialog::OnCancel();
    }

void CChoseProgID::OnOK() 
    {
	// TODO: Add extra validation here
    GetDlgItemText(IDC_PROGID,m_strProgId);
	EndDialog(IDOK);
	CDialog::OnOK();
    }


BOOL CChoseProgID::OnInitDialog() 
    {
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	CWnd *pEdit = GetDlgItem(IDC_PROGID);
    pEdit->SetFocus();
	return TRUE;  // return TRUE unless you set the focus to a control
    	              // EXCEPTION: OCX Property Pages should return FALSE
    }

	void CChoseProgID::OnBnClickedOk()
	{
		// TODO: Add your control notification handler code here
		OnOK();
	}
