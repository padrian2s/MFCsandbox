#if !defined(AFX_TWODOC_H__C6860C91_BAC2_11D4_B610_00E029627582__INCLUDED_)
#define AFX_TWODOC_H__C6860C91_BAC2_11D4_B610_00E029627582__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TwoDoc.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTwoDoc document

class CTwoDoc : public CDocument
{
protected:
	CTwoDoc();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CTwoDoc)

// Attributes
public:
	char szTwo[4];
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTwoDoc)
	public:
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
	protected:
	virtual BOOL OnNewDocument();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTwoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CTwoDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TWODOC_H__C6860C91_BAC2_11D4_B610_00E029627582__INCLUDED_)
