// "CListCtrlStyled" by ANDRE Sébastien @2002 (maximus@oreka.com) (http://divxdede.fr.st)
//

#if !defined(AFX_LISTCTRLSTYLED)
#define AFX_LISTCTRLSTYLED

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <afxtempl.h>				// Let manage CArray
#include <list>


// --------------------------
// -- Definitions of STYLE --		// LIS = List Item Style ;o)
// --------------------------
#define LIS_BOLD          1			// Set the item to BOLD
#define LIS_ITALIC        2			// Set the item to ITALIC
#define LIS_UNDERLINE     4			// Set the item to UNDERLINE
#define LIS_STROKE		  8			// Set the item to STROKE
#define LIS_TXTCOLOR	  16		// Text color is valid and must be set
#define LIS_BGCOLOR	      32		// BackGround color is valid and must be set
#define LIS_NO_COL_STYLE  64        // The Column Style has no effect on this item / subitem
#define LIS_NO_ROW_STYLE  128		// The Row Stylehas no effect on this item / subitem
#define LIS_FIXED_STYLE	  LIS_NO_COL_STYLE | LIS_NO_ROW_STYLE
#define KEY_PAGEUP        0x0021
#define KEY_PAGEDOWN      0x0022
//The initial state of m_wHitMask
#define INITIAL_HITMASK LVHT_ONITEMLABEL

//the allowed types for the added controls
enum enCONTROLTYPE
{ 
    EDITBOX,
    COMBOBOX,
    LISTBOX,
    CHECKBOX,
    BUTTON,
    NONE
};

//the structure that containes all the data about the added control
struct SubItemControlsInfo
{
    enCONTROLTYPE   m_enControlType;
    int             m_colParent;
    int             m_rowParent;
    int             m_colParentWidth;
    int             m_colPosition;
    CWnd *          m_pWnd;
    COLORREF        m_BKColor;
    BOOL            m_btnChecked;
    DWORD_PTR       m_pRowData;
    SubItemControlsInfo()
    {
        m_enControlType     = NONE;
        m_colParent         = -1;
        m_rowParent         = -1;
        m_colPosition       = -1;
        m_colParentWidth    = 0;
        m_pWnd              = NULL;
        m_BKColor           = GetSysColor(COLOR_WINDOW);
        m_btnChecked        = FALSE;
        m_pRowData          = NULL;
    }
    //you can attach an handler to the control
    //CArray<ControlMessageInfo,ControlMessageInfo> m_arrControlMessageInfo;
};

// -------------------------------------
// -- Definition of LS_item structure --
// -------------------------------------
// This structure allow this derived CListCtrl to store for any items/subitems his own style (bold,color,etc..)
// All styles (item & subitems) for an item are accessible with the helpfull of lParam member.
// But for make the usage transparancy, the "lParam" access method is always available and return the pogrammer value ;o)
// because LS_item structure hold the lParam member before override it, and restore it when needed.
//
typedef struct iLS_item
{	LPARAM lParam;											// The user-32 bits data lParam member
    bool   mParam;											// let you know if the original item have a lParam significant member

   	DWORD StyleFlag;										// The style of this item
  	bool in_use;											// true if a font style is in use (except for colors)

	COLORREF txtColor;										// Text color if LIS_TXTCOLOR style 		(default otherwise)
  	COLORREF bgColor;										// BackGround color if LIS_BGCOLOR style	(default otherwise)

	CArray<struct iLS_item *,struct iLS_item *> subitems;   // Allow to have an individual style for subitems  (this array is empty if it's a subitem structure style instance)
	struct iLS_item * row_style;							// Access to the row style (valid only for the ITEM, subitems structure have NULL on this member)
	struct iLS_item * selected_style;						// The selected style for a component

	CFont * cfont;											// The CFont object pointer used for draw this item or subitem
	bool ifont;												// Allow to know if the CFont is a internal or user Cfont object and allow to know if we must memory manage it !
	CFont * merged_font;									// If a combination of differents font is needed (Style from Columns,Line and Item), this is the last CFont object

} LS_item;

