// AForm.cpp : implementation file
//

#include "stdafx.h"
#include "scbdemo.h"
#include "scbDemoDoc.h"
#include "scbDemoView.h"
#include "AForm.h"
#include "ViewBar.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAForm

IMPLEMENT_DYNCREATE(CAForm, CFormView)

CAForm::CAForm()
	: CFormView(CAForm::IDD)
{
	//{{AFX_DATA_INIT(CAForm)
	m_edtEdit1 = _T("");
	//}}AFX_DATA_INIT
}

CAForm::~CAForm()
{
}

void CAForm::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAForm)
	DDX_Text(pDX, IDC_EDIT1, m_edtEdit1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAForm, CFormView)
	//{{AFX_MSG_MAP(CAForm)
	ON_BN_CLICKED(ID_TODOC, OnTodoc)
	ON_BN_CLICKED(IDC_DOCLINK, OnDoclink)
	ON_BN_CLICKED(IDC_DOCUNLINK, OnDocunlink)
	ON_BN_CLICKED(ID_FROMDOC, OnFromdoc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAForm diagnostics

#ifdef _DEBUG
void CAForm::AssertValid() const
{
	CFormView::AssertValid();
}

void CAForm::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAForm message handlers

/* ---------------------------------------------------------------
		Change the input focus to the main window when a menu
	key is selected.
--------------------------------------------------------------- */
BOOL CAForm::PreTranslateMessage(MSG* pMsg) 
{
	if (pMsg->message == WM_SYSKEYDOWN && pMsg->wParam == VK_MENU
		&& ((CViewBar *)(GetParent()))->IsFloating())
	{
		((CMainFrame *)AfxGetMainWnd())->m_hWndBeforeMenu =
			::GetFocus();
		AfxGetMainWnd()->SetFocus();
	}
	return CFormView::PreTranslateMessage(pMsg);
}


void CAForm::OnTodoc() 
{
	CEditView *pView;

	pView = GetEditView();
	if (pView) {
		UpdateData(TRUE);
		pView->GetEditCtrl().SetWindowText(m_edtEdit1);
//		GetDocument()->UpdateAllViews(this);
	}
}


void CAForm::OnFromdoc() 
{
	CEditView *pView;

	pView = GetEditView();
	if (pView) {
		pView->GetEditCtrl().GetWindowText(m_edtEdit1);
		UpdateData(FALSE);
//		GetDocument()->UpdateAllViews(this);
	}
}


void CAForm::OnDoclink() 
{
	CDocument *pDoc;
	CView *pView;

	// Unlink if needed
	if (GetDocument() != NULL)
		GetDocument()->RemoveView(this);
	// find out which document to link to
	pView = ((CSCBDemoApp *)AfxGetApp())->m_pActiveView;
	pDoc = pView->GetDocument();
	// there must be a document
	if (pDoc)
		pDoc->AddView(this);
}


void CAForm::OnDocunlink()
{
	if (GetDocument() != NULL)
		GetDocument()->RemoveView(this);
}


/* ---------------------------------------------------------------
		Returns a pointer to the first edit view attached to
	the document associated with this form view
--------------------------------------------------------------- */
CEditView *CAForm::GetEditView()
{
	CSCBDemoDoc *pDoc = (CSCBDemoDoc *)GetDocument();
	if (pDoc) {
		POSITION pos = pDoc->GetFirstViewPosition();
		CView* pView;

		while (pos != NULL)
		{
			pView = pDoc->GetNextView(pos);
			if (pView->IsKindOf(RUNTIME_CLASS(CEditView)))
				return (CEditView *)pView;
		}
	}
	return NULL;
}


void CAForm::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CFormView::OnBeginPrinting(pDC, pInfo);
}

void CAForm::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CFormView::OnEndPrinting(pDC, pInfo);
}

BOOL CAForm::OnPreparePrinting(CPrintInfo* pInfo) 
{
	// TODO: call DoPreparePrinting to invoke the Print dialog box
	
	return CFormView::OnPreparePrinting(pInfo);
}

void CAForm::OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint) 
{
	if (pSender) {
		if (pSender->IsKindOf(RUNTIME_CLASS(CAForm)))
			m_edtEdit1 = ((CAForm *)pSender)->m_edtEdit1;
	}
	UpdateData(FALSE);	
}


