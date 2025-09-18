
////////////////////////////////////////////////////////////////////////////
//	Copyright : Amit Dey 2001
//
//	Email :amitdey@crosswinds.net
//
//	This code may be used in compiled form in any way you desire. This
//	file may be redistributed unmodified by any means PROVIDING it is 
//	not sold for profit without the authors written consent, and 
//	providing that this notice and the authors name is included.
//
//	This file is provided 'as is' with no expressed or implied warranty.
//	The author accepts no liability if it causes any damage to your computer.
//
//	Do expect bugs.
//	Please let me know of any bugs/mods/improvements.
//	and I will try to fix/incorporate them into this file.
//	Enjoy!
//
//	Description : VB ActiveX events in VC
////////////////////////////////////////////////////////////////////////////
// ATLSink.cpp : 

// Note: Proxy/Stub Information
//      To build a separate proxy/stub DLL, 
//      run nmake -f ATLSinkps.mk in the project directory.

#include "stdafx.h"
#include "resource.h"
#include <initguid.h>
#include "ATLSink.h"
#define IDC_SRCOBJ 1
#include "ATLSink_i.c"
#include "VBEvents_i.c"

static _ATL_FUNC_INFO OnEventInfo = {CC_STDCALL, VT_EMPTY, VT_NULL};

class CSinkObj : public IDispEventSimpleImpl<IDC_SRCOBJ, CSinkObj, &__uuidof(__clsEventSrc)>
{
public:
	HWND m_hWndList;
	CSinkObj(HWND hWnd = NULL) : m_hWndList(hWnd)
	{
	}

BEGIN_SINK_MAP(CSinkObj)
	//Make sure the Event Handlers have __stdcall calling convention
	SINK_ENTRY_INFO(IDC_SRCOBJ, __uuidof(__clsEventSrc), 1, evtNotify, &OnEventInfo)
END_SINK_MAP()

	// Event handler 
	HRESULT __stdcall evtNotify()
	{
		// output string to list box
		TCHAR buf[1024];
		wsprintf(buf, "Sink : Notification Event Received");
		AtlTrace("\n%s",buf);


		return S_OK;
	}
};



class CMyDialog :public CDialogImpl<CMyDialog>
{
public:
enum {IDD=IDD_DIALOG1};
CMyDialog()
{
	m_pSink=NULL;
	pEvent=NULL;
}
~CMyDialog()
{


}
LRESULT OnInitDialog(UINT uMsg,WPARAM wParam,LPARAM lParam,BOOL& bHandled)
{
CenterWindow();
return 0;
}

LRESULT OnOK(UINT,WORD,HWND,BOOL&)
{
	EndDialog(IDOK);
	return 0;
}

LRESULT OnConnect(UINT,WORD,HWND hWndCtrl,BOOL& bHandled)
{
m_pSink=new CSinkObj(hWndCtrl);

HRESULT hr=CoCreateInstance(CLSID_clsEventSrc,NULL,CLSCTX_INPROC_SERVER,__uuidof(_clsEventSrc),(void**)&pEvent);

if(SUCCEEDED(hr))
{
m_pSink->DispEventAdvise(pEvent);
//firing event here
pEvent->prcFireEvent ();
}

return hr;
}

LRESULT OnDestroy(UINT nMsg,WPARAM wParam,LPARAM lParam,BOOL& bHandled)
{
	if(m_pSink)
{
	if (m_pSink->m_dwEventCookie != 0xFEFEFEFE)
		m_pSink->DispEventUnadvise(pEvent);
			delete m_pSink;
}	
	return 0;
}

BEGIN_MSG_MAP(MyDialog)
MESSAGE_HANDLER(WM_INITDIALOG,OnInitDialog)
MESSAGE_HANDLER(WM_DESTROY,OnDestroy)
COMMAND_ID_HANDLER(IDOK,OnOK)
COMMAND_ID_HANDLER(IDC_CONNECT,OnConnect)
END_MSG_MAP()

private:
	CSinkObj* m_pSink;
	_clsEventSrc *pEvent;
};

/////////////////////////////////////////////////////////////////////////////
//
extern "C" int WINAPI _tWinMain(HINSTANCE hInstance, 
    HINSTANCE /*hPrevInstance*/, LPTSTR lpCmdLine, int /*nShowCmd*/)
{
    lpCmdLine = GetCommandLine(); //this line necessary for _ATL_MIN_CRT

#if _WIN32_WINNT >= 0x0400 & defined(_ATL_FREE_THREADED)
    HRESULT hRes = CoInitializeEx(NULL, COINIT_MULTITHREADED);
#else
    HRESULT hRes = CoInitialize(NULL);
#endif
    _ASSERTE(SUCCEEDED(hRes));
    _Module.Init(ObjectMap, hInstance, &LIBID_ATLSINKLib);
    _Module.dwThreadID = GetCurrentThreadId();
  
    int nRet = 0;

	CMyDialog dlg;
	dlg.DoModal();

    _Module.Term();
    CoUninitialize();
    return nRet;
}