enum COLUMNDATATYPE
{
	CDMS_STRING		= 1,
	CDMS_DATE		= 2,
	CDMS_CURRENCY	= 3,
};

typedef struct columnDataType
{	
	unsigned int iColumn; 
	unsigned int format;
}columnDataType;

// ---------------------
// -- CListCtrlStyled --
// ---------------------
class CListCtrlStyled : public CListCtrl
{
public:	
    // -- Construction --
	//
	CListCtrlStyled();

	// ***************************
	// ** Style methods setting **
	// ***************************

	// -- Set the style of an item or subitem (style flag are LIS_BOLD LIS_UNDERLINE LIS_STROKE LIS_ITALIC LIS_TXTCOLOR and LIS_BGCOLOR --
	//
	void SetItemStyle(int nItem,int nSubItem,DWORD Style,bool Redraw = true);				// Set a style for an item or subitem
	void SetItemTxtColor(int nItem,int nSubItem,COLORREF txtColor,bool redraw = true);		// Set a Text Color for an item or subitem
	void SetItemBgColor(int nItem,int nSubItem,COLORREF txtBgColor,bool redraw = true);		// Set a BackGround Color for an item or subitem
	void SetItemFont(int nItem,int nSubItem,CFont * pFont,bool redraw = true);  			// Allow to define a user-font for an item or subitem

	// -- Set the style for an entire row (item+subitems) --
	//
	void SetRowStyle(int nRow,DWORD Style,bool redraw = true);
	void SetRowTxtColor(int nRow,COLORREF txtColor,bool redraw = true);
	void SetRowBgColor(int nRow,COLORREF txtBgColor,bool redraw = true);
	void SetRowFont(int nRow,CFont * pFont,bool redraw = true);

	// -- Set the style for an entire Column  --
	//
	void SetColStyle(int nCol,DWORD Style,bool redraw = true);
	void SetColTxtColor(int nCol,COLORREF txtColor,bool redraw = true);
	void SetColBgColor(int nCol,COLORREF txtBgColor,bool redraw = true);
	void SetColFont(int nCol,CFont * pFont,bool redraw = true);

	// ******************************
	// ** GENERAL HIGHLIGHT Colors **
	// ******************************

	// -- Set HIGHLIGHT Colors value --
	// --
	void SetHighlightTextColor(COLORREF Color);
	void SetHighlightColor(COLORREF Color);

	// ************************************************
	// ** Style methods setting when SELECTED STATUS **
	// ************************************************

	// -- Set "Selected Style" for an Item / SubItem --
	//
	void SetItemSelectedStyle(int nItem,int nSubItem,DWORD Style,bool Redraw = true);				// Set a style for an item or subitem
	void SetItemSelectedTxtColor(int nItem,int nSubItem,COLORREF txtColor,bool redraw = true);		// Set a Text Color for an item or subitem
	void SetItemSelectedBgColor(int nItem,int nSubItem,COLORREF txtBgColor,bool redraw = true);		// Set a BackGround Color for an item or subitem
	void SetItemSelectedFont(int nItem,int nSubItem,CFont * pFont,bool redraw = true);  			// Allow to define a user-font for an item or subitem

	// -- Set "Selected style" for an entire row (item+subitems) --
	//
	void SetRowSelectedStyle(int nRow,DWORD Style,bool redraw = true);
	void SetRowSelectedTxtColor(int nRow,COLORREF txtColor,bool redraw = true);
	void SetRowSelectedBgColor(int nRow,COLORREF txtBgColor,bool redraw = true);
	void SetRowSelectedFont(int nRow,CFont * pFont,bool redraw = true);

	// -- Set "Selected style" for an entire Column  --
	//
	void SetColSelectedStyle(int nCol,DWORD Style,bool redraw = true);
	void SetColSelectedTxtColor(int nCol,COLORREF txtColor,bool redraw = true);
	void SetColSelectedBgColor(int nCol,COLORREF txtBgColor,bool redraw = true);
	void SetColSelectedFont(int nCol,CFont * pFont,bool redraw = true);

	// -------------------------------------------------------------------------------------------------------------------
	// -- Overrided Methods, all CListCtrl methods that need to be overrided for let his class a transparancy behaviour --
	// -------------------------------------------------------------------------------------------------------------------

