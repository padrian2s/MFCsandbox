// DlgProxy.cpp : implementation file
//

#include "stdafx.h"
#include "Client.h"
#include "DlgProxy.h"
#include "ClientDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClientDlgAutoProxy

IMPLEMENT_DYNCREATE(CClientDlgAutoProxy, CCmdTarget)

CClientDlgAutoProxy::CClientDlgAutoProxy()
{
	EnableAutomation();
	
	// To keep the application running as long as an automation 
	//	object is active, the constructor calls AfxOleLockApp.
	AfxOleLockApp();

	// Get access to the dialog through the application's
	//  main window pointer.  Set the proxy's internal pointer
	//  to point to the dialog, and set the dialog's back pointer to
	//  this proxy.
	ASSERT (AfxGetApp()->m_pMainWnd != NULL);
	ASSERT_VALID (AfxGetApp()->m_pMainWnd);
	ASSERT_KINDOF(CClientDlg, AfxGetApp()->m_pMainWnd);
	m_pDialog = (CClientDlg*) AfxGetApp()->m_pMainWnd;
	m_pDialog->m_pAutoProxy = this;
}

CClientDlgAutoProxy::~CClientDlgAutoProxy()
{
	// To terminate the application when all objects created with
	// 	with automation, the destructor calls AfxOleUnlockApp.
	//  Among other things, this will destroy the main dialog
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CClientDlgAutoProxy::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CClientDlgAutoProxy, CCmdTarget)
	//{{AFX_MSG_MAP(CClientDlgAutoProxy)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CClientDlgAutoProxy, CCmdTarget)
	//{{AFX_DISPATCH_MAP(CClientDlgAutoProxy)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

// Note: we add support for IID_IClient to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {97103165-58AC-479F-8579-3F59769AE25B}
static const IID IID_IClient =
{ 0x97103165, 0x58ac, 0x479f, { 0x85, 0x79, 0x3f, 0x59, 0x76, 0x9a, 0xe2, 0x5b } };

BEGIN_INTERFACE_MAP(CClientDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CClientDlgAutoProxy, IID_IClient, Dispatch)
END_INTERFACE_MAP()

// The IMPLEMENT_OLECREATE2 macro is defined in StdAfx.h of this project
// {B05F63A3-F883-4762-AE42-5DCC17626626}
IMPLEMENT_OLECREATE2(CClientDlgAutoProxy, "Client.Application", 0xb05f63a3, 0xf883, 0x4762, 0xae, 0x42, 0x5d, 0xcc, 0x17, 0x62, 0x66, 0x26)

/////////////////////////////////////////////////////////////////////////////
// CClientDlgAutoProxy message handlers
