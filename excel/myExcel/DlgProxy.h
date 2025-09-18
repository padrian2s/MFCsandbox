// DlgProxy.h: header file
//

#pragma once

class CmyExcelDlg;


// CmyExcelDlgAutoProxy command target

class CmyExcelDlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CmyExcelDlgAutoProxy)

	CmyExcelDlgAutoProxy();           // protected constructor used by dynamic creation

// Attributes
public:
	CmyExcelDlg* m_pDialog;

// Operations
public:

// Overrides
	public:
	virtual void OnFinalRelease();

// Implementation
protected:
	virtual ~CmyExcelDlgAutoProxy();

	// Generated message map functions

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CmyExcelDlgAutoProxy)

	// Generated OLE dispatch map functions

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

