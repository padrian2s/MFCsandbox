#if !defined(AFX_NEWLABEL_H__50B040A0_5E0B_11D4_BC43_0050BAA38233__INCLUDED_)
#define AFX_NEWLABEL_H__50B040A0_5E0B_11D4_BC43_0050BAA38233__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// ==========================================================================
// Les Includes
// ==========================================================================

#include "ControlToolTip.h"

/////////////////////////////////////////////////////////////////////////////
// class CStaticCtrlStyled


/////////////////////////////////////////////////////////////////////////////
// CStaticStyledCtrl window

class CStaticStyledCtrl : public CStatic
 {
  protected :
              COLORREF          m_clrBackColor;
              COLORREF          m_clrTextBackColor;
              COLORREF          m_clrTextColor;
              COLORREF          m_clrHightLight;
              COLORREF          m_clrSaveTextColor;
              HBRUSH            m_hBackBrush;

			  BOOL              m_bUseToolTip;
              LOGFONT           m_stLF;
              CFont             m_cFont;
              HCURSOR           m_hCursor;
              HBITMAP           m_hBackImage;
              UINT              m_uiAlignment;
              UINT              m_uiAngle;
              CString           m_strText;
              CControlToolTip   m_cControlToolTip;

              int     GetWindowText(LPTSTR lpszStringBuf, int nMaxCount);
              void    GetWindowText(CString &rString);
              BOOL    ReconstructFont();
              void    SetWindowText(LPCTSTR lpszString);
  public :
           CStaticStyledCtrl();
           virtual ~CStaticStyledCtrl();

           static BOOL IsWindowsNT2000();

           // Color functions
           CStaticStyledCtrl &SetBkColor(COLORREF clr = ::GetSysColor(COLOR_3DFACE));
           CStaticStyledCtrl &SetDefaultBkColor();
           CStaticStyledCtrl &SetDefaultTextBackColor();
           CStaticStyledCtrl &SetDefaultTextColor();
           CStaticStyledCtrl &SetHighLightColor(COLORREF clr = ::GetSysColor(COLOR_HIGHLIGHT));
           CStaticStyledCtrl &SetTextBackColor(COLORREF clr = ::GetSysColor(COLOR_3DFACE));
           CStaticStyledCtrl &SetTextColor(COLORREF clr = ::GetSysColor(COLOR_WINDOWTEXT));
           
           // Font functions
           CStaticStyledCtrl &SetFontBold(BOOL bBold);
           CStaticStyledCtrl &SetFontItalic(BOOL bItalic);
           CStaticStyledCtrl &SetFontName(LPCTSTR szFaceName);
           CStaticStyledCtrl &SetFontSize(int iSize);
           CStaticStyledCtrl &SetFontUnderline(BOOL bUnderline);

           // Other functions
           void ForceNoOwnerDraw(BOOL bForce);

           BOOL    GetBorder();
           CString GetText();
           
           CStaticStyledCtrl &SetText(LPCTSTR szText);
           CStaticStyledCtrl &SetToolTipPosition(int iPosition = 0);
           CStaticStyledCtrl &SetToolTipText(LPCTSTR lpszText = "");
                      
           CStaticStyledCtrl &ShowToolTipOnlyOnMouseClick(BOOL bUse);           
           CStaticStyledCtrl &UseToolTip(BOOL bUse);

           // INLINE
           COLORREF GetBkColor()             { return m_clrBackColor; }
           COLORREF GetHighLightColor()      { return m_clrHightLight; }
           COLORREF GetTextBackColor()       { return m_clrTextBackColor; }
           COLORREF GetTextColor()           { return m_clrTextColor; }

           BOOL     GetFontBold()            { return ((m_stLF.lfWeight & FW_BOLD) == FW_BOLD) ? TRUE : FALSE; }
           BOOL     GetFontItalic()          { return m_stLF.lfItalic; }
           CString  GetFontName()            { return m_stLF.lfFaceName; }
           LONG     GetFontSize()            { return m_stLF.lfHeight; }
           BOOL     GetFontUnderline()       { return m_stLF.lfUnderline; }
           
           BOOL     UseToolTipOnLeftMouseClick()     { return m_cControlToolTip.IsLeftMouseButtonUsed(); }
           BOOL     UseToolTipWithMouseClick()       { return m_cControlToolTip.ShowOnlyOnMouseClickDown(); }

  public :
	//{{AFX_VIRTUAL(CStaticStyledCtrl)
	public:
	virtual BOOL DestroyWindow();
	protected:
	virtual void PreSubclassWindow();
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

  protected :
	//{{AFX_MSG(CStaticStyledCtrl)
	afx_msg void OnEnable(BOOL bEnable);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG

  DECLARE_MESSAGE_MAP()
 };

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWLABEL_H__50B040A0_5E0B_11D4_BC43_0050BAA38233__INCLUDED_)
