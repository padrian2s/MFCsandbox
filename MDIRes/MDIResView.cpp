// MDIResView.cpp : implementation of the CMDIResView class
//

#include "stdafx.h"
#include "MDIRes.h"

#include "MDIResDoc.h"
#include "MDIResView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMDIResView

IMPLEMENT_DYNCREATE(CMDIResView, CView)

BEGIN_MESSAGE_MAP(CMDIResView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMDIResView construction/destruction

CMDIResView::CMDIResView()
{
	// TODO: add construction code here

}

CMDIResView::~CMDIResView()
{
}

BOOL CMDIResView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMDIResView drawing

void CMDIResView::OnDraw(CDC* /*pDC*/)
{
	CMDIResDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMDIResView printing

BOOL CMDIResView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMDIResView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMDIResView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMDIResView diagnostics

#ifdef _DEBUG
void CMDIResView::AssertValid() const
{
	CView::AssertValid();
}

void CMDIResView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMDIResDoc* CMDIResView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMDIResDoc)));
	return (CMDIResDoc*)m_pDocument;
}
#endif //_DEBUG


// CMDIResView message handlers
