// CDMSDoc.h : interface of the CCDMSDoc class
//


#pragma once

class CCDMSDoc : public CDocument
{
protected: // create from serialization only
	CCDMSDoc();
	DECLARE_DYNCREATE(CCDMSDoc)

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
	virtual ~CCDMSDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


