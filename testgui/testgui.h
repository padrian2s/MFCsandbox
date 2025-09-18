// testgui.h : main header file for the testgui application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CtestguiApp:
// See testgui.cpp for the implementation of this class
//

class CtestguiApp : public CWinApp
{
public:
	CtestguiApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CtestguiApp theApp;