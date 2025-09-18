#include "stdafx.h"
#include "SimpleSink.h"

// This is a standard way of including COM objects
// into your project:
#import "..\\server\\server.tlb" no_namespace named_guids

class CMySink:public CSimpleDispSink<&LIBID_SERVERLib, &IID_ISimpleServer, _ISimpleServerEvents>
{
public:
	CMySink()
	{
		// Initializing this sink to work with the library version 1.0
		InitDispSink(1,0);
	}
	virtual void __stdcall NeededEvent()
	{
		MessageBox(NULL, "The Event from ISimpleServer has been handled!","Msg",MB_OK|MB_ICONINFORMATION);
	}

};

void main()
{
	// Entering primary STA
	CoInitialize(NULL);
	
	// Creating an instance of the server
	ISimpleServerPtr server;
	server.CreateInstance(CLSID_SimpleServer);
	
	CMySink sink;
	sink.Connect(server);	// Connecting to the server's event interface

	server->NeedEvent();	// Making the server fire the only event it has
							// called NeededEvent()

	sink.Disconnect();		// Disconnecting from the event interface
	server.Release();		// Releasing the server instance

	CoUninitialize();		// Quitting primary STA
}
