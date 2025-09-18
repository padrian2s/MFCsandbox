// ExpCheckTest.h : main header file for the EXPCHECKTEST application
//

#if !defined(AFX_EXPCHECKTEST_H__BF0021A5_2711_4718_97D6_846A2195FAB6__INCLUDED_)
#define AFX_EXPCHECKTEST_H__BF0021A5_2711_4718_97D6_846A2195FAB6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CExpCheckTestApp:
// See ExpCheckTest.cpp for the implementation of this class
//

class CExpCheckTestApp : public CWinApp
{
public:
	CExpCheckTestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExpCheckTestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CExpCheckTestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXPCHECKTEST_H__BF0021A5_2711_4718_97D6_846A2195FAB6__INCLUDED_)
