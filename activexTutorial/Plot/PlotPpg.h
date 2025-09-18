#if !defined(AFX_PLOTPPG_H__A74CD7F0_EA6F_11D4_ABF3_000102378429__INCLUDED_)
#define AFX_PLOTPPG_H__A74CD7F0_EA6F_11D4_ABF3_000102378429__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// PlotPpg.h : Declaration of the CPlotPropPage property page class.

////////////////////////////////////////////////////////////////////////////
// CPlotPropPage : See PlotPpg.cpp.cpp for implementation.

class CPlotPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CPlotPropPage)
	DECLARE_OLECREATE_EX(CPlotPropPage)

// Constructor
public:
	CPlotPropPage();

// Dialog Data
	//{{AFX_DATA(CPlotPropPage)
	enum { IDD = IDD_PROPPAGE_PLOT };
	BOOL	m_bShowGrid;
	BOOL	m_xLog;
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	//{{AFX_MSG(CPlotPropPage)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PLOTPPG_H__A74CD7F0_EA6F_11D4_ABF3_000102378429__INCLUDED)
