// PDFDlg.h : header file
//

#pragma once

#import "C:\WINDOWS\system32\MSVBVM60.DLL" rename ( "EOF", "VBEOF" ), rename ( "RGB", "VBRGB" )
#import "C:\Program Files\PDFCreator\PDFCreator.exe"

#include "C_clsPDFCreator.h"
#include "PDFSink.h"

// CPDFDlg dialog
class CPDFDlg : public CDialog
{
// Construction
public:
    CComPtr<PDFCreator::_clsPDFCreator> pdfObject;
    C_clsPDFCreator pdfEvent;
	CPDFDlg(CWnd* pParent = NULL);	// standard constructor    
    PDFSink *m_pSink;
// Dialog Data
	enum { IDD = IDD_PDF_DIALOG };

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
