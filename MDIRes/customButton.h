#pragma once


// customButton

class customButton : public CButton
{
	DECLARE_DYNAMIC(customButton)

public:
	customButton();
	virtual ~customButton();

protected:
	DECLARE_MESSAGE_MAP()
public:
    void setTextButtonColor(COLORREF color) { m_textColor = color; };
    void setBkButtonColor(COLORREF color)   { m_bkColor = color; };
    virtual void DrawItem(LPDRAWITEMSTRUCT /*lpDrawItemStruct*/);
protected:
    COLORREF m_textColor;
    COLORREF m_bkColor;
};


