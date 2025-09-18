#if !defined(AFX_MFCEVENTSINK_H__1FA85432_B926_47D2_B6EA_617D571A0026__INCLUDED_)
#define AFX_MFCEVENTSINK_H__1FA85432_B926_47D2_B6EA_617D571A0026__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MfcEventSink.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// MfcEventSink command target

class CMfcEventSink : public CCmdTarget
{
	DECLARE_DYNCREATE(CMfcEventSink)

public:

	CMfcEventSink();					// constructor 
	virtual ~CMfcEventSink();		// destructor

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMfcEventSink)
	public:
	virtual void OnFinalRelease();
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMfcEventSink)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
	// Generated OLE dispatch map functions
	//{{AFX_DISPATCH(CMfcEventSink)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()

public:

	// our mfc app object pointer 
	CWinApp *m_pMfcEventSinkApp;					// stored for comparison purposes

	// the event handler routine 
	void OnTestEvent();								// 0x00000001
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEVENTSINK_H__1FA85432_B926_47D2_B6EA_617D571A0026__INCLUDED_)
