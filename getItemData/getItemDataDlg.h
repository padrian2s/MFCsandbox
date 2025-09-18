// getItemDataDlg.h : header file
//

#pragma once
#include "afxcmn.h"


// CgetItemDataDlg dialog
class CgetItemDataDlg : public CDialog
{
// Construction
public:
	CgetItemDataDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_GETITEMDATA_DIALOG };

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
    CListCtrl m_list;
    afx_msg void OnNMDblclkList1(NMHDR *pNMHDR, LRESULT *pResult);
};
