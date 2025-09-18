// test_h2View.h : interface of the Ctest_h2View class
//


#pragma once


class Ctest_h2View : public CView
{
protected: // create from serialization only
	Ctest_h2View();
	DECLARE_DYNCREATE(Ctest_h2View)

// Attributes
public:
	Ctest_h2Doc* GetDocument() const;

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
	virtual ~Ctest_h2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in test_h2View.cpp
inline Ctest_h2Doc* Ctest_h2View::GetDocument() const
   { return reinterpret_cast<Ctest_h2Doc*>(m_pDocument); }
#endif

