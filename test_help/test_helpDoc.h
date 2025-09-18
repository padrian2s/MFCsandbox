// test_helpDoc.h : interface of the Ctest_helpDoc class
//


#pragma once

class Ctest_helpDoc : public CDocument
{
protected: // create from serialization only
	Ctest_helpDoc();
	DECLARE_DYNCREATE(Ctest_helpDoc)

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
	virtual ~Ctest_helpDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


