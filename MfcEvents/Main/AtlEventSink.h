// AtlEventSink.h: interface for the CAtlEventSink class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ATLEVENTSINK_H__1B60A520_9286_4DEE_B880_3EC8A6152910__INCLUDED_)
#define AFX_ATLEVENTSINK_H__1B60A520_9286_4DEE_B880_3EC8A6152910__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include ".\Control\Control.h"  // to bring in the DIID of the event source 

#define IDC_SOURCE	99			// any arbitrary positive integer

// the function information for our event handler routine 
static _ATL_FUNC_INFO EventInfo = {CC_STDCALL, VT_EMPTY, 0 };

// the ATL event sink class
class CAtlEventSink : public IDispEventSimpleImpl<IDC_SOURCE, CAtlEventSink, &DIID__IEventControlEvents>
{

public:

	CAtlEventSink();
	virtual ~CAtlEventSink();

BEGIN_SINK_MAP(CAtlEventSink)
	SINK_ENTRY_INFO(IDC_SOURCE, DIID__IEventControlEvents, 1, OnTestEvent, &EventInfo)
END_SINK_MAP()

	// the event handler function 
	void __stdcall OnTestEvent(); 

	// our mfc app object pointer 
	CWinApp *m_pAtlEventSinkApp;			// stored for comparison purposes
};

#endif // !defined(AFX_ATLEVENTSINK_H__1B60A520_9286_4DEE_B880_3EC8A6152910__INCLUDED_)
