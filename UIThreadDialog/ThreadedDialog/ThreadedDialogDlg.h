// ThreadedDialogDlg.h : header file
//

#if !defined(AFX_THREADEDDIALOGDLG_H__A471F807_F43A_11D4_816A_C06849C10000__INCLUDED_)
#define AFX_THREADEDDIALOGDLG_H__A471F807_F43A_11D4_816A_C06849C10000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "UIThread.h"

/////////////////////////////////////////////////////////////////////////////
// CThreadedDialogDlg dialog

class CThreadedDialogDlg : public CDialog
{
// Construction
public:
	CThreadedDialogDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CThreadedDialogDlg)
	enum { IDD = IDD_THREADED_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CThreadedDialogDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON			m_hIcon;
	CUIThread*		m_pThread;
	int				m_nDownCounter;
	CString			m_szMessage;

	afx_msg LRESULT OnClosing(WPARAM wParam, LPARAM lParam);

	// Generated message map functions
	//{{AFX_MSG(CThreadedDialogDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_THREADEDDIALOGDLG_H__A471F807_F43A_11D4_816A_C06849C10000__INCLUDED_)
