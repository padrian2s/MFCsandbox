#if !defined(AFX_PLOTCTL_H__A74CD7EE_EA6F_11D4_ABF3_000102378429__INCLUDED_)
#define AFX_PLOTCTL_H__A74CD7EE_EA6F_11D4_ABF3_000102378429__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// PlotCtl.h : Declaration of the CPlotCtrl ActiveX Control class.

/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl : See PlotCtl.cpp for implementation.

class CPlotCtrl : public COleControl
{
	DECLARE_DYNCREATE(CPlotCtrl)

// Constructor
public:
	CPlotCtrl();

private:
 CRect wndRect,m_DrawRect;
 CDC* m_pDC;

 //Function to Intialize DC and mapping mode
 void PrepareForPlotting(CRect rect); 
 void DrawGrid();

public:
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPlotCtrl)
	public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
	virtual DWORD GetControlFlags();
	//}}AFX_VIRTUAL

// Implementation
protected:
	~CPlotCtrl();

	DECLARE_OLECREATE_EX(CPlotCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CPlotCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CPlotCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CPlotCtrl)		// Type name and misc status

	// Subclassed control support
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// Message maps
	//{{AFX_MSG(CPlotCtrl)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	//{{AFX_DISPATCH(CPlotCtrl)
	BOOL m_showGrid;
	afx_msg void OnShowGridChanged();
	BOOL m_xLog;
	afx_msg void OnXLogChanged();
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	//{{AFX_EVENT(CPlotCtrl)
	//}}AFX_EVENT
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	//{{AFX_DISP_ID(CPlotCtrl)
	dispidShowGrid = 1L,
	dispidXLog = 2L,
	//}}AFX_DISP_ID
	};
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PLOTCTL_H__A74CD7EE_EA6F_11D4_ABF3_000102378429__INCLUDED)
