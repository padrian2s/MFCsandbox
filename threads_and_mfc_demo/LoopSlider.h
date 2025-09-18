#if !defined(AFX_LOOPSLIDER_H__8DD8B9D0_5578_4E55_AE3E_D8397EBE0704__INCLUDED_)
#define AFX_LOOPSLIDER_H__8DD8B9D0_5578_4E55_AE3E_D8397EBE0704__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LoopSlider.h : header file
//
#include "Threads.h"
/////////////////////////////////////////////////////////////////////////////
// CLoopSlider window

class CLoopSlider : public CSliderCtrl
{
// Construction
public:
	CLoopSlider();
 
// Attributes
public:

	int		m_iMin;
	int		m_iMax;
	int		m_iPosition;
	void    initSlider();
	void	SetSlidePos( const int pos );
	void	SetSlideRange( const int min, const int max );
    int     GetSliderPos();
// Operations
public:
	 ~CLoopSlider();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLoopSlider)
	//}}AFX_VIRTUAL

// Implementation

	// Generated message map functions
protected:
	//{{AFX_MSG(CLoopSlider)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
afx_msg void HScroll(UINT ncode,UINT pos );
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOOPSLIDER_H__8DD8B9D0_5578_4E55_AE3E_D8397EBE0704__INCLUDED_)