	// -- InsertItem --
	//
	int InsertItem( const LVITEM* pItem );
	int InsertItem( UINT nMask, int nItem, LPCTSTR lpszItem, UINT nState, UINT nStateMask, int nImage, LPARAM lParam );
	int InsertItem( int nItem, LPCTSTR lpszItem );
	int InsertItem( int nItem, LPCTSTR lpszItem, int nImage );

	// -- SetItem --
	//
	BOOL SetItem( const LVITEM* pItem );
	BOOL SetItem(int nItem,int nSubItem,UINT nMask,LPCTSTR lpszItem,int nImage,UINT nState,UINT nStateMask,LPARAM lParam);
	BOOL SetItem(int nItem,int nSubItem,UINT nMask,LPCTSTR lpszItem,int nImage,UINT nState,UINT nStateMask,LPARAM lParam,int nIndent);

	// -- DeleteItem / DeleteAllItems --
	//
	BOOL DeleteItem( int nItem );
	BOOL DeleteAllItems();

	// -- SetItemData / GetItemData --
	//
	BOOL SetItemData( int nItem, DWORD_PTR dwData );
	DWORD_PTR GetItemData( int nItem );

	// -- InsertColumn / DeleteColumn --
	//
	int InsertColumn( int nCol, const LVCOLUMN* pColumn );
	int InsertColumn( int nCol, LPCTSTR lpszColumnHeading, int nFormat = LVCFMT_LEFT, int nWidth = -1, int nSubItem = -1 );
	BOOL DeleteColumn( int nCol );

	// -- SetColumnOrderArray --
	//
	BOOL SetColumnOrderArray( int iCount, LPINT piArray );

	// -- GetItem --
	//
	BOOL GetItem( LV_ITEM* pItem );

	// -- SortItems --
	//
	BOOL SortItems( PFNLVCOMPARE pfnCompare, DWORD dwData );			// use global function (LIS_CompareFunc & LIS_CompFunc)

	// -- FindItem --
	//
	int FindItem( LV_FINDINFO* pFindInfo, int nStart = -1 );

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CListCtrlStyled)
    virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	//}}AFX_VIRTUAL

	// -- Destruction --
	//
	typedef struct tagSortInfo
	{
		CListCtrlStyled * pListControl;
		int	columnNo;
		bool ascendingSortOrder;
	}SortInfo;
	SortInfo m_SortInfo;

	virtual ~CListCtrlStyled();

	CArray<columnDataType>m_columnDataType;
	void SetColumnDataTypeForSorting(UINT idx, UINT dataType);

protected:
	// -------------------------------------------------------------------------------------------------------------
	// -- Hold Old CFont object pointer when CustomDraw is performed, for let this class to restore automatically --
	// -------------------------------------------------------------------------------------------------------------
	CFont*  m_pOldItemFont;
	CFont*  m_pOldSubItemFont;

	CFont*  m_Default_pCFont;
	LOGFONT m_Default_LOGFONT;

	// -- Allow to know if the current Item to be drawing is selected or not
	// --
	bool    m_item_selected;

	// -- Default selected HIGHLIGHT Colors
	// --
	COLORREF m_highlight;
	COLORREF m_highlighttext;

