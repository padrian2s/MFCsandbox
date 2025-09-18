// CDMSDoc.cpp : implementation of the CCDMSDoc class
//

#include "stdafx.h"
#include "CDMS.h"

#include "CDMSDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCDMSDoc

IMPLEMENT_DYNCREATE(CCDMSDoc, CDocument)

BEGIN_MESSAGE_MAP(CCDMSDoc, CDocument)
END_MESSAGE_MAP()


// CCDMSDoc construction/destruction

CCDMSDoc::CCDMSDoc()
{
	// TODO: add one-time construction code here

}

CCDMSDoc::~CCDMSDoc()
{
}

BOOL CCDMSDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CCDMSDoc serialization

void CCDMSDoc::Serialize(CArchive& ar)
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


// CCDMSDoc diagnostics

#ifdef _DEBUG
void CCDMSDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCDMSDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCDMSDoc commands
