// CDMS.h : main header file for the CDMS application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CCDMSApp:
// See CDMS.cpp for the implementation of this class
//

class CCDMSApp : public CWinApp
{
public:
	CCDMSApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCDMSApp theApp;