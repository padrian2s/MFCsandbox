// myExcelDlg.h : header file
//

#pragma once

class CmyExcelDlgAutoProxy;


// CmyExcelDlg dialog
class CmyExcelDlg : public CDialog
{
	DECLARE_DYNAMIC(CmyExcelDlg);
	friend class CmyExcelDlgAutoProxy;

// Construction
public:
	CmyExcelDlg(CWnd* pParent = NULL);	// standard constructor
	virtual ~CmyExcelDlg();

// Dialog Data
	enum { IDD = IDD_MYEXCEL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	CmyExcelDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButton1();
    afx_msg void OnBnClickedButton2();
};
