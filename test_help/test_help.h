// test_help.h : main header file for the test_help application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// Ctest_helpApp:
// See test_help.cpp for the implementation of this class
//

class Ctest_helpApp : public CWinApp
{
public:
	Ctest_helpApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest_helpApp theApp;