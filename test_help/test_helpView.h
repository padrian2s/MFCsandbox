// test_helpView.h : interface of the Ctest_helpView class
//


#pragma once


class Ctest_helpView : public CFormView
{
protected: // create from serialization only
	Ctest_helpView();
	DECLARE_DYNCREATE(Ctest_helpView)

public:
	enum{ IDD = IDD_TEST_HELP_FORM };

// Attributes
public:
	Ctest_helpDoc* GetDocument() const;

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
	virtual ~Ctest_helpView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in test_helpView.cpp
inline Ctest_helpDoc* Ctest_helpView::GetDocument() const
   { return reinterpret_cast<Ctest_helpDoc*>(m_pDocument); }
#endif

