// ctimeDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CctimeDlg dialog
class CctimeDlg : public CDialog
{
// Construction
public:
	CctimeDlg(CWnd* pParent = NULL);	// standard constructor

	enum SHORTDATEFORMAT
	{
		YYYYmmdd	= 1,
		YYYYddmm	= 2,
		ddmmYYYY	= 3,
		mmddYYYY	= 4,
	};


// Dialog Data
	enum { IDD = IDD_CTIME_DIALOG };

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
	CEdit m_regval;
	CEdit m_value;
	CListBox m_result;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();

	CTime convertToTime(CString time, SHORTDATEFORMAT type);
	CTime convertToTime(double time, SHORTDATEFORMAT type);
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
};
