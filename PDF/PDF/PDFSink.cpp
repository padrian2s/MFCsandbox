// PDFSink.cpp : implementation file
//

#include "stdafx.h"
#include "PDF.h"
#include "PDFSink.h"

#include "PDFCreator_i.c"

// PDFSink

IMPLEMENT_DYNAMIC(PDFSink, CCmdTarget)
PDFSink::PDFSink()
{
	EnableAutomation();
}

PDFSink::~PDFSink()
{
}


void PDFSink::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}


BEGIN_MESSAGE_MAP(PDFSink, CCmdTarget)
END_MESSAGE_MAP()


BEGIN_DISPATCH_MAP(PDFSink, CCmdTarget)
    DISP_FUNCTION_ID(PDFSink, "eReady",1,evtNotify, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()

void PDFSink::evtNotify()
{
    // TODO: Add your dispatch handler code here
    AfxMessageBox("Event notification handled in MFC client");
}

// Note: we add support for IID_IPDFSink to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .IDL file.

// {F2F65D76-E4BF-4D1C-B1DD-6C2738664FFA}
static const IID IID_IPDFSink =
{ 0xF2F65D76, 0xE4BF, 0x4D1C, { 0xB1, 0xDD, 0x6C, 0x27, 0x38, 0x66, 0x4F, 0xFA } };

BEGIN_INTERFACE_MAP(PDFSink, CCmdTarget)
	INTERFACE_PART(PDFSink, DIID___clsPDFCreator, Dispatch)
END_INTERFACE_MAP()


// PDFSink message handlers
