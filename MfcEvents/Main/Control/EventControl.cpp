// EventControl.cpp : Implementation of CEventControl

#include "stdafx.h"
#include "Control.h"
#include "EventControl.h"

/////////////////////////////////////////////////////////////////////////////
// CEventControl

// *********************************************************
//	TestMethod
//
//	A simple method for the ActiveX control.  This routine 
//	simply turns around and fires off an event for any client
//	to receive. 
//
//	Arguments:
//
//		None
//
//	Returns:
//
//		Nothing
//

STDMETHODIMP CEventControl::TestMethod()
{
	// this makes sure our MFC state is correct
	AFX_MANAGE_STATE(AfxGetStaticModuleState())
	
	// get our app pointer (it is correct here, CControlApp *)
	CWinApp *pApp = AfxGetApp(); 

	// make sure the MFC state is correct
	if (pApp == m_pControlApp)
		AfxMessageBox(_T("In the control's ActiveX method before the event is fired, the MFC state is correct.")); 
	else
		AfxMessageBox(_T("In the control's ActiveX method before the event is fired, the MFC state is NOT correct.")); 

	// fire an event off to any event clients
	// (event clients must make sure the MFC state is managed properly)
	Fire_TestEvent(); 

	// get our app pointer and verify it is still correct
	pApp = AfxGetApp(); 

	// make sure the MFC state is correct
	if (pApp == m_pControlApp)
		AfxMessageBox(_T("In the control's ActiveX method after the event is fired, the MFC state is correct.")); 
	else
		AfxMessageBox(_T("In the control's ActiveX method after the event is fired, the MFC state is NOT correct.")); 

	// success
	return S_OK;
}
