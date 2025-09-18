// sortItemsDlg.h : header file
//

#pragma once
#include "afxcmn.h"

#include "PictureEx.h"

#include "myThread.h"

#include "ListCtrlStyled.h"
#include "advancedEdit.h"
#include "afxwin.h"
#include "p2i32ctrl1.h"

// CsortItemsDlg dialog

typedef struct sample
{
	char *f;
	char *foo;
}sample;


class CsortItemsDlg : public CDialog
{
// Construction
public:
	CsortItemsDlg(CWnd* pParent = NULL);	// standard constructor
	void insertItems();	
// Dialog Data
	enum { IDD = IDD_SORTITEMS_DIALOG };

	void makeNULL(sample *st);

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support	
	CWinThread * thread2;	
	//myThread * thread2;
// Implementation
protected:
	HICON m_hIcon;
	
	CBitmap bmp;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg LRESULT  msg(WPARAM wParam, LPARAM lParam);
	afx_msg void OnBnClickedOk();
	CListCtrlStyled m_list;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnLvnColumnclickList1(NMHDR *pNMHDR, LRESULT *pResult);
	CEdit m_express;
	afx_msg void OnBnClickedButton3();
	CEdit m_expressRet;
	CEdit m_data;
	afx_msg void OnBnClickedButton4();
	CFormattedEdit m_advEdit;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	CPictureEx m_staticPic;
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	CButton m_button;
	afx_msg void OnBnClickedButton9();
    afx_msg void OnBnClickedButton10();
    afx_msg void OnBnClickedButton11();
    afx_msg void OnBnClickedButton12();
    CEdit m_bigBoxCtrl;
    afx_msg void OnBnClickedButton13();
    afx_msg void OnBnClickedButton14();
    CP2i32ctrl1 m_p2i;
    afx_msg void OnBnClickedButton15();
    afx_msg void OnBnClickedButton16();
};
