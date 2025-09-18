// ThreadedDialog.h : main header file for the THREADEDDIALOG application
//

#if !defined(AFX_THREADEDDIALOG_H__A471F805_F43A_11D4_816A_C06849C10000__INCLUDED_)
#define AFX_THREADEDDIALOG_H__A471F805_F43A_11D4_816A_C06849C10000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CThreadedDialogApp:
// See ThreadedDialog.cpp for the implementation of this class
//

class CThreadedDialogApp : public CWinApp
{
public:
	CThreadedDialogApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CThreadedDialogApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CThreadedDialogApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_THREADEDDIALOG_H__A471F805_F43A_11D4_816A_C06849C10000__INCLUDED_)
