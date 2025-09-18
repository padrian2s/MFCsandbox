// MDIResDoc.h : interface of the CMDIResDoc class
//


#pragma once

class CMDIResDoc : public CDocument
{
protected: // create from serialization only
	CMDIResDoc();
	DECLARE_DYNCREATE(CMDIResDoc)

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
	virtual ~CMDIResDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


