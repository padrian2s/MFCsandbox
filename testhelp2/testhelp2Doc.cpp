// testhelp2Doc.cpp : implementation of the Ctesthelp2Doc class
//

#include "stdafx.h"
#include "testhelp2.h"

#include "testhelp2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctesthelp2Doc

IMPLEMENT_DYNCREATE(Ctesthelp2Doc, CDocument)

BEGIN_MESSAGE_MAP(Ctesthelp2Doc, CDocument)
END_MESSAGE_MAP()


// Ctesthelp2Doc construction/destruction

Ctesthelp2Doc::Ctesthelp2Doc()
{
	// TODO: add one-time construction code here

}

Ctesthelp2Doc::~Ctesthelp2Doc()
{
}

BOOL Ctesthelp2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// Ctesthelp2Doc serialization

void Ctesthelp2Doc::Serialize(CArchive& ar)
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


// Ctesthelp2Doc diagnostics

#ifdef _DEBUG
void Ctesthelp2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void Ctesthelp2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// Ctesthelp2Doc commands
