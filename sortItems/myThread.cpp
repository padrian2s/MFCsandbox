// myThread.cpp : implementation file
//

#include "stdafx.h"
#include "sortItems.h"
#include "myThread.h"

#include "myDialog.h"
// myThread

IMPLEMENT_DYNCREATE(myThread, CWinThread)

myThread::myThread()
{
	dlg = new myDialog();
	dlg->Create(IDD_DIALOG1, NULL);
	dlg->ShowWindow(SW_SHOW);
}

myThread::~myThread()
{
}

BOOL myThread::InitInstance()
{
	
	return TRUE;
}

int myThread::ExitInstance()
{
	// TODO:  perform any per-thread cleanup here
	return CWinThread::ExitInstance();
}

void myThread::quit(WPARAM w, LPARAM l)
{
	PostQuitMessage(0);
}

BEGIN_MESSAGE_MAP(myThread, CWinThread)
	ON_THREAD_MESSAGE(QUIT, quit)
END_MESSAGE_MAP()



// myThread message handlers
