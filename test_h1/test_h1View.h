// test_h1View.h : interface of the Ctest_h1View class
//


#pragma once


class Ctest_h1View : public CView
{
protected: // create from serialization only
	Ctest_h1View();
	DECLARE_DYNCREATE(Ctest_h1View)

// Attributes
public:
	Ctest_h1Doc* GetDocument() const;

// Operations
public:

// Overrides
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~Ctest_h1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in test_h1View.cpp
inline Ctest_h1Doc* Ctest_h1View::GetDocument() const
   { return reinterpret_cast<Ctest_h1Doc*>(m_pDocument); }
#endif

