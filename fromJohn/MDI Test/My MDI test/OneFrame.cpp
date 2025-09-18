// OneFrame.cpp : implementation file
//

#include "stdafx.h"
#include "test.h"
#include "OneFrame.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COneFrame

IMPLEMENT_DYNCREATE(COneFrame, CMDIChildWnd)

COneFrame::COneFrame()
{
}

COneFrame::~COneFrame()
{
}


BEGIN_MESSAGE_MAP(COneFrame, CMDIChildWnd)
	//{{AFX_MSG_MAP(COneFrame)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COneFrame message handlers
