// PDFCreatorDlg.h : header file
//

#pragma once

class CPDFCreatorDlgAutoProxy;


// CPDFCreatorDlg dialog
class CPDFCreatorDlg : public CDialog
{
	DECLARE_DYNAMIC(CPDFCreatorDlg);
	friend class CPDFCreatorDlgAutoProxy;

// Construction
public:

    CLSID const& GetClsid()
    {
        static CLSID const clsid
            = { 0x1CE9DC08, 0x9FBC, 0x45C6, { 0x8A, 0x7C, 0x4F, 0xE1, 0xE2, 0x8, 0xA6, 0x13 } };
        return clsid;
    };

	CPDFCreatorDlg(CWnd* pParent = NULL);	// standard constructor
	virtual ~CPDFCreatorDlg();

// Dialog Data
	enum { IDD = IDD_PDFCREATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	CPDFCreatorDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButton1();
};
