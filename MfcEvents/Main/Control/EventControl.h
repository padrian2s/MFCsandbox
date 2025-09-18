// EventControl.h : Declaration of the CEventControl

#ifndef __EVENTCONTROL_H_
#define __EVENTCONTROL_H_

#include "resource.h"       // main symbols
#include <atlctl.h>
#include "ControlCP.h"

/////////////////////////////////////////////////////////////////////////////
// CEventControl
class ATL_NO_VTABLE CEventControl : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IEventControl, &IID_IEventControl, &LIBID_CONTROLLib>,
	public CComControl<CEventControl>,
	public IPersistStreamInitImpl<CEventControl>,
	public IOleControlImpl<CEventControl>,
	public IOleObjectImpl<CEventControl>,
	public IOleInPlaceActiveObjectImpl<CEventControl>,
	public IViewObjectExImpl<CEventControl>,
	public IOleInPlaceObjectWindowlessImpl<CEventControl>,
	public IConnectionPointContainerImpl<CEventControl>,
	public IPersistStorageImpl<CEventControl>,
	public ISpecifyPropertyPagesImpl<CEventControl>,
	public IQuickActivateImpl<CEventControl>,
	public IDataObjectImpl<CEventControl>,
	public IProvideClassInfo2Impl<&CLSID_EventControl, &DIID__IEventControlEvents, &LIBID_CONTROLLib>,
	public IPropertyNotifySinkCP<CEventControl>,
	public CComCoClass<CEventControl, &CLSID_EventControl>,
	public CProxy_IEventControlEvents< CEventControl >
{
public:
	CEventControl()
	{
		AFX_MANAGE_STATE(AfxGetStaticModuleState())		// this is needed before any MFC state based calls
		m_pControlApp = AfxGetApp();					// get the "app" object pointer 
	}

	CWinApp *m_pControlApp;		// stored for comparison purposes

DECLARE_REGISTRY_RESOURCEID(IDR_EVENTCONTROL)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CEventControl)
	COM_INTERFACE_ENTRY(IEventControl)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(IPersistStreamInit)
	COM_INTERFACE_ENTRY2(IPersist, IPersistStreamInit)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
	COM_INTERFACE_ENTRY(IQuickActivate)
	COM_INTERFACE_ENTRY(IPersistStorage)
	COM_INTERFACE_ENTRY(IDataObject)
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
	COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)
END_COM_MAP()

BEGIN_PROP_MAP(CEventControl)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// Example entries
	// PROP_ENTRY("Property Description", dispid, clsid)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

BEGIN_CONNECTION_POINT_MAP(CEventControl)
	CONNECTION_POINT_ENTRY(IID_IPropertyNotifySink)
	CONNECTION_POINT_ENTRY(DIID__IEventControlEvents)
END_CONNECTION_POINT_MAP()

BEGIN_MSG_MAP(CEventControl)
	CHAIN_MSG_MAP(CComControl<CEventControl>)
	DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);



// IViewObjectEx
	DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IEventControl
public:
	STDMETHOD(TestMethod)();

	HRESULT OnDraw(ATL_DRAWINFO& di)
	{
		RECT& rc = *(RECT*)di.prcBounds;
		Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);

		SetTextAlign(di.hdcDraw, TA_CENTER|TA_BASELINE);
		LPCTSTR pszText = _T("Simple ActiveX Control to Fire Events");
		TextOut(di.hdcDraw, 
			(rc.left + rc.right) / 2, 
			(rc.top + rc.bottom) / 2, 
			pszText, 
			lstrlen(pszText));

		return S_OK;
	}
};

#endif //__EVENTCONTROL_H_
