#if !defined(AFX_TWOFORM_H__C6860C93_BAC2_11D4_B610_00E029627582__INCLUDED_)
#define AFX_TWOFORM_H__C6860C93_BAC2_11D4_B610_00E029627582__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TwoForm.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTwoForm form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CTwoForm : public CFormView
{
protected:
	CTwoForm();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CTwoForm)

// Form Data
public:
	//{{AFX_DATA(CTwoForm)
	enum { IDD = IDD_TWOFORM };
	CListBox	m_List1;
	//}}AFX_DATA

// Attributes
public:
	
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTwoForm)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CTwoForm();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CTwoForm)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TWOFORM_H__C6860C93_BAC2_11D4_B610_00E029627582__INCLUDED_)
