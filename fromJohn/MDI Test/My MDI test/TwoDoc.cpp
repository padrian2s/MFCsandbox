// TwoDoc.cpp : implementation file
//

#include "stdafx.h"
#include "test.h"
#include "TwoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTwoDoc

IMPLEMENT_DYNCREATE(CTwoDoc, CDocument)

CTwoDoc::CTwoDoc()
{
	strcpy(szTwo, "Two");
}

BOOL CTwoDoc::OnNewDocument()
{
	SetTitle("Two");
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

CTwoDoc::~CTwoDoc()
{
}


BEGIN_MESSAGE_MAP(CTwoDoc, CDocument)
	//{{AFX_MSG_MAP(CTwoDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTwoDoc diagnostics

#ifdef _DEBUG
void CTwoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTwoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTwoDoc serialization

void CTwoDoc::Serialize(CArchive& ar)
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
// CTwoDoc commands
