// MDIRes.h : main header file for the MDIRes application
//
#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols


// CMDIResApp:
// See MDIRes.cpp for the implementation of this class
//

class CMDIResApp : public CWinApp
{
public:

    HMODULE hCurrentModule;
    CMultiDocTemplate* pDocTemplate;
    CMultiDocTemplate* pDocTemplate2;
	CMDIResApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMDIResApp theApp;