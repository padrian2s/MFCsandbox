// DlgProxy.h: header file
//

#pragma once

class CPDFCreatorDlg;


// CPDFCreatorDlgAutoProxy command target

class CPDFCreatorDlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CPDFCreatorDlgAutoProxy)

	CPDFCreatorDlgAutoProxy();           // protected constructor used by dynamic creation

// Attributes
public:
	CPDFCreatorDlg* m_pDialog;

// Operations
public:

// Overrides
	public:
	virtual void OnFinalRelease();

// Implementation
protected:
	virtual ~CPDFCreatorDlgAutoProxy();

	// Generated message map functions

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CPDFCreatorDlgAutoProxy)

	// Generated OLE dispatch map functions

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

