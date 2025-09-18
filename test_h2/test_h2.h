// test_h2.h : main header file for the test_h2 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// Ctest_h2App:
// See test_h2.cpp for the implementation of this class
//

class Ctest_h2App : public CWinApp
{
public:
	Ctest_h2App();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctest_h2App theApp;