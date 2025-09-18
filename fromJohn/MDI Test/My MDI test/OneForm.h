#if !defined(AFX_ONEFORM_H__39B842A1_BAC2_11D4_B610_00E029627582__INCLUDED_)
#define AFX_ONEFORM_H__39B842A1_BAC2_11D4_B610_00E029627582__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// OneForm.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// COneForm form view

#include "ColorEdit.h"
#include "ColorLabel.h"

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class COneForm : public CFormView
{
protected:
	COneForm();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(COneForm)

// Form Data
public:
	//{{AFX_DATA(COneForm)
	enum { IDD = IDD_ONEFORM };
	CColorEdit	m_Edit5;
	CColorEdit	m_Edit4;
	CColorEdit	m_Edit3;
	CListBox	m_List1;
	CColorEdit	m_Edit2;
	CColorEdit	m_Edit1;
	CColorLabel m_Label1;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COneForm)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~COneForm();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(COneForm)
	afx_msg void OnSetfocusEdit1();
	afx_msg void OnKillfocusEdit1();
	afx_msg void OnSetfocusEdit2();
	afx_msg void OnKillfocusEdit2();
	afx_msg void OnKillfocusEdit3();
	afx_msg void OnSetfocusEdit3();
	afx_msg void OnKillfocusEdit4();
	afx_msg void OnSetfocusEdit4();
	afx_msg void OnKillfocusEdit5();
	afx_msg void OnSetfocusEdit5();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ONEFORM_H__39B842A1_BAC2_11D4_B610_00E029627582__INCLUDED_)

