// DlgProxy.cpp : implementation file
//

#include "stdafx.h"
#include "PDFCreator.h"
#include "DlgProxy.h"
#include "PDFCreatorDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPDFCreatorDlgAutoProxy

IMPLEMENT_DYNCREATE(CPDFCreatorDlgAutoProxy, CCmdTarget)

CPDFCreatorDlgAutoProxy::CPDFCreatorDlgAutoProxy()
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
		ASSERT_KINDOF(CPDFCreatorDlg, AfxGetApp()->m_pMainWnd);
		if (AfxGetApp()->m_pMainWnd->IsKindOf(RUNTIME_CLASS(CPDFCreatorDlg)))
		{
			m_pDialog = reinterpret_cast<CPDFCreatorDlg*>(AfxGetApp()->m_pMainWnd);
			m_pDialog->m_pAutoProxy = this;
		}
	}
}

CPDFCreatorDlgAutoProxy::~CPDFCreatorDlgAutoProxy()
{
	// To terminate the application when all objects created with
	// 	with automation, the destructor calls AfxOleUnlockApp.
	//  Among other things, this will destroy the main dialog
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CPDFCreatorDlgAutoProxy::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CPDFCreatorDlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CPDFCreatorDlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// Note: we add support for IID_IPDFCreator to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .IDL file.

// {4A42464A-C05A-4151-918C-87966E8AC568}
static const IID IID_IPDFCreator =
{ 0x4A42464A, 0xC05A, 0x4151, { 0x91, 0x8C, 0x87, 0x96, 0x6E, 0x8A, 0xC5, 0x68 } };

BEGIN_INTERFACE_MAP(CPDFCreatorDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CPDFCreatorDlgAutoProxy, IID_IPDFCreator, Dispatch)
END_INTERFACE_MAP()

// The IMPLEMENT_OLECREATE2 macro is defined in StdAfx.h of this project
// {D88E9723-9BA4-4B53-896A-9F50A3DF4281}
IMPLEMENT_OLECREATE2(CPDFCreatorDlgAutoProxy, "PDFCreator.Application", 0xd88e9723, 0x9ba4, 0x4b53, 0x89, 0x6a, 0x9f, 0x50, 0xa3, 0xdf, 0x42, 0x81)


// CPDFCreatorDlgAutoProxy message handlers
