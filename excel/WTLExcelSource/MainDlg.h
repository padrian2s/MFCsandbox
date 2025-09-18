/*
Copyright (c) 2006 KnowNow, Inc.  All rights reserved.

@KNOWNOW_LICENSE_START@

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1. Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in
the documentation and/or other materials provided with the
distribution.

3. The name "KnowNow" is a trademark of KnowNow, Inc. and may not
be used to endorse or promote any product without prior written
permission from KnowNow, Inc.

THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL KNOWNOW, INC. OR ITS CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

@KNOWNOW_LICENSE_END@
*/

/////////////////////////////////////////////////////////////////////////////
//
// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#pragma once

class CMainDlg : 
	public CDialogImpl<CMainDlg>, 
	public CUpdateUI<CMainDlg>,
	public CWinDataExchange<CMainDlg>,
	public CMessageFilter, 
	public CIdleHandler
{
public:
	enum { IDD = IDD_MAINDLG };

	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnIdle();

	BEGIN_UPDATE_UI_MAP(CMainDlg)
	END_UPDATE_UI_MAP()

public:
	CListViewCtrl	m_list;

	BEGIN_DDX_MAP( CMainDlg )
		DDX_CONTROL_HANDLE( IDC_LIST, m_list )
	END_DDX_MAP()

public:
	BEGIN_MSG_MAP_EX( CMainDlg )

		MSG_WM_INITDIALOG( OnInitDialog )

		COMMAND_ID_HANDLER_EX(IDC_BUTTON_LOAD, OnLoad)

		COMMAND_ID_HANDLER_EX(IDOK, OnCloseCommand )
		COMMAND_ID_HANDLER_EX(IDCANCEL, OnCloseCommand )
		COMMAND_ID_HANDLER_EX(ID_APP_ABOUT, OnAppAbout)
	END_MSG_MAP()

	BOOL OnInitDialog( HWND hwndFocus, LPARAM lParam );

	void OnLoad( WORD wNotifyCode, WORD wID, HWND hwndCtrl );

    void OnCloseCommand( WORD wNotifyCode, WORD wID, HWND hwndCtrl );
	void OnAppAbout( WORD wNotifyCode, WORD wID, HWND hwndCtrl );

protected:
	void Errorf( LPCTSTR pszFormat, ... );
};
