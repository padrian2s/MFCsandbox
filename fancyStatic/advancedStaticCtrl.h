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
// CStaticStyledCtrl window

class CStaticStyledCtrl : public CStatic
 {
  public :

  protected :
              COLORREF          m_clrBackColor;
              COLORREF          m_clrTextBackColor;
              COLORREF          m_clrTextColor;
              COLORREF          m_clrHightLight;
              COLORREF          m_clrSaveTextColor;
              HBRUSH            m_hBackBrush;

              //BOOL              m_bUseDefaultBackColor;
              BOOL              m_bUseDefaultTextBackColor;
              BOOL              m_bUseDefaultTextColor;
              BOOL              m_bLink;
              BOOL              m_bUseBevelLine;
              BOOL              m_bUseHighLighting;
              BOOL              m_bVerticalText;
              BOOL              m_bInside;
              BOOL              m_bTextFlash;
              BOOL              m_bBackFlash;
              BOOL              m_bFlashTextState;
              BOOL              m_bFlashBackState;
              BOOL              m_bUseToolTip;
              BOOL              m_bUseHighLightingOnlyWithToolTip;
              BOOL              m_bBlockMessage;
              BOOL              m_bLowerCase;
              BOOL              m_bUpperCase;
              BOOL              m_bStretchBitmap;
              LOGFONT           m_stLF;
              CFont             m_cFont;
              HCURSOR           m_hCursor;
              HBITMAP           m_hBackImage;
              UINT              m_uiAlignment;
              UINT              m_uiAngle;
              CString           m_strText;
              CControlToolTip   m_cControlToolTip;
                         
              BOOL    ReconstructFont();

  public :
           CStaticStyledCtrl();
           virtual ~CStaticStyledCtrl();
           
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

           CString GetText();

           CStaticStyledCtrl &SetText(LPCTSTR szText);
           CStaticStyledCtrl &SetToolTipPosition(int iPosition = 0);
           CStaticStyledCtrl &SetToolTipText(LPCTSTR lpszText = "");
           CStaticStyledCtrl &SetUpperCase(BOOL bSet);
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
      
           BOOL     UseHighLightingOnlyWithToolTip() { return m_bUseHighLightingOnlyWithToolTip; }
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
	afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);
	afx_msg void OnPaint();
	//}}AFX_MSG

  DECLARE_MESSAGE_MAP()
 };

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWLABEL_H__50B040A0_5E0B_11D4_BC43_0050BAA38233__INCLUDED_)
