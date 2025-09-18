#if !defined(AFX_CHOSEPROGID_H__C0933BBF_8A7C_11D5_82BA_00104B3646C0__INCLUDED_)
#define AFX_CHOSEPROGID_H__C0933BBF_8A7C_11D5_82BA_00104B3646C0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ChoseProgID.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CChoseProgID dialog

class CChoseProgID : public CDialog
{
// Construction
public:
	CString Progid();
	CChoseProgID(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CChoseProgID)
	enum { IDD = IDD_SELECTPROGID };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChoseProgID)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CChoseProgID)
	virtual void OnCancel();
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
        CString m_strProgId;

public:
	afx_msg void OnBnClickedOk();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHOSEPROGID_H__C0933BBF_8A7C_11D5_82BA_00104B3646C0__INCLUDED_)
