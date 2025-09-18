// testhelp2Doc.h : interface of the Ctesthelp2Doc class
//


#pragma once

class Ctesthelp2Doc : public CDocument
{
protected: // create from serialization only
	Ctesthelp2Doc();
	DECLARE_DYNCREATE(Ctesthelp2Doc)

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
	virtual ~Ctesthelp2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


