#if !defined(AFX_AFORM_H__272FB6C1_D8F2_11D3_8DBE_E4E67DD2885B__INCLUDED_)
#define AFX_AFORM_H__272FB6C1_D8F2_11D3_8DBE_E4E67DD2885B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AForm.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAForm form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CAForm : public CFormView
{
protected:
	CAForm();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CAForm)

// Form Data
public:
	//{{AFX_DATA(CAForm)
	enum { IDD = IDD_AFORM };
	CString	m_edtEdit1;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:
	CEditView *GetEditView();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAForm)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CAForm();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CAForm)
	afx_msg void OnTodoc();
	afx_msg void OnDoclink();
	afx_msg void OnDocunlink();
	afx_msg void OnFromdoc();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AFORM_H__272FB6C1_D8F2_11D3_8DBE_E4E67DD2885B__INCLUDED_)
