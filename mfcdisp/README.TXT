SAMPLE: MFCDISP: Replacing MFC’s IDispatch implementation

----------------------------------------------------------------------
The information in this article applies to:

- Microsoft Visual C++ 4.0
- Microsoft OLE libraries included with:
    - Microsoft Windows NT 3.5.1
    - Microsoft Windows 95
----------------------------------------------------------------------

SUMMARY
=======

MFCDISP demonstates how to replace MFC’s IDispatch implementation with
a type library based IDispatch implementation. A type library based 
implementation uses the OLE system API DispInvoke and DispGetIDsOfNames 
to implement IDispatch::Invoke and IDispatch::GetIDsOfNames.

Download MFCDISP.EXE, a self-extracting file, from the Microsoft
Software Library (MSL) on the following services. Run MFCDISP.EXE -d
to extact the files.

 - CompuServe
      GO MSL
      Search for MFCDISP.EXE
      Display results and download

 - Microsoft Download Service (MSDL)
      Dial (206) 936-6735 to connect to MSDL
      Download MFCDISP.EXE

 - Internet (anonymous FTP)
      ftp ftp.microsoft.com
      Change to the \SOFTLIB\MSLFILES directory
      Get MFCDISP.EXE


MORE INFORMATION
================

MFC’s implementation of server OLE Automation currently has the 
following limitations. These limitations can be removed by replacing or 
modifying MFC’s IDispatch implementation with a type-library based 
implementation of IDispatch.

1. MFC’s IDispatch doesn’t support named arguments. A type-library based 
implementation supports this.

2. MFC’s IDispatch::Invoke doesn’t fully support array parameters. Array 
parameters are passed in a VARIANT to an automation property/method 
implementation. This requires the automation method/property to type 
check the VARIANT. A type-library based implementation allows an array 
parameter type to be SAFEARRAY*. It will also type check this parameter 
before passing it to the automation method/property.

3.  MFC’s IDispatch::Invoke doesn’t fully support automation methods with
the vararg attribute. These are methods that can have a variable number 
of arguments. The method implementation will see the variable number of 
arguments as a SAFEARRAY of VARIANTs. MFC will support this if the 
client passes a VARIANT containing a SAFEARRAY of VARIANTs, with each 
array element representing a parameter. However late-binding clients 
will not pass parameters in this manner.  Instead these client will pass 
variable parameters the same as other parameters. Consequently MFC 
automation servers will not support these clients. A type library-based 
implementation completely supports vararg methods. It will create an 
array of parameters and will pass it to the automation method 
implementation even if the client doesn’t pass the array.

(Optional arguments are supported in MFC’s implementation through 
parameters whose type is VARIANT. Note that optional parameters are 
different from methods with the vararg attribute. The number of 
parameters of a method that has optional parameters is bounded. The 
number of parameters of a method that has the vararg attribute is not 
bounded.)

4. MFC’s implementation doesn’t implement IDispatch::GetTypeInfo. A 
type-library based implementation can easily support this.

5. MFC’s implementation doesn’t support multiple national languages. The 
type-library based implementation supports this if a different type 
library is used for each supported language.

6. MFC’s implementation doesn’t support vtbl-binding. However it is 
possible to add vtbl-binding support without having to replace MFC’s 
IDispatch implementation. See the following KB article for details to do 
this. A type library based implementation supports vtbl-binding.

SAMPLE: ACDUAL: Dual Interface Support in a MFC Server

Replacing MFC’s IDispatch implementation requires the following steps:
----------------------------------------------------------------------

This article assumes that you know how to create a non-MFC automation 
server. If not, please see the HELLO sample in the Win32 SDK and the OLE 
Automation documentation in the Win32 online documentation (\OLE\OLE 
Automation). The following instructions use Visual C++ 4.0. However a 
type library based IDispatch implementation can be added to any MFC 
application. The instructions builds a sample called Test. You can use 
names appropriate for your project.

1. Create an MFC application which includes the automation header files 
and links with the automation libraries. One way to do this is to 
generate an application with OLE Automation support using AppWizard. The 
sample was generated using AppWizard and ‘Test’ was used as the project 
name. The following steps show how to add a type library based IDispatch 
implementation to the CTestDoc class. The same steps can be used to add 
automation to any CCmdTarget derived class. 

2. Modify the test.odl created by AppWizard by replacing the 
dispinterface with an interface and by specifying a locale ID for the 
type library. The interface should define the automation properties and 
methods that need to be exposed. (DispInvoke will not work with a 
dispinterface.) 

The sample uses the following .odl file, TEST.ODL:

