// CreateCustomerAccountPropPage.cpp : implementation file
//

#include "stdafx.h"
#include "sortItems.h"
#include "CreateCustomerAccountPropPage.h"


// CCreateCustomerAccountPropPage dialog

IMPLEMENT_DYNAMIC(CCreateCustomerAccountPropPage, CPropertyPage)
CCreateCustomerAccountPropPage::CCreateCustomerAccountPropPage()
	: CPropertyPage(CCreateCustomerAccountPropPage::IDD)
{
}

CCreateCustomerAccountPropPage::~CCreateCustomerAccountPropPage()
{
}

void CCreateCustomerAccountPropPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCreateCustomerAccountPropPage, CPropertyPage)
END_MESSAGE_MAP()


// CCreateCustomerAccountPropPage message handlers
