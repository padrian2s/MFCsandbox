#if !defined(__MYBAR_H__)
#define __MYBAR_H__

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// mybar.h : header file
//

//#include "sizecbar.h"
#include "scbarcf.h"
/////////////////////////////////////////////////////////////////////////////
// CMyBar window

#ifndef baseCMyBar
#define baseCMyBar CSizingControlBarCF
#endif

class CMyBar : public baseCMyBar
{
// Construction
public:
	CMyBar();

// Attributes
public:

// Overridables
	virtual void OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHndler);

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyBar)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyBar();

protected:
	CEdit	m_wndChild;
	CFont	m_font;

	// Generated message map functions
protected:
	//{{AFX_MSG(CMyBar)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(__MYBAR_H__)
