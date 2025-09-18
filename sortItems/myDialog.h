#pragma once


// myDialog dialog

class myDialog : public CDialog
{
	DECLARE_DYNAMIC(myDialog)

public:
	myDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~myDialog();

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
};
