// ClientDlg.h : header file
//

#if !defined(AFX_CLIENTDLG_H__7251FD6E_D8A1_45E1_97DC_7D5229C78EE9__INCLUDED_)
#define AFX_CLIENTDLG_H__7251FD6E_D8A1_45E1_97DC_7D5229C78EE9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CClientDlgAutoProxy;
#include "MFCSink.h"
/////////////////////////////////////////////////////////////////////////////
// CClientDlg dialog

class CClientDlg : public CDialog
{
	DECLARE_DYNAMIC(CClientDlg);
	friend class CClientDlgAutoProxy;

// Construction
public:
	CClientDlg(CWnd* pParent = NULL);	// standard constructor
	virtual ~CClientDlg();

// Dialog Data
	//{{AFX_DATA(CClientDlg)
	enum { IDD = IDD_CLIENT_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClientDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CClientDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// Generated message map functions
	//{{AFX_MSG(CClientDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnFireEvent();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	_clsEventSrc* m_pSrc;
	MFCSink *m_pSink;
	DWORD m_dwCookie;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLIENTDLG_H__7251FD6E_D8A1_45E1_97DC_7D5229C78EE9__INCLUDED_)
