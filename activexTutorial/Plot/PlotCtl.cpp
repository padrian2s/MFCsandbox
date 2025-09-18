// PlotCtl.cpp : Implementation of the CPlotCtrl ActiveX Control class.

#include "stdafx.h"
#include "Plot.h"
#include "PlotCtl.h"
#include "PlotPpg.h"
#include "math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CPlotCtrl, COleControl)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CPlotCtrl, COleControl)
	//{{AFX_MSG_MAP(CPlotCtrl)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
	ON_MESSAGE(OCM_COMMAND, OnOcmCommand)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Dispatch map

BEGIN_DISPATCH_MAP(CPlotCtrl, COleControl)
	//{{AFX_DISPATCH_MAP(CPlotCtrl)
	DISP_PROPERTY_NOTIFY(CPlotCtrl, "ShowGrid", m_showGrid, OnShowGridChanged, VT_BOOL)
	DISP_PROPERTY_NOTIFY(CPlotCtrl, "XLog", m_xLog, OnXLogChanged, VT_BOOL)
	DISP_STOCKPROP_BACKCOLOR()
	DISP_STOCKPROP_FORECOLOR()
	//}}AFX_DISPATCH_MAP
	DISP_FUNCTION_ID(CPlotCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()


/////////////////////////////////////////////////////////////////////////////
// Event map

BEGIN_EVENT_MAP(CPlotCtrl, COleControl)
	//{{AFX_EVENT_MAP(CPlotCtrl)
	// NOTE - ClassWizard will add and remove event map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_EVENT_MAP
END_EVENT_MAP()


/////////////////////////////////////////////////////////////////////////////
// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CPlotCtrl, 2)
	PROPPAGEID(CPlotPropPage::guid)
	PROPPAGEID(CLSID_CColorPropPage)
END_PROPPAGEIDS(CPlotCtrl)


/*
BEGIN_PROPPAGEIDS(CPlotCtrl, 1)
	PROPPAGEID(CPlotPropPage::guid)
END_PROPPAGEIDS(CPlotCtrl)

BEGIN_PROPPAGEIDS(CPlotCtrl, 2)
	PROPPAGEID(CPlotPropPage::guid)
	PROPPAGEID(CLSID_CColorPropPage)
END_PROPPAGEIDS(CPlotCtrl)
*/

/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CPlotCtrl, "PLOT.PlotCtrl.1",
	0xa74cd7e0, 0xea6f, 0x11d4, 0xab, 0xf3, 0, 0x1, 0x2, 0x37, 0x84, 0x29)


/////////////////////////////////////////////////////////////////////////////
// Type library ID and version

IMPLEMENT_OLETYPELIB(CPlotCtrl, _tlid, _wVerMajor, _wVerMinor)


/////////////////////////////////////////////////////////////////////////////
// Interface IDs

const IID BASED_CODE IID_DPlot =
		{ 0xa74cd7de, 0xea6f, 0x11d4, { 0xab, 0xf3, 0, 0x1, 0x2, 0x37, 0x84, 0x29 } };
const IID BASED_CODE IID_DPlotEvents =
		{ 0xa74cd7df, 0xea6f, 0x11d4, { 0xab, 0xf3, 0, 0x1, 0x2, 0x37, 0x84, 0x29 } };


/////////////////////////////////////////////////////////////////////////////
// Control type information

static const DWORD BASED_CODE _dwPlotOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CPlotCtrl, IDS_PLOT, _dwPlotOleMisc)


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::CPlotCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CPlotCtrl

BOOL CPlotCtrl::CPlotCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_PLOT,
			IDB_PLOT,
			afxRegApartmentThreading,
			_dwPlotOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::CPlotCtrl - Constructor

