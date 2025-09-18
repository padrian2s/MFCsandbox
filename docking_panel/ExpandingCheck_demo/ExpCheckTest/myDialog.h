#pragma once

#include "resource.h"
// myDialog dialog

class myDialog : public CDialog
{
	DECLARE_DYNAMIC(myDialog)

public:
	myDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~myDialog();

    int m_nCurHeight;
    int m_nScrollPos;
    CRect m_rect;

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButton1();
    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);    
    virtual BOOL CreateEx(DWORD dwExStyle, LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, LPVOID lpParam = NULL);
    afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
    afx_msg void OnBnClickedOk();    
    virtual BOOL OnInitDialog();
};
