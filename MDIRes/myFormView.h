#pragma once
#include "afxwin.h"


#include "customButton.h"

// myFormView form view

class myFormView : public CFormView
{
	DECLARE_DYNCREATE(myFormView)

protected:
	myFormView();           // protected constructor used by dynamic creation
	virtual ~myFormView();

public:
	enum { IDD = IDD_MYFORMVIEW };
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedButton2();
    customButton m_button;
    afx_msg void OnBnClickedButton1();
    virtual void OnInitialUpdate();
};


