// CDMSView.cpp : implementation of the CCDMSView class
//

#include "stdafx.h"
#include "CDMS.h"

#include "CDMSDoc.h"
#include "CDMSView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCDMSView

IMPLEMENT_DYNCREATE(CCDMSView, CFormView)

BEGIN_MESSAGE_MAP(CCDMSView, CFormView)
END_MESSAGE_MAP()

// CCDMSView construction/destruction

CCDMSView::CCDMSView()
	: CFormView(CCDMSView::IDD)
{
	// TODO: add construction code here

}

CCDMSView::~CCDMSView()
{
}

void CCDMSView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CCDMSView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CCDMSView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ResizeParentToFit();
}


// CCDMSView diagnostics

#ifdef _DEBUG
void CCDMSView::AssertValid() const
{
	CFormView::AssertValid();
}

void CCDMSView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CCDMSDoc* CCDMSView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCDMSDoc)));
	return (CCDMSDoc*)m_pDocument;
}
#endif //_DEBUG


// CCDMSView message handlers
