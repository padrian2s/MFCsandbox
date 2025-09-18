// test_h2Doc.h : interface of the Ctest_h2Doc class
//


#pragma once

class Ctest_h2Doc : public CDocument
{
protected: // create from serialization only
	Ctest_h2Doc();
	DECLARE_DYNCREATE(Ctest_h2Doc)

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
	virtual ~Ctest_h2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