[ uuid(C04AADF0-2A82-11CF-84F5-00AA00C006CF), version(1.0), lcid(0x09) ]
library Test
{
   importlib("stdole32.tlb");
   [ 
     uuid(C04AADF1-2A82-11CF-84F5-00AA00C006CF),
     oleautomation,
     dual 
   ]
   interface ITest : IDispatch
   {
   [id(1), propput] HRESULT TestProperty([in]short nNewValue);
   [id(1), propget] HRESULT TestProperty([out, retval] short *retval);
   [id(2)] HRESULT TestMethod([in] short n, [out,retval] short *retval);
   };

   [ uuid(943B3F80-CD85-11CE-815A-00AA0060D733) ]
   coclass CTestDoc
   {
      [default] interface ITest;
   };
   //{{AFX_APPEND_ODL}}
};

A coclass must be provided if the object is a top-level object (i.e. if 
the object can be created by CoCreateInstance). The UUID of the coclass 
must be the CLSID of the object. The GUID generated by AppWizard for the 
dispinterface can be used for the interface that replaces it. Add a 
locale id for the type library (the sample uses lcid(0x09) for English). 

New CCmdTarget derived automation objects can be added using 
ClassWizard. Edit the the .odl file to make the above changes after each 
object is added. (The sample adds automation only to the CDocument 
derived class, CTestDoc.)

3. Select the Build/Settings menu. Open the appropriate platform folder 
in the left pane of the Project Settings dialog and select the .odl 
file. Select the OLE Types tab in the right pane and enter an output 
header file name (itest.h). mktyplib will generate this header file when 
it compiles the .odl file. This header file will contain the C/C++ 
definition of the ITest interface. It will also contain the CLSID of the 
object, the Interface GUID of the ITest interface and the GUID of the 
type library.

Space must be allocated for the GUIDs that are defined in itest.h. This 
is done by creating a separate source file (guids.cpp) which includes 
ole2.h, initguid.h and itest.h. The OLE header file initguid.h will 
cause space to be allocated for the GUIDs defined in itest.h. Make sure 
that guids.cpp is not built with a pre-compiled header. To do this add 
guids.cpp to the project, select the Build/Settings menu, open the 
appropriate platform folder in the left pane of the ProjectSettings 
dialog, select guids.cpp in the build folder in the left pane of the 
ProjectSettings dialog, select the C/C++ tab, select the Precompiled 
headers category and select ‘Not using precompiled headers’.

itest.h should be included in each source file that uses the GUIDs or 
interfaces that it defines. The sample includes itest.h in test.cpp, 
testdoc.h and testdoc.cpp.

4. Define the interface as a nested class of the object that is going to 
implement it by using the BEGIN_INTERFACE_PART/ END_INTERFACE_PART 
macros. The sample defines the ITest interface as a nested class of the 
CTestDoc class in testdoc.h as follows:

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

Add a private class member to the object’s class to hold the typeinfo of 
the interface:

private: 
    LPTYPEINFO       m_ptinfo;           // ITest type information

5. Implement the interface. The sample implements the ITest interface as 
follows in testdoc.cpp:

a. An interface map is declared as follows to hook into the object’s 
IUnknown::QueryInterface implementation. When a client asks for 
IDispatch (late binding/id-binding) or ITest (vtbl-binding) using 
IUnknown::QueryInterface, the vtbl for the XMyDispatch nested class will 
be returned.
BEGIN_INTERFACE_MAP(CTestDoc, CDocument)
      INTERFACE_PART(CTestDoc, IID_IDispatch, MyDispatch)
	INTERFACE_PART(CTestDoc, IID_ITest, MyDispatch)
END_INTERFACE_MAP()

Remove the interface map inserted by AppWizard. For example, the sample 
removes the following interface map from testdoc.cpp:
BEGIN_INTERFACE_MAP(CTestDoc, CDocument)
	INTERFACE_PART(CTestDoc, IID_ITest, Dispatch)
END_INTERFACE_MAP()

b.  Remove the declaration of the interface IID because guids.cpp will
allocate space for it. For example, the sample removes the following 
from testDoc.cpp:
static const IID IID_ITest =
{ 0xc04aadf1, 0x2a82, 0x11cf, { 0x84, 0xf5, 0x0, 0xaa, 0x0, 0xc0, 0x6, 
0xcf } };

