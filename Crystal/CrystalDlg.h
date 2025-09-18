// CrystalDlg.h : header file
//

#pragma once
#include "crviewer1.h"

#import "C:\Program Files\Crystal Decisions\Report Designer Component\craxdrt9.dll" no_namespace
// CCrystalDlg dialog
class CCrystalDlg : public CDialog
{
// Construction
public:
    IApplicationPtr m_Application;
    IReportPtr m_Report;

	CCrystalDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CRYSTAL_DIALOG };

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
    CCrviewer1 m_crystal;
};
