// ReadOnly.h : main header file for the READONLY application
//

#if !defined(AFX_READONLY_H__4F0892C5_0714_44CB_81E4_DB16B42096D8__INCLUDED_)
#define AFX_READONLY_H__4F0892C5_0714_44CB_81E4_DB16B42096D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CReadOnlyApp:
// See ReadOnly.cpp for the implementation of this class
//

class CReadOnlyApp : public CWinApp
{
public:
	CReadOnlyApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReadOnlyApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CReadOnlyApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READONLY_H__4F0892C5_0714_44CB_81E4_DB16B42096D8__INCLUDED_)
