// testhelp2View.cpp : implementation of the Ctesthelp2View class
//

#include "stdafx.h"
#include "testhelp2.h"

#include "testhelp2Doc.h"
#include "testhelp2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctesthelp2View

IMPLEMENT_DYNCREATE(Ctesthelp2View, CFormView)

BEGIN_MESSAGE_MAP(Ctesthelp2View, CFormView)
END_MESSAGE_MAP()

// Ctesthelp2View construction/destruction

Ctesthelp2View::Ctesthelp2View()
	: CFormView(Ctesthelp2View::IDD)
{
	// TODO: add construction code here

}

Ctesthelp2View::~Ctesthelp2View()
{
}

void Ctesthelp2View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL Ctesthelp2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void Ctesthelp2View::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ResizeParentToFit();
}


// Ctesthelp2View diagnostics

#ifdef _DEBUG
void Ctesthelp2View::AssertValid() const
{
	CFormView::AssertValid();
}

void Ctesthelp2View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

Ctesthelp2Doc* Ctesthelp2View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctesthelp2Doc)));
	return (Ctesthelp2Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctesthelp2View message handlers
