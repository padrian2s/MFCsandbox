// fancyStaticDlg.h : header file
//

#pragma once

#include "advancedStaticCtrl.h"

// CfancyStaticDlg dialog
class CfancyStaticDlg : public CDialog
{
// Construction
public:
	CfancyStaticDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_FANCYSTATIC_DIALOG };

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

	CStaticStyledCtrl   m_label;
	CStaticStyledCtrl   m_edit;
	CFont m_font;

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit1();
	CString m_edit2;
	afx_msg void OnStnClickedStatic1();
	afx_msg void OnBnClickedButton3();
};
