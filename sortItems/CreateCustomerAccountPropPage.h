#pragma once


// CCreateCustomerAccountPropPage dialog

class CCreateCustomerAccountPropPage : public CPropertyPage
{
	DECLARE_DYNAMIC(CCreateCustomerAccountPropPage)

public:
	CCreateCustomerAccountPropPage();
	virtual ~CCreateCustomerAccountPropPage();

// Dialog Data
	enum { IDD = IDD_DIALOG_CREATE_CUSTOMER_ACCT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
