// ExpCheckTestDlg.h : header file
//

#if !defined(AFX_EXPCHECKTESTDLG_H__46A10D65_7DF2_4DAB_BA46_028035315D86__INCLUDED_)
#define AFX_EXPCHECKTESTDLG_H__46A10D65_7DF2_4DAB_BA46_028035315D86__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ExpandingCheck.h"
#include "afxwin.h"

#include "SubFormCollection.h"
#include "myDialog.h"
#include "ScrollHelper.h"
/////////////////////////////////////////////////////////////////////////////
// CExpCheckTestDlg dialog

class CExpCheckTestDlg : public CDialog
{
// Construction
public:
	CExpCheckTestDlg(CWnd* pParent = NULL);	// standard constructor
    
    CSubFormCollection  m_SubForms;
    myDialog *m_myDialog;
    CScrollHelper *m_scrollHelper;
// Dialog Data
	//{{AFX_DATA(CExpCheckTestDlg)
	enum { IDD = IDD_EXPCHECKTEST_DIALOG };
	
	CExpandingCheck	m_chType;
	CExpandingCheck	m_chName;
	CButton	m_stType;
	CButton	m_stName;
	CButton	m_chUnnamed;

	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExpCheckTestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
    
    int m_nCurHeight;
    int m_nScrollPos;
    CRect m_rect;
        
	// Generated message map functions
	//{{AFX_MSG(CExpCheckTestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChunnamed();
	afx_msg void OnChname();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
    CButton m_myCheck;
    CExpandingCheck	m_chType2;
    afx_msg void OnBnClickedButton9();
    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
    afx_msg void OnBnClickedButton11();
    afx_msg void OnBnClickedButton12();
    afx_msg void OnBnClickedButton1();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXPCHECKTESTDLG_H__46A10D65_7DF2_4DAB_BA46_028035315D86__INCLUDED_)
