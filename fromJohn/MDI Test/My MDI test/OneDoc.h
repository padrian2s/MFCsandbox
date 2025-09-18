#if !defined(AFX_ONEDOC_H__DC0A5F1C_BABF_11D4_B610_00E029627582__INCLUDED_)
#define AFX_ONEDOC_H__DC0A5F1C_BABF_11D4_B610_00E029627582__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// OneDoc.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// COneDoc document

class COneDoc : public CDocument
{
protected:
	COneDoc();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(COneDoc)

// Attributes
public:
	char szOne[4];

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COneDoc)
	public:
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
	protected:
	virtual BOOL OnNewDocument();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~COneDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(COneDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ONEDOC_H__DC0A5F1C_BABF_11D4_B610_00E029627582__INCLUDED_)
