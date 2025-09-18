// MultiThread2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MultiThread2.h"


#include<afxmt.h>

#include<iostream>

using namespace std;

#include <conio.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// The one and only application object



// Global Critical section
CCriticalSection c_s;
static int g_C;

//////////////////Thread One ///////////////////////

UINT ThreadFunction1(LPVOID lParam)
{

	// Create object for Single Lock
	CSingleLock lock(&c_s);
	
	// Lock
	lock.Lock();

	for(int i=0;i<10;i++)
	{
		g_C++;
		cout << "Thread 1 : " << g_C << endl;
	}

    Sleep(50000);
	// Unlock
	lock.Unlock();

	// return 
	return 0;
}


////////////Thraed 2////////////////////
UINT ThreadFunction2(LPVOID lParam)
{

	// Single Lock Constract Critical Section
	CSingleLock lock(&c_s);

	// Lock
	lock.Lock();

	for(int i=0;i<10;i++)
	{
		g_C++;
		cout << "Thread 2 : " << g_C << endl;
	}    
	// Unlock
	lock.Unlock();

	//return
	return 0;
}




CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	// initialize MFC and print and error on failure
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		// TODO: change error code to suit your needs
		cerr << _T("Fatal Error: MFC initialization failed") << endl;
		nRetCode = 1;
	}
	else
	{
		// TODO: code your application's behavior here.
		//CString strHello;
		//strHello.LoadString(IDS_HELLO);
		//cout << (LPCTSTR)strHello << endl;

		// Craete object for Two threads
		CWinThread *Thread[2];


		Thread[0] = AfxBeginThread(ThreadFunction1,LPVOID(NULL));
		Thread[1] = AfxBeginThread(ThreadFunction2,LPVOID(NULL));

		// Copy to Thread Handle
		 HANDLE hand[2];
		 for(int i=0;i<2;i++)
			 hand[i] = Thread[i]->m_hThread;

		// Wait for complete the child thread , otherwise main thread quit
		 //WaitForMultipleObjects(2,hand,TRUE,INFINITE);
         MsgWaitForMultipleObjects(2, hand, TRUE, INFINITE, QS_MOUSEBUTTON);
        cout << "hmmm";
        getch();

	}

	return nRetCode;
}


