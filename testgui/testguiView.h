// testguiView.h : interface of the CtestguiView class
//


#pragma once
#include "afxwin.h"


class CtestguiView : public CFormView
{
protected: // create from serialization only
	CtestguiView();
	DECLARE_DYNCREATE(CtestguiView)

public:
	enum{ IDD = IDD_TESTGUI_FORM };

// Attributes
public:
	CtestguiDoc* GetDocument() const;

// Operations
public:

// Overrides
	public:
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CtestguiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	CComboBox m_combo;
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // debug version in testguiView.cpp
inline CtestguiDoc* CtestguiView::GetDocument() const
   { return reinterpret_cast<CtestguiDoc*>(m_pDocument); }
#endif

