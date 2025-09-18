// OneDoc.cpp : implementation file
//

#include "stdafx.h"
#include "test.h"
#include "OneDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COneDoc

IMPLEMENT_DYNCREATE(COneDoc, CDocument)

COneDoc::COneDoc()
{
	strcpy(szOne, "One");
}

BOOL COneDoc::OnNewDocument()
{
	SetTitle("One");
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

COneDoc::~COneDoc()
{
}


BEGIN_MESSAGE_MAP(COneDoc, CDocument)
	//{{AFX_MSG_MAP(COneDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COneDoc diagnostics

#ifdef _DEBUG
void COneDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void COneDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// COneDoc serialization

void COneDoc::Serialize(CArchive& ar)
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

/////////////////////////////////////////////////////////////////////////////
// COneDoc commands