CPlotCtrl::CPlotCtrl()
{
	InitializeIIDs(&IID_DPlot, &IID_DPlotEvents);
	// TODO: Initialize your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::~CPlotCtrl - Destructor

CPlotCtrl::~CPlotCtrl()
{
	// TODO: Cleanup your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::OnDraw - Drawing function

void CPlotCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
/*
	DoSuperclassPaint(pdc, rcBounds);

	CBrush bkBrush(TranslateColor(GetBackColor()));
	pdc->FillRect(rcBounds,&bkBrush);
*/
 DoSuperclassPaint(pdc, rcBounds);

 m_pDC = pdc;
 m_DrawRect = rcBounds;
 wndRect = rcBounds;

 PrepareForPlotting(&rcBounds);

 CBrush hbrBackground(TranslateColor(GetBackColor()));
 pdc->FillRect (m_DrawRect,&hbrBackground);

 if(m_showGrid)
  DrawGrid();

 float y;
 m_pDC->SelectObject(CPen(PS_SOLID,1,GetForeColor()));
 m_pDC->MoveTo(m_DrawRect.right/2,
 m_DrawRect.bottom/2);
 for (int i=0;i<2000;i=i++)
 {
  y = 512*sin(2*3.1415926535*i/1000)+512;
  m_pDC->MoveTo(i , y);
  m_pDC->LineTo(i+1 ,
  512*sin(2*3.1415926535*(i+1)/1000)+512);
 }
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::DoPropExchange - Persistence support

void CPlotCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	PX_Bool(pPX,_T("ShowGrid"),m_showGrid,FALSE);
	PX_Bool(pPX,_T("ShowGrid"),m_xLog,FALSE);
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::GetControlFlags -
// Flags to customize MFC's implementation of ActiveX controls.
//
// For information on using these flags, please see MFC technical note
// #nnn, "Optimizing an ActiveX Control".
DWORD CPlotCtrl::GetControlFlags()
{
	DWORD dwFlags = COleControl::GetControlFlags();


	// The control will not be redrawn when making the transition
	// between the active and inactivate state.
	dwFlags |= noFlickerActivate;
	return dwFlags;
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::OnResetState - Reset control to default state

void CPlotCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::AboutBox - Display an "About" box to the user

void CPlotCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_PLOT);
	dlgAbout.DoModal();
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::PreCreateWindow - Modify parameters for CreateWindowEx

BOOL CPlotCtrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("STATIC");
	return COleControl::PreCreateWindow(cs);
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::IsSubclassedControl - This is a subclassed control

BOOL CPlotCtrl::IsSubclassedControl()
{
	return TRUE;
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl::OnOcmCommand - Handle command messages

LRESULT CPlotCtrl::OnOcmCommand(WPARAM wParam, LPARAM lParam)
{
#ifdef _WIN32
	WORD wNotifyCode = HIWORD(wParam);
#else
	WORD wNotifyCode = HIWORD(lParam);
#endif

	// TODO: Switch on wNotifyCode here.

	return 0;
}


/////////////////////////////////////////////////////////////////////////////
// CPlotCtrl message handlers

void CPlotCtrl::OnShowGridChanged() 
{
	// TODO: Add notification handler code
 InvalidateControl();
 SetModifiedFlag();
}

void CPlotCtrl::DrawGrid()
{
 CPen Pen (PS_SOLID|PS_INSIDEFRAME,1,TranslateColor(GetForeColor()));
 CPen* oldPen = m_pDC->SelectObject (&Pen);

 switch(m_xLog)
 {
  case FALSE:
   int i;

   for (i = m_DrawRect.left; 
        i <= m_DrawRect.right ;
        i = i+(( m_DrawRect.right - m_DrawRect.left )/10))
   {
    m_pDC->MoveTo (i, m_DrawRect.top );
    m_pDC->LineTo (i, m_DrawRect.bottom );
   }

   for (i = m_DrawRect.top;
        i <= m_DrawRect.bottom;
        i = i+ (( m_DrawRect.bottom - m_DrawRect.top )/8))
   {
    m_pDC->MoveTo (m_DrawRect.left,i );
    m_pDC->LineTo (m_DrawRect.right,i);
   }
  break;

  case TRUE:
   int x,X;

   for(int j=1;j<= 10;j++)
   {
    x= (int)(log10(j)*285.7143);
    m_pDC->MoveTo (x,m_DrawRect.top);
    m_pDC->LineTo (x,m_DrawRect.bottom );
   }

   X= x;

   m_pDC->SelectObject(&Pen);
   m_pDC->MoveTo (x,m_DrawRect.top);
   m_pDC->LineTo (x,m_DrawRect.bottom );
   m_pDC->SelectObject (&Pen);
   m_pDC->TextOut (x,m_DrawRect.bottom-5,"10.0K");

   for( j=1;j<= 10;j++)
   {
    x= X+(int)(log10(j)*285.7143);
    m_pDC->MoveTo (x,m_DrawRect.top);
    m_pDC->LineTo (x,m_DrawRect.bottom );
   }

   X= x;

   m_pDC->SelectObject(&Pen);
   m_pDC->MoveTo (x,m_DrawRect.top);
   m_pDC->LineTo (x,m_DrawRect.bottom );
   m_pDC->SelectObject (&Pen);
   m_pDC->TextOut (x,m_DrawRect.bottom-5,"100.0K");

   for( j=1;j<= 10;j++)
   {
    x= X+(int)(log10(j)*285.7143);
    m_pDC->MoveTo (x,m_DrawRect.top);
    m_pDC->LineTo (x,m_DrawRect.bottom );
   }

   X= x;

   m_pDC->SelectObject(&Pen);
   m_pDC->MoveTo (x,m_DrawRect.top);
   m_pDC->LineTo (x,m_DrawRect.bottom );
   m_pDC->SelectObject (&Pen);
   m_pDC->TextOut (x,m_DrawRect.bottom-5,"1.0M");

   for( j=1;j<= 10;j++)
   {
    x= X+(int)(log10(j)*285.7143);
    m_pDC->MoveTo (x,m_DrawRect.top);
    m_pDC->LineTo (x,m_DrawRect.bottom );
   }

   X= x;

   m_pDC->SelectObject(&Pen);
   m_pDC->MoveTo (x,m_DrawRect.top);
   m_pDC->LineTo (x,m_DrawRect.bottom );
   m_pDC->SelectObject (&Pen);
   m_pDC->TextOut (x,m_DrawRect.bottom-5,"10.0M");

   for( j=1;j<= 10;j++)
   {
    x= X+(int)(log10(j)*285.7143);
    m_pDC->MoveTo (x,m_DrawRect.top);
    m_pDC->LineTo (x,m_DrawRect.bottom );
   }

   X= x;

   m_pDC->SelectObject(&Pen);
   m_pDC->MoveTo (x,m_DrawRect.top);
   m_pDC->LineTo (x,m_DrawRect.bottom );
   m_pDC->SelectObject (&Pen);
   m_pDC->TextOut (x,m_DrawRect.bottom-5,"10.0M");

   for( j=1;j<= 10;j++)
   {
    x= X+(int)(log10(j)*285.7143);
    m_pDC->MoveTo (x,m_DrawRect.top);
    m_pDC->LineTo (x,m_DrawRect.bottom );
   }

   X= x;

   m_pDC->SelectObject(&Pen);
   m_pDC->MoveTo (x,m_DrawRect.top);
   m_pDC->LineTo (x,m_DrawRect.bottom );
   m_pDC->SelectObject (&Pen);
   m_pDC->TextOut (x,m_DrawRect.bottom-5,"10.0M");

   for( j=1;j<= 10;j++)
   {
    x= X+(int)(log10(j)*285.7143);
    m_pDC->MoveTo (x,m_DrawRect.top);
    m_pDC->LineTo (x,m_DrawRect.bottom );
   }

  break;
 }
}

void CPlotCtrl::PrepareForPlotting(CRect rect)
{
 m_pDC->SetMapMode(MM_HIMETRIC);
 m_pDC->SetMapMode(MM_ANISOTROPIC);
 m_pDC->SetWindowExt (2000,1024);
 m_pDC->SetViewportExt (rect.right , rect.bottom );
 m_pDC->DPtoLP(&m_DrawRect);

 return;
}

void CPlotCtrl::OnXLogChanged() 
{
  InvalidateControl();
	SetModifiedFlag();
}
