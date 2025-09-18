// AtlEventSink.cpp: implementation of the CAtlEventSink class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Main.h"
#include "AtlEventSink.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CAtlEventSink::CAtlEventSink()
{
	m_pAtlEventSinkApp = AfxGetApp(); 
}

CAtlEventSink::~CAtlEventSink()
{

}

/////////////////////////////////////////////////////////////////////////////
// Demonstration code

// *********************************************************
//	OnTestEvent
//
//	ActiveX event handler for the TestEvent fired from 
//	the control. 
//
//	This one is wired in by our parent when it calls DispEventAdvise. 
//	Note that the MFC state is not setup for us by ATL, we have to 
//	add our own call to manage the MFC state.   
//
//	Arguments:
//
//		None
//
//	Returns:
//
//		Nothing
//

void __stdcall CAtlEventSink::OnTestEvent()
{
	// *********************************************************************
	// We need to add this ourselves to make sure the MFC state is correct 
	// after calling back in from an MFC dll
	//
//	AFX_MANAGE_STATE(AfxGetAppModuleState())	
	//
	//
	// *********************************************************************

	// get our app pointer 
	CWinApp *pApp = AfxGetApp(); 

	// make sure the MFC state is correct 
	if (m_pAtlEventSinkApp == pApp)
		AfxMessageBox(_T("In the App's ATL event sink object, the MFC state is correct.")); 
	else
		AfxMessageBox(_T("In the App's ATL event sink object, the MFC state is NOT correct.")); 
}
