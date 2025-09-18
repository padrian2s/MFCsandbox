// pdf2Dlg.h : header file
//

#pragma once

#import "msvbvm60.dll" no_namespace rename("EOF", "adoEOF") rename("RGB", "adoRGB")

#import "C:\Program Files\PDFCreator\PDFCreator.exe" //rename_namespace("MyNamespace2")


// Cpdf2Dlg dialog
class Cpdf2Dlg : public CDialog
{
// Construction
public:

    CComPtr<PDFCreator::_clsPDFCreator> pdfObject;

    CLSID const& GetClsid()
    {
        static CLSID const clsid
            = { 0x1CE9DC08, 0x9FBC, 0x45C6, { 0x8A, 0x7C, 0x4F, 0xE1, 0xE2, 0x8, 0xA6, 0x13 } };
        return clsid;
    };

	Cpdf2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_PDF2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButton1();
};
