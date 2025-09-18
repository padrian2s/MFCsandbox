#pragma once


// CShowValidationErrors dialog

class CShowValidationErrors : public CDialog
{
	DECLARE_DYNAMIC(CShowValidationErrors)

public:
	CShowValidationErrors(CWnd* pParent = NULL);   // standard constructor
	virtual ~CShowValidationErrors();

// Dialog Data
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
