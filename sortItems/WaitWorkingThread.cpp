// WaitWorkingThread.cpp : implementation file
//

#include "stdafx.h"
#include "sortItems.h"
#include "WaitWorkingThread.h"


// WaitWorkingThread

IMPLEMENT_DYNCREATE(WaitWorkingThread, CWinThread)

WaitWorkingThread::WaitWorkingThread()
{
}

WaitWorkingThread::~WaitWorkingThread()
{
}

BOOL WaitWorkingThread::InitInstance()
{
	// TODO:  perform and per-thread initialization here
	return TRUE;
}

int WaitWorkingThread::ExitInstance()
{
	// TODO:  perform any per-thread cleanup here
	return CWinThread::ExitInstance();
}

BEGIN_MESSAGE_MAP(WaitWorkingThread, CWinThread)
END_MESSAGE_MAP()


// WaitWorkingThread message handlers
