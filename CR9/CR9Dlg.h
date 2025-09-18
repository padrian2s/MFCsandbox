// CR9Dlg.h : header file
//

#pragma once
#include "crviewer1.h"


// CCR9Dlg dialog
class CCR9Dlg : public CDialog
{
// Construction
public:
	CCR9Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CR9_DIALOG };

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
    CCrviewer1 m_cr9;
    afx_msg void OnBnClickedOk();
};
