// exe_clientDlg.h : header file
//

#if !defined(AFX_EXE_CLIENTDLG_H__C0933BB6_8A7C_11D5_82BA_00104B3646C0__INCLUDED_)
#define AFX_EXE_CLIENTDLG_H__C0933BB6_8A7C_11D5_82BA_00104B3646C0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CExe_clientDlg dialog

class CExe_clientDlg : public CDialog
{
// Construction
public:
	CExe_clientDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CExe_clientDlg)
	enum { IDD = IDD_EXE_CLIENT_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExe_clientDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CExe_clientDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnFileInsertcontrol();
	afx_msg void OnExit();
	afx_msg void OnHelpAbout();
	afx_msg void OnDestroycontrol();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

    private:
    //IUnknownPtr m_pControl;
    //
    //this member will hold the IUnknown of the control instantiated
    //at run time
    //

    CWnd m_ControlWrapper;//MFC provided wrapper for Activex Controls

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXE_CLIENTDLG_H__C0933BB6_8A7C_11D5_82BA_00104B3646C0__INCLUDED_)
