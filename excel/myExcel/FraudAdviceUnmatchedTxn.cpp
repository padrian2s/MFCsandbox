// FraudAdviceUnmatchedTxn.cpp : implementation file
//

#include "stdafx.h"
#include "myExcel.h"
#include "FraudAdviceUnmatchedTxn.h"


// FraudAdviceUnmatchedTxn dialog

IMPLEMENT_DYNAMIC(FraudAdviceUnmatchedTxn, CDialog)
FraudAdviceUnmatchedTxn::FraudAdviceUnmatchedTxn(CWnd* pParent /*=NULL*/)
	: CDialog(FraudAdviceUnmatchedTxn::IDD, pParent)
{
}

FraudAdviceUnmatchedTxn::~FraudAdviceUnmatchedTxn()
{
}

void FraudAdviceUnmatchedTxn::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(FraudAdviceUnmatchedTxn, CDialog)
END_MESSAGE_MAP()


// FraudAdviceUnmatchedTxn message handlers
