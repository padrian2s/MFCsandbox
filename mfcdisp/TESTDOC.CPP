// testDoc.cpp : implementation of the CTestDoc class
//

#include "stdafx.h"
#include "test.h"

#include "testDoc.h"
#include "itest.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestDoc

IMPLEMENT_DYNCREATE(CTestDoc, CDocument)

BEGIN_INTERFACE_MAP(CTestDoc, CDocument)
      INTERFACE_PART(CTestDoc, IID_IDispatch, MyDispatch)
	INTERFACE_PART(CTestDoc, IID_ITest, MyDispatch)
END_INTERFACE_MAP()

BEGIN_MESSAGE_MAP(CTestDoc, CDocument)
	//{{AFX_MSG_MAP(CTestDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CTestDoc, CDocument)
	//{{AFX_DISPATCH_MAP(CTestDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//      DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestDoc construction/destruction

CTestDoc::CTestDoc()
{
	// TODO: add one-time construction code here

	EnableAutomation();

	AfxOleLockApp();
}

CTestDoc::~CTestDoc()
{
	m_ptinfo->Release();
	AfxOleUnlockApp();
}

BOOL CTestDoc::OnNewDocument()
{
	HRESULT hr;
    LPTYPELIB ptlib;

	if (!CDocument::OnNewDocument())
		return FALSE;

	hr = LoadRegTypeLib(LIBID_Test, 1, 0, 0x09, &ptlib);
    if (FAILED(hr))
    {
	     AfxMessageBox("Can't find type library test.tlb. Re-register by running test.exe");
         return FALSE;
    }
    hr = ptlib->GetTypeInfoOfGuid(IID_ITest, &m_ptinfo);
    if (FAILED(hr))  
    { 
        ptlib->Release();
        return FALSE;
    }
    ptlib->Release();
	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CTestDoc serialization

void CTestDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTestDoc diagnostics

#ifdef _DEBUG
void CTestDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTestDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTestDoc commands

ULONG FAR EXPORT CTestDoc::XMyDispatch::AddRef()
{
   METHOD_PROLOGUE(CTestDoc, MyDispatch)
   return pThis->ExternalAddRef();
}    
ULONG FAR EXPORT CTestDoc::XMyDispatch::Release()
{
   METHOD_PROLOGUE(CTestDoc, MyDispatch)
   return pThis->ExternalRelease();
}
STDMETHODIMP CTestDoc::XMyDispatch::QueryInterface(REFIID riid,
LPVOID FAR* ppvObj)
{
   METHOD_PROLOGUE(CTestDoc, MyDispatch)
   return (HRESULT)pThis->ExternalQueryInterface(&riid, ppvObj);
}   
STDMETHODIMP CTestDoc::XMyDispatch::GetTypeInfoCount(UINT FAR* pctinfo)
{    
   METHOD_PROLOGUE(CTestDoc, MyDispatch)
   *pctinfo = 1;
   return NOERROR;  
}
STDMETHODIMP CTestDoc::XMyDispatch::GetTypeInfo(
	   UINT itinfo,
       LCID lcid,
       ITypeInfo FAR* FAR* pptinfo)
{   
    METHOD_PROLOGUE(CTestDoc, MyDispatch)
    *pptinfo = NULL;
    
    if(itinfo != 0)
        return ResultFromScode(DISP_E_BADINDEX);   
    pThis->m_ptinfo->AddRef(); 
    *pptinfo = pThis->m_ptinfo;   
    return NOERROR; 
}
STDMETHODIMP CTestDoc::XMyDispatch::GetIDsOfNames(
	   REFIID riid,
       OLECHAR FAR* FAR* rgszNames,
       UINT cNames,
       LCID lcid,
       DISPID FAR* rgdispid)
{   
   METHOD_PROLOGUE(CTestDoc, MyDispatch)  
   return DispGetIDsOfNames(pThis->m_ptinfo, rgszNames, cNames,
                            rgdispid);
}
STDMETHODIMP CTestDoc::XMyDispatch::Invoke(
	   DISPID dispidMember,
       REFIID riid,
       LCID lcid,
       WORD wFlags,
       DISPPARAMS FAR* pdispparams,
       VARIANT FAR* pvarResult,
       EXCEPINFO FAR* pexcepinfo,
	   UINT FAR* puArgErr)
{  
   METHOD_PROLOGUE(CTestDoc, MyDispatch)
   
   return DispInvoke(
        &pThis->m_xMyDispatch, pThis->m_ptinfo,
        dispidMember, wFlags, pdispparams,
	  pvarResult, pexcepinfo, puArgErr);
} 
STDMETHODIMP CTestDoc::XMyDispatch::get_TestProperty(short *pnRetVal) 
{
	METHOD_PROLOGUE(CTestDoc, MyDispatch)

	*pnRetVal = pThis->m_nTestProperty;
	return NOERROR;
}
STDMETHODIMP CTestDoc::XMyDispatch::put_TestProperty(short nNewValue) 
{
	METHOD_PROLOGUE(CTestDoc, MyDispatch)

	pThis->m_nTestProperty = nNewValue;
      return NOERROR;
}
STDMETHODIMP CTestDoc::XMyDispatch::TestMethod(short n, short *pnRetVal) 
{
	*pnRetVal = n;
	return NOERROR;
}

