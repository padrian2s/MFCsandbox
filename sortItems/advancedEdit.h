#ifndef _FORMATTED_EDIT_H_
#define _FORMATTED_EDIT_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define NUMBER_MASK '#'
#define CHAR_MASK	'^'
#define ANY_MASK	'~'

/////////////////////////////////////////////////////////////////////////////
// CFormattedEdit window

class CFormattedEdit : public CEdit
{
// Construction
public:

	enum CDMSDATATYPE
	{
		CDMS_STRING		= 1,
		CDMS_DATE		= 2,
		CDMS_CURRENCY	= 3,
		CDMS_CASEID		= 4,
		CDMS_PAN		= 5,
		CDMS_NUMBER		= 6,
		CDMS_STRING_NORMAL = 7,
		CDMS_DATE_LONG	= 8,
	};

	void RaiseError(void);
	void SetPAN(BOOL bIsPAN = FALSE);
    void SetBarcode(BOOL bIsBarcode = FALSE);
	void SetMask(CString _mask);
	void SetFlicker(BOOL _flicker = FALSE);
	BOOL ValidateMask();
	short VerifyPAN();//-1 empty string, 1 - OK, 0 - NOT OK
    short VerifyBarcode();//-1 empty string, 1 - OK, 0 - NOT OK
	CFormattedEdit();
	virtual ~CFormattedEdit();
	
    virtual BOOL PreTranslateMessage(MSG* pMsg);
	void SetRestriction(int type, BOOL required = FALSE);
	BOOL IsValid();
	//{{AFX_VIRTUAL(CFormattedEdit)
	//}}AFX_VIRTUAL
	
	BOOL m_bErrorValidate;
    int m_restrictionType;
    int m_restrictionRequired;

protected:
	CStatic *m_errorWnd;
	int FindPositionAfter(int _startPos = 0);
	int FindPositionBefore(int _stopPos = 0);
	BOOL CheckMask(int _pos);	
	//{{AFX_MSG(CFormattedEdit)
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);
    afx_msg void OnPaint();
	//}}AFX_MSG

	CString m_mask;
	int m_currentPosition;
	int m_selCount;
	BOOL m_shiftDown;
	BOOL m_flicker;
	
	CBitmap bmp;
    HBRUSH m_brushKeyRed;
    HBRUSH m_brushKeyGreen;
	HBRUSH m_brushBackground;
	BOOL m_keyPressed;
    short m_checkOk;
	BOOL m_bIsPAN;
    BOOL m_bIsBarcode;
    BOOL m_fontInitialized;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
    BOOL isPatternMached(CString val, CString pattern);    
};

//{{AFX_INSERT_LOCATION}}

#endif //_FORMATTED_EDIT_H_