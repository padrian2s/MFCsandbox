// testhelp2View.h : interface of the Ctesthelp2View class
//


#pragma once


class Ctesthelp2View : public CFormView
{
protected: // create from serialization only
	Ctesthelp2View();
	DECLARE_DYNCREATE(Ctesthelp2View)

public:
	enum{ IDD = IDD_TESTHELP2_FORM };

// Attributes
public:
	Ctesthelp2Doc* GetDocument() const;

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
	virtual ~Ctesthelp2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in testhelp2View.cpp
inline Ctesthelp2Doc* Ctesthelp2View::GetDocument() const
   { return reinterpret_cast<Ctesthelp2Doc*>(m_pDocument); }
#endif

