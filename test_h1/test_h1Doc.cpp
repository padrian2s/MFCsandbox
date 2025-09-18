// test_h1Doc.cpp : implementation of the Ctest_h1Doc class
//

#include "stdafx.h"
#include "test_h1.h"

#include "test_h1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

$(TargetPath)
// Ctest_h1Doc

IMPLEMENT_DYNCREATE(Ctest_h1Doc, CDocument)

BEGIN_MESSAGE_MAP(Ctest_h1Doc, CDocument)
END_MESSAGE_MAP()


// Ctest_h1Doc construction/destruction

Ctest_h1Doc::Ctest_h1Doc()
{
	// TODO: add one-time construction code here

}

Ctest_h1Doc::~Ctest_h1Doc()
{
}

BOOL Ctest_h1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// Ctest_h1Doc serialization

void Ctest_h1Doc::Serialize(CArchive& ar)
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


// Ctest_h1Doc diagnostics

#ifdef _DEBUG
void Ctest_h1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void Ctest_h1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Ctest_h1Doc commands
