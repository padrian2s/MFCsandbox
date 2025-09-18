// MDIResView.h : interface of the CMDIResView class
//


#pragma once


class CMDIResView : public CView
{
protected: // create from serialization only
	CMDIResView();
	DECLARE_DYNCREATE(CMDIResView)

// Attributes
public:
	CMDIResDoc* GetDocument() const;

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
	virtual ~CMDIResView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MDIResView.cpp
inline CMDIResDoc* CMDIResView::GetDocument() const
   { return reinterpret_cast<CMDIResDoc*>(m_pDocument); }
#endif

