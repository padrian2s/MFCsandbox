// OneForm.cpp : implementation file
//

#include "stdafx.h"
#include "test.h"
#include "OneForm.h"
#include "OneDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COneForm

IMPLEMENT_DYNCREATE(COneForm, CFormView)

COneForm::COneForm()
	: CFormView(COneForm::IDD)
{
	//{{AFX_DATA_INIT(COneForm)
	//}}AFX_DATA_INIT
}

COneForm::~COneForm()
{
}

void COneForm::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(COneForm)
	DDX_Control(pDX, IDC_EDIT5, m_Edit5);
	DDX_Control(pDX, IDC_EDIT4, m_Edit4);
	DDX_Control(pDX, IDC_EDIT3, m_Edit3);
	DDX_Control(pDX, IDC_LIST1, m_List1);
	DDX_Control(pDX, IDC_EDIT2, m_Edit2);
	DDX_Control(pDX, IDC_EDIT1, m_Edit1);
	DDX_Control(pDX, IDC_LABEL1, m_Label1);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(COneForm, CFormView)
	//{{AFX_MSG_MAP(COneForm)
	ON_EN_SETFOCUS(IDC_EDIT1, OnSetfocusEdit1)
	ON_EN_KILLFOCUS(IDC_EDIT1, OnKillfocusEdit1)
	ON_EN_SETFOCUS(IDC_EDIT2, OnSetfocusEdit2)
	ON_EN_KILLFOCUS(IDC_EDIT2, OnKillfocusEdit2)
	ON_EN_KILLFOCUS(IDC_EDIT3, OnKillfocusEdit3)
	ON_EN_SETFOCUS(IDC_EDIT3, OnSetfocusEdit3)
	ON_EN_KILLFOCUS(IDC_EDIT4, OnKillfocusEdit4)
	ON_EN_SETFOCUS(IDC_EDIT4, OnSetfocusEdit4)
	ON_EN_KILLFOCUS(IDC_EDIT5, OnKillfocusEdit5)
	ON_EN_SETFOCUS(IDC_EDIT5, OnSetfocusEdit5)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COneForm diagnostics

#ifdef _DEBUG
void COneForm::AssertValid() const
{
	CFormView::AssertValid();
}

void COneForm::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// COneForm message handlers

void COneForm::OnInitialUpdate() 
{
	CFormView::OnInitialUpdate();
	COneDoc *pDoc=(COneDoc *)GetDocument();
	m_List1.AddString(pDoc->szOne);
	m_Label1.SetTextColor(RGB(0, 0, 255));
	m_Label1.SetBkColor(RGB(255, 255, 0));
	// TODO: Add your specialized code here and/or call the base class
}

void COneForm::OnSetfocusEdit1() 
{
	// TODO: Add your control notification handler code here
	m_Edit1.SetBkColor(RGB(255, 150, 150));	
}

void COneForm::OnKillfocusEdit1() 
{
	// TODO: Add your control notification handler code here
	m_Edit1.SetSysColors();
}

void COneForm::OnSetfocusEdit2() 
{
	// TODO: Add your control notification handler code here
	m_Edit2.SetBkColor(RGB(255, 150, 150));	
}

void COneForm::OnKillfocusEdit2() 
{
	// TODO: Add your control notification handler code here
	m_Edit2.SetSysColors();
}

void COneForm::OnKillfocusEdit3() 
{
	// TODO: Add your control notification handler code here
	m_Edit3.SetSysColors();
}

void COneForm::OnSetfocusEdit3() 
{
	// TODO: Add your control notification handler code here
	m_Edit3.SetBkColor(RGB(255, 150, 150));	
}

void COneForm::OnKillfocusEdit4() 
{
	// TODO: Add your control notification handler code here
	m_Edit4.SetSysColors();
}

void COneForm::OnSetfocusEdit4() 
{
	// TODO: Add your control notification handler code here
	m_Edit4.SetBkColor(RGB(255, 150, 150));	
}

void COneForm::OnKillfocusEdit5() 
{
	// TODO: Add your control notification handler code here
	m_Edit5.SetSysColors();
}

void COneForm::OnSetfocusEdit5() 
{
	// TODO: Add your control notification handler code here
	m_Edit5.SetBkColor(RGB(255, 150, 150));	
}
