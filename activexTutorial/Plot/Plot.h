#if !defined(AFX_PLOT_H__A74CD7E6_EA6F_11D4_ABF3_000102378429__INCLUDED_)
#define AFX_PLOT_H__A74CD7E6_EA6F_11D4_ABF3_000102378429__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// Plot.h : main header file for PLOT.DLL

#if !defined( __AFXCTL_H__ )
	#error include 'afxctl.h' before including this file
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CPlotApp : See Plot.cpp for implementation.

class CPlotApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PLOT_H__A74CD7E6_EA6F_11D4_ABF3_000102378429__INCLUDED)
