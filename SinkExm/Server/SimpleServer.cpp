// SimpleServer.cpp : Implementation of CSimpleServer
#include "stdafx.h"
#include "Server.h"
#include "SimpleServer.h"

/////////////////////////////////////////////////////////////////////////////
// CSimpleServer


STDMETHODIMP CSimpleServer::NeedEvent()
{
	// TODO: Add your implementation code here
	Fire_NeededEvent();
	return S_OK;
}
