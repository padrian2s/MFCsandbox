// test_h1View.cpp : implementation of the Ctest_h1View class
//

#include "stdafx.h"
#include "test_h1.h"

#include "test_h1Doc.h"
#include "test_h1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest_h1View

IMPLEMENT_DYNCREATE(Ctest_h1View, CView)

BEGIN_MESSAGE_MAP(Ctest_h1View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Ctest_h1View construction/destruction

Ctest_h1View::Ctest_h1View()
{
	// TODO: add construction code here

}

Ctest_h1View::~Ctest_h1View()
{
}

BOOL Ctest_h1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Ctest_h1View drawing

void Ctest_h1View::OnDraw(CDC* /*pDC*/)
{
	Ctest_h1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// Ctest_h1View printing

BOOL Ctest_h1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void Ctest_h1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void Ctest_h1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// Ctest_h1View diagnostics

#ifdef _DEBUG
void Ctest_h1View::AssertValid() const
{
	CView::AssertValid();
}

void Ctest_h1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ctest_h1Doc* Ctest_h1View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ctest_h1Doc)));
	return (Ctest_h1Doc*)m_pDocument;
}
#endif //_DEBUG


// Ctest_h1View message handlers
