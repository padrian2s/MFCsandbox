// ColorLabel.cpp : implementation file
//

#include "stdafx.h"
#include "ColorLabel.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CColorLabel

CColorLabel::CColorLabel()
{
	m_crTextColor=GetSysColor(COLOR_BTNTEXT);
	m_crBkColor=GetSysColor(COLOR_BTNFACE);
	m_brBk.CreateSolidBrush(m_crBkColor);
}

CColorLabel::~CColorLabel()
{
}

void CColorLabel::SetTextColor(COLORREF crTextColor)
{
	m_crTextColor = crTextColor;
	Invalidate();
}

void CColorLabel::SetBkColor(COLORREF crBkColor)
{
	m_crBkColor = crBkColor;
    m_brBk.DeleteObject();
    m_brBk.CreateSolidBrush(m_crBkColor);
	Invalidate();
}

void CColorLabel::SetSysColors()
{
	m_crBkColor=GetSysColor(COLOR_BTNFACE);
    m_brBk.DeleteObject();
    m_brBk.CreateSolidBrush(m_crBkColor);
	m_crTextColor=GetSysColor(COLOR_BTNTEXT);
	Invalidate();
}

BEGIN_MESSAGE_MAP(CColorLabel, CStatic)
	//{{AFX_MSG_MAP(CColorLabel)
	ON_WM_CTLCOLOR_REFLECT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CColorLabel message handlers

HBRUSH CColorLabel::CtlColor(CDC * pDC, UINT nCtlColor) 
{
	pDC->SetTextColor(m_crTextColor);
	pDC->SetBkColor(m_crBkColor);
    return (HBRUSH) m_brBk;
}
