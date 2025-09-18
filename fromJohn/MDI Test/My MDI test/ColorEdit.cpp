// ColorEdit.cpp : implementation file
//

#include "stdafx.h"
#include "ColorEdit.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CColorEdit

CColorEdit::CColorEdit()
{
	m_crTextColor=GetSysColor(COLOR_BTNTEXT);
	m_crBkColor=GetSysColor(COLOR_WINDOW);
	m_brBk.CreateSolidBrush(m_crBkColor);
}

CColorEdit::~CColorEdit()
{
}

void CColorEdit::SetTextColor(COLORREF crTextColor)
{
	m_crTextColor=crTextColor;
	Invalidate();
}

void CColorEdit::SetBkColor(COLORREF crBkColor)
{
	m_crBkColor=crBkColor;
    m_brBk.DeleteObject();
    m_brBk.CreateSolidBrush(m_crBkColor);
	Invalidate();
}

void CColorEdit::SetSysColors()
{
	m_crBkColor=GetSysColor(COLOR_WINDOW);
    m_brBk.DeleteObject();
    m_brBk.CreateSolidBrush(m_crBkColor);
	m_crTextColor=GetSysColor(COLOR_BTNTEXT);
	Invalidate();
}

BEGIN_MESSAGE_MAP(CColorEdit, CEdit)
	//{{AFX_MSG_MAP(CColorEdit)
	ON_WM_CTLCOLOR_REFLECT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CColorEdit message handlers

HBRUSH CColorEdit::CtlColor(CDC * pDC, UINT nCtlColor) 
{
	pDC->SetTextColor(m_crTextColor);
	pDC->SetBkColor(m_crBkColor);
    return (HBRUSH) m_brBk;
}
