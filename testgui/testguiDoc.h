// testguiDoc.h : interface of the CtestguiDoc class
//


#pragma once

class CtestguiDoc : public CDocument
{
protected: // create from serialization only
	CtestguiDoc();
	DECLARE_DYNCREATE(CtestguiDoc)

// Attributes
public:

// Operations
public:

// Overrides
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CtestguiDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


