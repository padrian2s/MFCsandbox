// MainDlg.h : header file
//
//{{AFX_INCLUDES()
#include "eventcontrol.h"
//}}AFX_INCLUDES

#if !defined(AFX_MAINDLG_H__820A33CB_0B76_47D1_9814_471A7E62C72C__INCLUDED_)
#define AFX_MAINDLG_H__820A33CB_0B76_47D1_9814_471A7E62C72C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include ".\Control\Control.h"		// to bring in the IID of the event source 
#include "MfcEventSink.h"			// the event sink implemented using MFC classes
#include "AtlEventSink.h"			// the event sink implemented using ATL classes

/////////////////////////////////////////////////////////////////////////////
// CMainDlg dialog

class CMainDlg : public CDialog
{
// Construction
public:
	CMainDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMainDlg)
	enum { IDD = IDD_MAIN_DIALOG };
	CEventControl	m_ctlEventControl;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMainDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnControlButton();
	afx_msg void OnTestEvent();
	afx_msg void OnDestroy();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

public:

	// the app pointer for comparison purposes
	CWinApp *m_pApp;

	// the event sink using MFC 
	CMfcEventSink m_MfcSink;
	DWORD m_dwMfcCookie;
	BOOL m_bMfcConnected; 

	// the event sink using ATL
	CAtlEventSink m_AtlSink; 
	BOOL m_bAtlConnected; 


};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINDLG_H__820A33CB_0B76_47D1_9814_471A7E62C72C__INCLUDED_)