private:
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// -- Let the class to create the appropriate font for an item or return NULL if no special font was needed. This method is call when a item or subitem is being to be draw bu OnCustomDraw --
	// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	CFont * FontForItem(int nItem,int nSubItem,LPARAM lParam,NMLVCUSTOMDRAW* pNMLVCUSTOMDRAW);

	// -- Init a LVITEM structure with the lParam of an item
	//
	void InitLVITEM(int nItem,int nSubItem,LVITEM * pItem);

	// -- Create a CFont object for a specified Style
	//
	CFont * CreateFont(DWORD StyleFlag);

	// -- Select a CFont from a list of 3 !! it return one only it's the only valid CFont, return NULL otherwise
	// --
	CFont * SelectFont(CFont * pCFont1,CFont * pCFont2,CFont * pCFont3);

	// -- Create a New Font that merge 3 CFonts in comparaison of a Base CFont
	// --
	CFont * MergeFont(CFont * pCFont1,CFont * pCFont2,CFont * pCFont3);

	// -- Merge LogFont information from a base
	// --
	void MergeLogFont(LOGFONT * font,LOGFONT *dest);

	// -- LS_item structure management (initialisation & destruction)
	// --
	#define FONT_NORMAL 1
	#define FONT_MERGED 2
	#define FONT_ALL    FONT_NORMAL | FONT_MERGED

	void Init_LS_item(LS_item * lpLS_item,bool allow_subitems = true);
	void Free_LS_font(LS_item* lpLS_item,DWORD mask = FONT_ALL);
	void Free_LS_item(LS_item* lpLS_item);
	
	// -- An Array to hold Columns Style (i don't use the lParam of HDITEM because i don't wand to override an methods for it :-( )
	//
	CArray<struct iLS_item*,struct iLS_item*> columns;
protected:
	//{{AFX_MSG(CListCtrlStyled)
	afx_msg void OnCustomdraw(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDestroy();
    afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
    afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
    afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar ); 
    afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
    afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown( UINT, CPoint );
    virtual afx_msg BOOL OnToolTipText( UINT id, NMHDR * pNMHDR, LRESULT * pResult );
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()

protected:

    // Map's SubItems to related tooltip text
    CMapStringToString m_ToolTipMap; 
    // A bit mask of LVHT_* flags the control will show tooltips for
    WORD m_wHitMask; 

    //list of the added controls
    CPtrArray * m_pCtrlsArray;
    //maximum number of the controls into one cell
    int         m_iCtrlsPerColumn;
    //increment that gives the ID of the new added control
    int         m_iControlIDCounter;
    //gives the reached number of the controls in one cell
    CRect       m_nextControlPos;
    //details about the position of the last added control
    int         m_lastRow;
    int         m_lastCol;
    int         m_lastPosCtrl;
    BOOL        m_columnIsRedrawing;
    //the check boxes act like radio buttons
    BOOL        m_exclusiveCheck;
    short       m_scrollDirection;
    BOOL        m_reachedTheBottom;
    BOOL        m_reachedTheTop;
    int         m_wheelScrollLines;
    int         m_lastTopPosShowed;

    //when clicking on one check box all check boxes from that row are selected
    BOOL        m_checkSiblings;

public:

    SubItemControlsInfo * AddControl(enCONTROLTYPE enControlType, const int rowIndex, const int colIndex);
    void EnableControls(bool bEnable);
    int  CheckDuplicate(const int row, const int col, int & maxCtrlPos);
    void ReleaseControls();
    BOOL DetachControl(const int iIndex);
    void ControlsPerColumn(const int iCtrlsNbr);
    BOOL isItemChecked(int row, int col, int colPosition);
    void CheckControl(const int row, const int col, const int colPosition, const BOOL check = TRUE);
    void setExclusiveCheck(BOOL bEnable);
    void setSiblingsCheck(BOOL bEnable);

    //Provide our own logic for HitTests, specifically, make ToolHitTests respond per SubItem
    virtual int OnToolHitTest(CPoint point, TOOLINFO * pTI) const;
    //Set the TVHT_* flags that will trigger the display of a tooltip
    WORD SetToolTipHitMask(WORD wHitMask);
    //Clear all tooltips
    virtual void DeleteAllToolTips();
    //Set the tooltip text for a specific SubItem
    virtual BOOL SetItemToolTipText( int nItem, int nSubItem, LPCTSTR lpszToolTipText ); 
    //Set the tooltip text for a specific item
    virtual BOOL SetLineToolTipText( int nItem, LPCTSTR lpszToolTipText ); 
    //Retrieves the tooltip text for a specific SubItem 
    virtual CString GetItemToolTipText( int nItem, int nSubItem ); 
	afx_msg void OnLvnColumnclick(NMHDR *pNMHDR, LRESULT *pResult);

	static int CALLBACK Compare(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);	

};

#endif // !defined(AFX_LISTCTRLSTYLED)
