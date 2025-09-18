// test_h2View.cpp : implementation of the Ctest_h2View class
//

#include "stdafx.h"
#include "test_h2.h"

#include "test_h2Doc.h"
#include "test_h2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest_h2View

IMPLEMENT_DYNCREATE(Ctest_h2View, CView)

BEGIN_MESSAGE_MAP(Ctest_h2View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Ctest_h2View construction/destruction

Ctest_h2View::Ctest_h2View()
{
	// TODO: add construction code here

}

Ctest_h2View::~Ctest_h2View()
{
}

BOOL Ctest_h2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Ctest_h2View drawing

void Ctest_h2View::OnDraw(CDC* /*pDC*/)
{
	Ctest_h2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// Ctest_h2View printing

BOOL Ctest_h2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void Ctest_h2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void Ctest_h2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// Ctest_h2View diagnostics

#ifdef _DEBUG
void Ctest_h2View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest_h2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest_h2Doc* Ctest_h2View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest_h2Doc)));
	return (Ctest_h2Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest_h2View message handlers
