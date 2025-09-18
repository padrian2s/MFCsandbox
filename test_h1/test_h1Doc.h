// test_h1Doc.h : interface of the Ctest_h1Doc class
//


#pragma once

class Ctest_h1Doc : public CDocument
{
protected: // create from serialization only
	Ctest_h1Doc();
	DECLARE_DYNCREATE(Ctest_h1Doc)

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
	virtual ~Ctest_h1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


