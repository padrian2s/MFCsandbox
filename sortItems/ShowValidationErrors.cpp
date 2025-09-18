// ShowValidationErrors.cpp : implementation file
//

#include "stdafx.h"
#include "sortItems.h"
#include "ShowValidationErrors.h"


// CShowValidationErrors dialog

IMPLEMENT_DYNAMIC(CShowValidationErrors, CDialog)
CShowValidationErrors::CShowValidationErrors(CWnd* pParent /*=NULL*/)
	: CDialog(CShowValidationErrors::IDD, pParent)
{
}

CShowValidationErrors::~CShowValidationErrors()
{
}

void CShowValidationErrors::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CShowValidationErrors, CDialog)
END_MESSAGE_MAP()


// CShowValidationErrors message handlers
