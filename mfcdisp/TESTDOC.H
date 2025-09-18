// testDoc.h : interface of the CTestDoc class
//
/////////////////////////////////////////////////////////////////////////////
#include "itest.h"
class CTestDoc : public CDocument
{
protected: // create from serialization only
	CTestDoc();
	DECLARE_DYNCREATE(CTestDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTestDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTestDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	// Generated OLE dispatch map functions
	//{{AFX_DISPATCH(CTestDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()

    BEGIN_INTERFACE_PART(MyDispatch, ITest)
     STDMETHOD(GetTypeInfoCount)(UINT FAR* pctinfo);
     STDMETHOD(GetTypeInfo)(
       UINT itinfo,
       LCID lcid,
       ITypeInfo FAR* FAR* pptinfo);
     STDMETHOD(GetIDsOfNames)(
       REFIID riid,
       OLECHAR FAR* FAR* rgszNames,
       UINT cNames,
       LCID lcid,
       DISPID FAR* rgdispid);
     STDMETHOD(Invoke)(
       DISPID dispidMember,
       REFIID riid,
       LCID lcid,
       WORD wFlags,
       DISPPARAMS FAR* pdispparams,
       VARIANT FAR* pvarResult,
       EXCEPINFO FAR* pexcepinfo,
	   UINT FAR* puArgErr);

     /* ITest methods */
     STDMETHOD(put_TestProperty)(short nNewValue);
     STDMETHOD(get_TestProperty)(short FAR* retval);
     STDMETHOD(TestMethod)(short n, short FAR* retval);
    END_INTERFACE_PART(MyDispatch)


private: 
    LPTYPEINFO       m_ptinfo;           // ITest type information
	short m_nTestProperty;
};

/////////////////////////////////////////////////////////////////////////////
