// DlgProxy.cpp : implementation file
//

#include "stdafx.h"
#include "myExcel.h"
#include "DlgProxy.h"
#include "myExcelDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmyExcelDlgAutoProxy

IMPLEMENT_DYNCREATE(CmyExcelDlgAutoProxy, CCmdTarget)

CmyExcelDlgAutoProxy::CmyExcelDlgAutoProxy()
{
	EnableAutomation();
	
	// To keep the application running as long as an automation 
	//	object is active, the constructor calls AfxOleLockApp.
	AfxOleLockApp();

	// Get access to the dialog through the application's
	//  main window pointer.  Set the proxy's internal pointer
	//  to point to the dialog, and set the dialog's back pointer to
	//  this proxy.
	ASSERT_VALID(AfxGetApp()->m_pMainWnd);
	if (AfxGetApp()->m_pMainWnd)
	{
		ASSERT_KINDOF(CmyExcelDlg, AfxGetApp()->m_pMainWnd);
		if (AfxGetApp()->m_pMainWnd->IsKindOf(RUNTIME_CLASS(CmyExcelDlg)))
		{
			m_pDialog = reinterpret_cast<CmyExcelDlg*>(AfxGetApp()->m_pMainWnd);
			m_pDialog->m_pAutoProxy = this;
		}
	}
}

CmyExcelDlgAutoProxy::~CmyExcelDlgAutoProxy()
{
	// To terminate the application when all objects created with
	// 	with automation, the destructor calls AfxOleUnlockApp.
	//  Among other things, this will destroy the main dialog
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CmyExcelDlgAutoProxy::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CmyExcelDlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CmyExcelDlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// Note: we add support for IID_ImyExcel to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .IDL file.

// {093C96E3-0563-4717-AA0E-ABE05A3D2A51}
static const IID IID_ImyExcel =
{ 0x93C96E3, 0x563, 0x4717, { 0xAA, 0xE, 0xAB, 0xE0, 0x5A, 0x3D, 0x2A, 0x51 } };

BEGIN_INTERFACE_MAP(CmyExcelDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CmyExcelDlgAutoProxy, IID_ImyExcel, Dispatch)
END_INTERFACE_MAP()

// The IMPLEMENT_OLECREATE2 macro is defined in StdAfx.h of this project
// {DA29EBF7-D010-4DFD-A113-F33D5D6B2D93}
IMPLEMENT_OLECREATE2(CmyExcelDlgAutoProxy, "myExcel.Application", 0xda29ebf7, 0xd010, 0x4dfd, 0xa1, 0x13, 0xf3, 0x3d, 0x5d, 0x6b, 0x2d, 0x93)


// CmyExcelDlgAutoProxy message handlers
