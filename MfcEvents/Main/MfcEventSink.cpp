// MfcEventSink.cpp : implementation file
//

#include "stdafx.h"
#include "Main.h"
#include "MfcEventSink.h"
#include ".\Control\Control.h"			// to bring in the IID of the event source 

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMfcEventSink

IMPLEMENT_DYNCREATE(CMfcEventSink, CCmdTarget)

CMfcEventSink::CMfcEventSink()
{
	EnableAutomation();
	m_pMfcEventSinkApp = AfxGetApp(); 
}

CMfcEventSink::~CMfcEventSink()
{
}

void CMfcEventSink::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CMfcEventSink, CCmdTarget)
	//{{AFX_MSG_MAP(CMfcEventSink)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CMfcEventSink, CCmdTarget)
	//{{AFX_DISPATCH_MAP(CMfcEventSink)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_DISPATCH_MAP
	DISP_FUNCTION_ID(CMfcEventSink, "TestEvent", 1, OnTestEvent, VT_EMPTY, VTS_NONE)			/* for our TestEvent event, id 1 */
END_DISPATCH_MAP()

// Note: we add support for IID_IMfcEventSink to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {908EBFE8-1BDB-41E4-B06B-FF2EF4AA64FD}
static const IID IID_IMfcEventSink =
{ 0x908ebfe8, 0x1bdb, 0x41e4, { 0xb0, 0x6b, 0xff, 0x2e, 0xf4, 0xaa, 0x64, 0xfd } };

BEGIN_INTERFACE_MAP(CMfcEventSink, CCmdTarget)
	INTERFACE_PART(CMfcEventSink, DIID__IEventControlEvents, Dispatch)
END_INTERFACE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Demonstration code

// *********************************************************
//	OnTestEvent
//
//	ActiveX event handler for the TestEvent fired from 
//	the control. 
//
//	This one is wired in by our parent when it calls AfxConnectionAdvise, 
//	but our derived method of Invoke (in COleDispatchImpl::Invoke) takes 
//	care of setting up the MFC state before this event handler routine
//	is called. 
//
//	Arguments:
//
//		None
//
//	Returns:
//
//		Nothing
//

void CMfcEventSink::OnTestEvent()
{
	// get our app pointer (it is correct here, CMainApp *)
	CWinApp *pApp = AfxGetApp(); 

	// make sure the MFC state is correct 
	if (m_pMfcEventSinkApp == pApp)
		AfxMessageBox(_T("In the App's MFC event sink object, the MFC state is correct.")); 
	else
		AfxMessageBox(_T("In the App's MFC event sink object, the MFC state is NOT correct.")); 
}


