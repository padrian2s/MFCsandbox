// test_h2Doc.cpp : implementation of the Ctest_h2Doc class
//

#include "stdafx.h"
#include "test_h2.h"

#include "test_h2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest_h2Doc

IMPLEMENT_DYNCREATE(Ctest_h2Doc, CDocument)

BEGIN_MESSAGE_MAP(Ctest_h2Doc, CDocument)
END_MESSAGE_MAP()


// Ctest_h2Doc construction/destruction

Ctest_h2Doc::Ctest_h2Doc()
{
	// TODO: add one-time construction code here

}

Ctest_h2Doc::~Ctest_h2Doc()
{
}

BOOL Ctest_h2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// Ctest_h2Doc serialization

void Ctest_h2Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// Ctest_h2Doc diagnostics

#ifdef _DEBUG
void Ctest_h2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void Ctest_h2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Ctest_h2Doc commands
