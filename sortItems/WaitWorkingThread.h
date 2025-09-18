#pragma once



// WaitWorkingThread

class WaitWorkingThread : public CWinThread
{
	DECLARE_DYNCREATE(WaitWorkingThread)

protected:
	WaitWorkingThread();           // protected constructor used by dynamic creation
	virtual ~WaitWorkingThread();

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

protected:
	DECLARE_MESSAGE_MAP()
};


