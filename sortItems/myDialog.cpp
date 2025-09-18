// myDialog.cpp : implementation file
//

#include "stdafx.h"
#include "sortItems.h"
#include "myDialog.h"
#include ".\mydialog.h"

#include "myThread.h"
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
END_MESSAGE_MAP()


// myDialog message handlers

BOOL myDialog::OnInitDialog()
{
	CDialog::OnInitDialog();	

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}

void myDialog::OnBnClickedButton1()
{	
	//AfxEndThread(0);
	float f=0.0;

	while (f<9999999)
	{
		f++;
		TRACE1("i=%f\n", f);
		MSG msg;
		if(PeekMessage(&msg, AfxGetMainWnd()->m_hWnd,
			0, 0, PM_REMOVE))
		{ /* handle it*/
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		} /* handle it */
		//Sleep(1234);
	}

	//PostQuitMessage(0);
}