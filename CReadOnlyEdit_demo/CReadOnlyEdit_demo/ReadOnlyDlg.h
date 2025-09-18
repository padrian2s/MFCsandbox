// ReadOnlyDlg.h : header file
//

#if !defined(AFX_READONLYDLG_H__2571B070_F822_4056_BADC_9A41B036D0F9__INCLUDED_)
#define AFX_READONLYDLG_H__2571B070_F822_4056_BADC_9A41B036D0F9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//include file for CReadOnlyEdit(kb)
#include "ReadOnlyEdit.h"

/////////////////////////////////////////////////////////////////////////////
// CReadOnlyDlg dialog

class CReadOnlyDlg : public CDialog
{
// Construction
public:
	CReadOnlyDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CReadOnlyDlg)
	enum { IDD = IDD_READONLY_DIALOG };
	CReadOnlyEdit	m_wndReadOnly;
	CString	m_ToAdd;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReadOnlyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CReadOnlyDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnAdd();
	afx_msg void OnBack();
	afx_msg void OnText();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READONLYDLG_H__2571B070_F822_4056_BADC_9A41B036D0F9__INCLUDED_)
