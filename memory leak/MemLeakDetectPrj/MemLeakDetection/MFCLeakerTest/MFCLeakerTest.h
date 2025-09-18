// MFCLeakerTest.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols


// CMFCLeakerTestApp:
// See MFCLeakerTest.cpp for the implementation of this class
//

class CMFCLeakerTestApp : public CWinApp
{
public:
	CMFCLeakerTestApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCLeakerTestApp theApp;

class CLeakMemory
{
	public:
		inline CLeakMemory() { leakString = "Memory Leak Data"; };
		inline ~CLeakMemory() {};

		CString leakString;
};