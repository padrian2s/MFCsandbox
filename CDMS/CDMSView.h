// CDMSView.h : interface of the CCDMSView class
//


#pragma once


class CCDMSView : public CFormView
{
protected: // create from serialization only
	CCDMSView();
	DECLARE_DYNCREATE(CCDMSView)

public:
	enum{ IDD = IDD_CDMS_FORM };

// Attributes
public:
	CCDMSDoc* GetDocument() const;

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
	virtual ~CCDMSView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CDMSView.cpp
inline CCDMSDoc* CCDMSView::GetDocument() const
   { return reinterpret_cast<CCDMSDoc*>(m_pDocument); }
#endif

