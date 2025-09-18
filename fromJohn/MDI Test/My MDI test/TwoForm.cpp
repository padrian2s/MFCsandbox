// TwoForm.cpp : implementation file
//

#include "stdafx.h"
#include "test.h"
#include "TwoForm.h"
#include "TwoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTwoForm

IMPLEMENT_DYNCREATE(CTwoForm, CFormView)

CTwoForm::CTwoForm()
	: CFormView(CTwoForm::IDD)
{
	//{{AFX_DATA_INIT(CTwoForm)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CTwoForm::~CTwoForm()
{
}

void CTwoForm::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTwoForm)
	DDX_Control(pDX, IDC_LIST1, m_List1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CTwoForm, CFormView)
	//{{AFX_MSG_MAP(CTwoForm)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTwoForm diagnostics

#ifdef _DEBUG
void CTwoForm::AssertValid() const
{
	CFormView::AssertValid();
}

void CTwoForm::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTwoForm message handlers

void CTwoForm::OnInitialUpdate() 
{
	CFormView::OnInitialUpdate();
	CTwoDoc *pDoc=(CTwoDoc *)GetDocument ();
	m_List1.AddString(pDoc->szTwo);
	// TODO: Add your specialized code here and/or call the base class
}
