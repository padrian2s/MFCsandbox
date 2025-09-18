// comboboxDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CcomboboxDlg dialog
class CcomboboxDlg : public CDialog
{
// Construction
public:
	CcomboboxDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_COMBOBOX_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButton1();
    CComboBox m_combo;
    afx_msg void OnBnClickedButton2();
};
