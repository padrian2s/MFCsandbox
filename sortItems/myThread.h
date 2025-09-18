#pragma once

#include "myDialog.h"

// myThread

class myThread : public CWinThread
{
	DECLARE_DYNCREATE(myThread)
	myThread();
protected:
	
	virtual ~myThread();

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	afx_msg void quit(WPARAM w, LPARAM l);
	myDialog *dlg;
protected:
	DECLARE_MESSAGE_MAP()
};


