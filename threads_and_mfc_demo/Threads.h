// Threads.h : main header file for the THREADS application
//

#if !defined(AFX_THREADS_H__FD617454_1520_401D_9D9A_8F021E336709__INCLUDED_)
#define AFX_THREADS_H__FD617454_1520_401D_9D9A_8F021E336709__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif
#define RUNNING true
#define END false
#include "resource.h"		// main symbols
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/////////////////////////////////////////////////////////////////////////////
// CThreadsApp:
// See Threads.cpp for the implementation of this class
//

class CThreadsApp : public CWinApp
{
public:
	
	void PaintEndLine(COLORREF winersColor);
	//COLORREF m_winersColor;
	bool m_winner;
	void CreateFilesForSlidersPosition();
	bool m_SpeakerEnable;
	void Initialize();
	bool m_Thread5_LoopType;
	bool m_Thread4_LoopType;
	bool m_Thread3_LoopType;
	bool m_Thread2_LoopType;
	bool m_Thread1_LoopType;
	time_t m_ThreadsActivationTime;
	time_t m_ThreadsCreationTime;
	bool m_ThreadsState;
	int m_shift5;
	int m_shift4;
	int m_shift3;
	int m_shift2;
	int m_shift1;
	CThreadsApp();
//Setting an array of Thraeds pointers
	CWinThread* m_pThreads[5];
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CThreadsApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CThreadsApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

extern CThreadsApp theApp;
/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_THREADS_H__FD617454_1520_401D_9D9A_8F021E336709__INCLUDED_)
