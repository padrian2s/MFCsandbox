// test_helpView.cpp : implementation of the Ctest_helpView class
//

#include "stdafx.h"
#include "test_help.h"

#include "test_helpDoc.h"
#include "test_helpView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest_helpView

IMPLEMENT_DYNCREATE(Ctest_helpView, CFormView)

BEGIN_MESSAGE_MAP(Ctest_helpView, CFormView)
END_MESSAGE_MAP()

// Ctest_helpView construction/destruction

Ctest_helpView::Ctest_helpView()
	: CFormView(Ctest_helpView::IDD)
{
	// TODO: add construction code here

}

Ctest_helpView::~Ctest_helpView()
{
}

void Ctest_helpView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL Ctest_helpView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void Ctest_helpView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ResizeParentToFit();
}


// Ctest_helpView diagnostics

#ifdef _DEBUG
void Ctest_helpView::AssertValid() const
{
	CFormView::AssertValid();
}

void Ctest_helpView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

Ctest_helpDoc* Ctest_helpView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest_helpDoc)));
	return (Ctest_helpDoc*)m_pDocument;
}
#endif //_DEBUG


// Ctest_helpView message handlers