c. Load the typeinfo of the interface from the type library when the 
object is created.
BOOL CTestDoc::OnNewDocument()
{
    HRESULT hr;
    LPTYPELIB ptlib;

    if (!CDocument::OnNewDocument())
        return FALSE;

    hr = LoadRegTypeLib(LIBID_Test, 1, 0, 0x09, &ptlib);
    if (FAILED(hr))
    {
	   AfxMessageBox("Can't find type library test.tlb. Re-register \ 
                        by running test.exe");
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

d. Release the typeinfo of the interface in the destructor of the 
object. 
CTestDoc::~CTestDoc()
{
	m_ptinfo->Release();
	AfxOleUnlockApp();
}

e. The ITest interface is implemented as follows. Note the use of the 
METHOD_PROLOGUE macro to access the member functions of the object by 
using the pThis variable. QueryInterface, AddRef and Release are 
delegated to MFC’s implementation. IDispatch is implemented using 
DispGetIDsOfNames and DispInvoke. DispInvoke will call the appropriate 
automation method or property function.
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

6.  Use AfxOleRegisterTypeLib to register the type library on start up in 
CWinApp::InitInstance. The sample does it in test.cpp. afxctl.h must 
be included in the source file that uses AfxOleRegisterTypeLib.

// Register type library and the interfaces in it
AfxOleRegisterTypeLib(AfxGetInstanceHandle(), LIBID_Test,
                      _T("test.TLB"));

Testing the sample server
-------------------------

Run the sample server, test.exe, so that it registers itself in the 
registration database. Then use the Visual Basic 4.0 files in the vb 
directory  in the sample to control the server. The server will be 
launched invisible and it doesn’t have an automation method to make it 
visible.

vb.vbp, vb.frm uses late-binding (IDispatch) to control the server using 
code similar to the following:

Dim o As Object
Set o = CreateObject("Test.Document")
Value = o.TestProperty
o.TestProperty = Value
Value = o.TestMethod(99)

vbvtbl.vbp, vbvtbl.frm  uses vtbl-binding (ITest) to control the server 
using code similar to the following. Use the Tools/References menu in VB 
to select the server’s type library (Test) before executing this code.

Dim o As ITest
Set o = New CTestDoc 'Use the name of the coclass
Value = o.TestProperty
o.TestProperty = Value
Value = o.TestMethod(99)
 
Handling Errors
---------------

AfxThrowOleDispatchException cannot be used to throw exceptions in the 
automation method or property implementation when a type-library based 
IDispatch implementation is used. Instead SetErrorInfo can be used to 
return rich error information as described in the following knowledge 
base article:

How To Fill EXCEPINFO in IDispatch Implementation
ID: Q139073


========================================================================
       MICROSOFT FOUNDATION CLASS LIBRARY : test
========================================================================


AppWizard has created this test application for you.  This application
not only demonstrates the basics of using the Microsoft Foundation classes
but is also a starting point for writing your application.

This file contains a summary of what you will find in each of the files that
make up your test application.

test.h
    This is the main header file for the application.  It includes other
    project specific headers (including Resource.h) and declares the
    CTestApp application class.

test.cpp
    This is the main application source file that contains the application
    class CTestApp.

test.rc
    This is a listing of all of the Microsoft Windows resources that the
    program uses.  It includes the icons, bitmaps, and cursors that are stored
    in the RES subdirectory.  This file can be directly edited in Microsoft
	Developer Studio.

res\test.ico
    This is an icon file, which is used as the application's icon.  This
    icon is included by the main resource file test.rc.

res\test.rc2
    This file contains resources that are not edited by Microsoft 
	Developer Studio.  You should place all resources not
	editable by the resource editor in this file.

test.reg
    This is an example .REG file that shows you the kind of registration
    settings the framework will set for you.  You can use this as a .REG
    file to go along with your application or just delete it and rely
    on the default RegisterShellFileTypes registration.

test.odl
    This file contains the Object Description Language source code for the
    type library of your application.

test.clw
    This file contains information used by ClassWizard to edit existing
    classes or add new classes.  ClassWizard also uses this file to store
    information needed to create and edit message maps and dialog data
    maps and to create prototype member functions.

/////////////////////////////////////////////////////////////////////////////

For the main frame window:

MainFrm.h, MainFrm.cpp
    These files contain the frame class CMainFrame, which is derived from
    CMDIFrameWnd and controls all MDI frame features.

res\Toolbar.bmp
    This bitmap file is used to create tiled images for the toolbar.
    The initial toolbar and status bar are constructed in the
    CMainFrame class.  Edit this toolbar bitmap along with the
    array in MainFrm.cpp to add more toolbar buttons.

/////////////////////////////////////////////////////////////////////////////

AppWizard creates one document type and one view:

testDoc.h, testDoc.cpp - the document
    These files contain your CTestDoc class.  Edit these files to
    add your special document data and to implement file saving and loading
    (via CTestDoc::Serialize).

testView.h, testView.cpp - the view of the document
    These files contain your CTestView class.
    CTestView objects are used to view CTestDoc objects.

res\testDoc.ico
    This is an icon file, which is used as the icon for MDI child windows
    for the CTestDoc class.  This icon is included by the main
    resource file test.rc.


/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named test.pch and a precompiled types file named StdAfx.obj.

Resource.h
    This is the standard header file, which defines new resource IDs.
    Microsoft Developer Studio reads and updates this file.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" to indicate parts of the source code you
should add to or customize.

If your application uses MFC in a shared DLL, and your application is 
in a language other than the operating system's current language, you
will need to copy the corresponding localized resources MFC40XXX.DLL
from the Microsoft Visual C++ CD-ROM onto the system or system32 directory,
and rename it to be MFCLOC.DLL.  ("XXX" stands for the language abbreviation.
For example, MFC40DEU.DLL contains resources translated to German.)  If you
don't do this, some of the UI elements of your application will remain in the
language of the operating system.

/////////////////////////////////////////////////////////////////////////////
