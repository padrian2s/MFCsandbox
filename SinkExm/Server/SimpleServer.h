// SimpleServer.h : Declaration of the CSimpleServer

#ifndef __SIMPLESERVER_H_
#define __SIMPLESERVER_H_

#include "resource.h"       // main symbols
#include "ServerCP.h"

/////////////////////////////////////////////////////////////////////////////
// CSimpleServer
class ATL_NO_VTABLE CSimpleServer : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSimpleServer, &CLSID_SimpleServer>,
	public IConnectionPointContainerImpl<CSimpleServer>,
	public IDispatchImpl<ISimpleServer, &IID_ISimpleServer, &LIBID_SERVERLib>,
	public CProxy_ISimpleServerEvents< CSimpleServer >
{
public:
	CSimpleServer()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SIMPLESERVER)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CSimpleServer)
	COM_INTERFACE_ENTRY(ISimpleServer)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)
END_COM_MAP()
BEGIN_CONNECTION_POINT_MAP(CSimpleServer)
CONNECTION_POINT_ENTRY(DIID__ISimpleServerEvents)
END_CONNECTION_POINT_MAP()


// ISimpleServer
public:
	STDMETHOD(NeedEvent)();
};

#endif //__SIMPLESERVER_H_
