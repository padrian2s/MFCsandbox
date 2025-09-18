// test_helpDoc.cpp : implementation of the Ctest_helpDoc class
//

#include "stdafx.h"
#include "test_help.h"

#include "test_helpDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctest_helpDoc

IMPLEMENT_DYNCREATE(Ctest_helpDoc, CDocument)

BEGIN_MESSAGE_MAP(Ctest_helpDoc, CDocument)
END_MESSAGE_MAP()


// Ctest_helpDoc construction/destruction

Ctest_helpDoc::Ctest_helpDoc()
{
	// TODO: add one-time construction code here

}

Ctest_helpDoc::~Ctest_helpDoc()
{
}

BOOL Ctest_helpDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// Ctest_helpDoc serialization

void Ctest_helpDoc::Serialize(CArchive& ar)
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


// Ctest_helpDoc diagnostics

#ifdef _DEBUG
void Ctest_helpDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void Ctest_helpDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Ctest_helpDoc commands
