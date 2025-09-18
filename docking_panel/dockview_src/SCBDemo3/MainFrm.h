// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__276CC0E9_9251_11D1_88BD_AE3AF0BB8026__INCLUDED_)
#define AFX_MAINFRM_H__276CC0E9_9251_11D1_88BD_AE3AF0BB8026__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "ViewBar.h"

class CMainFrame : public CMDIFrameWnd
{
    DECLARE_DYNAMIC(CMainFrame)
public:
    CMainFrame();
	HWND m_hWndBeforeMenu;

// Attributes
public:

// Operations
public:

// Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CMainFrame)
	public:
    virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL DestroyWindow();
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
    virtual ~CMainFrame();
#ifdef _DEBUG
    virtual void AssertValid() const;
    virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
    CStatusBar  m_wndStatusBar;
    CToolBar    m_wndToolBar;
    CToolBar    m_wndToolBar2;
	UINT		m_LastKey;

#define NUMBARS 5
    CViewBar      m_wndMyBars[NUMBARS];

// Generated message map functions
protected:
    //{{AFX_MSG(CMainFrame)
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnExitMenuLoop( BOOL bIsTrackPopupMenu );
	//}}AFX_MSG
	afx_msg void OnViewMy(UINT nID);
	afx_msg void OnUpdateViewMy(CCmdUI* pCmdUI);
    DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__276CC0E9_9251_11D1_88BD_AE3AF0BB8026__INCLUDED_)
