#pragma once


// FraudAdviceUnmatchedTxn dialog

class FraudAdviceUnmatchedTxn : public CDialog
{
	DECLARE_DYNAMIC(FraudAdviceUnmatchedTxn)

public:
	FraudAdviceUnmatchedTxn(CWnd* pParent = NULL);   // standard constructor
	virtual ~FraudAdviceUnmatchedTxn();

// Dialog Data
	enum { IDD = IDD_FRAUDADVICEUNMATCHEDTXN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
