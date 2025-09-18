// myFormView.cpp : implementation file
//

#include "stdafx.h"
#include "MDIRes.h"
#include "myFormView.h"
#include ".\myformview.h"


// myFormView

IMPLEMENT_DYNCREATE(myFormView, CFormView)

myFormView::myFormView()
	: CFormView(myFormView::IDD)
{
}

myFormView::~myFormView()
{
}

void myFormView::DoDataExchange(CDataExchange* pDX)
{
    CFormView::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_BUTTON1, m_button);
}

BEGIN_MESSAGE_MAP(myFormView, CFormView)
    ON_BN_CLICKED(IDC_BUTTON2, OnBnClickedButton2)
    ON_BN_CLICKED(IDC_BUTTON1, OnBnClickedButton1)
END_MESSAGE_MAP()


// myFormView diagnostics

#ifdef _DEBUG
void myFormView::AssertValid() const
{
	CFormView::AssertValid();
}

void myFormView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG


// myFormView message handlers

void myFormView::OnBnClickedButton2()
{
    // TODO: Add your control notification handler code here
}

void myFormView::OnBnClickedButton1()
{
}

void myFormView::OnInitialUpdate()
{
    CFormView::OnInitialUpdate();

    m_button.setTextButtonColor(RGB(222, 0, 0));
    m_button.setBkButtonColor(RGB(0,0,222));
    m_button.RedrawWindow();    

    // TODO: Add your specialized code here and/or call the base class
}
