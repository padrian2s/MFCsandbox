// testguiDoc.cpp : implementation of the CtestguiDoc class
//

#include "stdafx.h"
#include "testgui.h"

#include "testguiDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestguiDoc

IMPLEMENT_DYNCREATE(CtestguiDoc, CDocument)

BEGIN_MESSAGE_MAP(CtestguiDoc, CDocument)
END_MESSAGE_MAP()


// CtestguiDoc construction/destruction

CtestguiDoc::CtestguiDoc()
{
	// TODO: add one-time construction code here

}

CtestguiDoc::~CtestguiDoc()
{
}

BOOL CtestguiDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CtestguiDoc serialization

void CtestguiDoc::Serialize(CArchive& ar)
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


// CtestguiDoc diagnostics

#ifdef _DEBUG
void CtestguiDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CtestguiDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CtestguiDoc commands
