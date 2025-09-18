// testhelp2.h : main header file for the testhelp2 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// Ctesthelp2App:
// See testhelp2.cpp for the implementation of this class
//

class Ctesthelp2App : public CWinApp
{
public:
	Ctesthelp2App();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ctesthelp2App theApp;