// MDIResDoc.cpp : implementation of the CMDIResDoc class
//

#include "stdafx.h"
#include "MDIRes.h"

#include "MDIResDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMDIResDoc

IMPLEMENT_DYNCREATE(CMDIResDoc, CDocument)

BEGIN_MESSAGE_MAP(CMDIResDoc, CDocument)
END_MESSAGE_MAP()


// CMDIResDoc construction/destruction

CMDIResDoc::CMDIResDoc()
{
	// TODO: add one-time construction code here

}

CMDIResDoc::~CMDIResDoc()
{
}

BOOL CMDIResDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CMDIResDoc serialization

void CMDIResDoc::Serialize(CArchive& ar)
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


// CMDIResDoc diagnostics

#ifdef _DEBUG
void CMDIResDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMDIResDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMDIResDoc commands
