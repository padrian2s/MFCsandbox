#if !defined(AFX_MESSAGE_DIALOG_H__DF6D8D3E_419D_4C09_B391_ED9D81296A18__INCLUDED_)
#define AFX_MESSAGE_DIALOG_H__DF6D8D3E_419D_4C09_B391_ED9D81296A18__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MessageDialog.h : header file
//

#include "resource.h"

/////////////////////////////////////////////////////////////////////////////
// CMessageDialog dialog

class CMessageDialog : public CDialog
{
// Construction
public:
	CMessageDialog(CWnd* pParent = NULL);   // standard constructor
	virtual void OnOK();	
// Dialog Data
	//{{AFX_DATA(CMessageDialog)
	enum { IDD = IDD_MESSAGE_DIALOG };
	// For displaying the any message
	CString	m_szMessage;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMessageDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

	
// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CMessageDialog)
	virtual void OnUpdateString();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MESSAGE_DIALOG_H__DF6D8D3E_419D_4C09_B391_ED9D81296A18__INCLUDED_)
