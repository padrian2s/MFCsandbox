// testguiView.cpp : implementation of the CtestguiView class
//

#include "stdafx.h"
#include "testgui.h"

#include "testguiDoc.h"
#include "testguiView.h"
#include ".\testguiview.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestguiView

IMPLEMENT_DYNCREATE(CtestguiView, CFormView)

BEGIN_MESSAGE_MAP(CtestguiView, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, OnBnClickedButton1)
END_MESSAGE_MAP()

// CtestguiView construction/destruction

CtestguiView::CtestguiView()
	: CFormView(CtestguiView::IDD)
{
	// TODO: add construction code here

}

CtestguiView::~CtestguiView()
{
}

void CtestguiView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, m_combo);
}

BOOL CtestguiView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CtestguiView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();

	m_combo.InsertString(0, "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDD");
	ResizeParentToFit();
}


// CtestguiView diagnostics

#ifdef _DEBUG
void CtestguiView::AssertValid() const
{
	CFormView::AssertValid();
}

void CtestguiView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CtestguiDoc* CtestguiView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestguiDoc)));
	return (CtestguiDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestguiView message handlers

void CtestguiView::OnBnClickedButton1()
{
	m_combo.SetDroppedWidth(400);

	CStdioFile m_file;
	CString foo="", buff="";	
	if (m_file.Open("c:\\licence.txt", CFile::modeRead))
	{
		while(m_file.ReadString(foo))
		{
			buff+=foo;
		}	

		AfxMessageBox(buff);
	}
	else
	{
		AfxMessageBox("dd");
	}

	


}
