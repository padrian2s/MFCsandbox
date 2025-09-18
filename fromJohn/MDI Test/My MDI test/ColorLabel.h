//  ******************************************************************
//  *                                                                *
//  * (C) 2000 Distributed Network Associates ALL RIGHTS RESERVED    *
//  *                                                                *
//  * Copyright in the whole and every part of this software program *
//  * belongs to Distributed Network Associates ("the owner") and    *
//  * may not be used, sold, licensed, transferred, copied, adapted  *
//  * or reproduced in whole or in part in any manner or form in or  *
//  * on any media without prior written consent of the Owner.       *
//  *                                                                *
//  ******************************************************************
//  * Source     : ColorLabel.h
//  * Description: Static control for Visual C++ which allowes
//  *              text and background color changing
//  ******************************************************************
//  *                    Modification History                    
//  *-----------------------------------------------------------------
//  *    Date     Version      Author          Description
//  *    ----     -------      ------          -----------
//  * 31-Oct-2000 V01M00       Ion CERTEJAN    Initial version
//  ******************************************************************

#ifndef _COLORLABEL_H
#define _COLORLABEL_H

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

// ColorLabel.h : header file
//

class CColorLabel : public CStatic
{
// Construction
public:
	CColorLabel();
// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CColorLabel)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CColorLabel();
	void SetTextColor(COLORREF crTextColor);
	void SetBkColor(COLORREF crBkColor);
	void SetSysColors();
	// Generated message map functions
protected:
	//{{AFX_MSG(CColorLabel)
	afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
private:
	COLORREF m_crTextColor;
	COLORREF m_crBkColor;
	CBrush m_brBk;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif 
