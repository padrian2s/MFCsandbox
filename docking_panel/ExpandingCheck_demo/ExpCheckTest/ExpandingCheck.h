/////////////////////////////////////////////////////////////////////////////////////
// CExpandingCheck class written by MAV, 9 October 2002                            //
// Feel free to use this code in your applications or distribute it.               //
// If you have found a bug or improved the code, drop me e-mail to mav_stuff@bk.ru //
/////////////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EXPANDINGCHECK_H__D52CACDF_E803_4410_8E69_96902E57B045__INCLUDED_)
#define AFX_EXPANDINGCHECK_H__D52CACDF_E803_4410_8E69_96902E57B045__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ExpandingCheck.h : header file
//
#include <afxtempl.h>

/////////////////////////////////////////////////////////////////////////////
// CExpandingCheck window

class CExpandingCheck : public CButton
{
// Construction
public:
	CExpandingCheck();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExpandingCheck)
	protected:
	virtual void PreSubclassWindow();
	//}}AFX_VIRTUAL

// Implementation
public:
	void SetCheck( int nCheck );
	void SetFrame(CWnd* pFrame);
	virtual ~CExpandingCheck();

	// Generated message map functions
protected:
	BOOL m_bPrevState;
	static BOOL CALLBACK WndEnumProc(HWND hWnd,LPARAM lParam);
	void Collapse();
	void Expand();
	CWnd* m_pFrame;
	CUIntArray m_uaIDs;
	CRect m_rcMaxSize;
	CRect m_rcMinSize;
	CArray<HWND,HWND> m_haInsideWindows;
	CArray<HWND,HWND> m_haOutsideWindows;
	//{{AFX_MSG(CExpandingCheck)
	afx_msg BOOL OnClicked();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
private:
	void RecalcLayout();
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXPANDINGCHECK_H__D52CACDF_E803_4410_8E69_96902E57B045__INCLUDED_)
