// PlotPpg.cpp : Implementation of the CPlotPropPage property page class.

#include "stdafx.h"
#include "Plot.h"
#include "PlotPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CPlotPropPage, COlePropertyPage)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CPlotPropPage, COlePropertyPage)
	//{{AFX_MSG_MAP(CPlotPropPage)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CPlotPropPage, "PLOT.PlotPropPage.1",
	0xa74cd7e1, 0xea6f, 0x11d4, 0xab, 0xf3, 0, 0x1, 0x2, 0x37, 0x84, 0x29)


/////////////////////////////////////////////////////////////////////////////
// CPlotPropPage::CPlotPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CPlotPropPage

BOOL CPlotPropPage::CPlotPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_PLOT_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CPlotPropPage::CPlotPropPage - Constructor

CPlotPropPage::CPlotPropPage() :
	COlePropertyPage(IDD, IDS_PLOT_PPG_CAPTION)
{
	//{{AFX_DATA_INIT(CPlotPropPage)
	m_bShowGrid = FALSE;
	m_xLog = FALSE;
	//}}AFX_DATA_INIT
}


/////////////////////////////////////////////////////////////////////////////
// CPlotPropPage::DoDataExchange - Moves data between page and properties

void CPlotPropPage::DoDataExchange(CDataExchange* pDX)
{
	//{{AFX_DATA_MAP(CPlotPropPage)
	DDP_Check(pDX, IDC_CHECK1, m_bShowGrid, _T("ShowGrid") );
	DDX_Check(pDX, IDC_CHECK1, m_bShowGrid);
	DDP_Check(pDX, IDC_CHECK2, m_xLog, _T("XLog") );
	DDX_Check(pDX, IDC_CHECK2, m_xLog);
	//}}AFX_DATA_MAP
	DDP_PostProcessing(pDX);
}


/////////////////////////////////////////////////////////////////////////////
// CPlotPropPage message handlers
