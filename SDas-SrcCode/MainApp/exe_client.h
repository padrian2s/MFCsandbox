// exe_client.h : main header file for the EXE_CLIENT application
//

#if !defined(AFX_EXE_CLIENT_H__C0933BB4_8A7C_11D5_82BA_00104B3646C0__INCLUDED_)
#define AFX_EXE_CLIENT_H__C0933BB4_8A7C_11D5_82BA_00104B3646C0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CExe_clientApp:
// See exe_client.cpp for the implementation of this class
//

class CExe_clientApp : public CWinApp
{
public:
	CExe_clientApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExe_clientApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CExe_clientApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXE_CLIENT_H__C0933BB4_8A7C_11D5_82BA_00104B3646C0__INCLUDED_)
