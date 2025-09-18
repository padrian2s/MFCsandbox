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
// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "resource.h"

#include "MainDlg.h"

#include "AboutDlg.h"
#include "FileFilter.h"

/////////////////////////////////////////////////////////////////////////////

BOOL CMainDlg::PreTranslateMessage( MSG* pmsg )
{
	return ( IsDialogMessage( pmsg ) );
}

BOOL CMainDlg::OnIdle( )
{
	return ( FALSE );
}

/////////////////////////////////////////////////////////////////////////////

BOOL CMainDlg::OnInitDialog( HWND hwndFocus, LPARAM lParam )
{
	DoDataExchange( FALSE );

	CenterWindow();

	SetIcon( (HICON) ::LoadImage(_Module.GetResourceInstance(), MAKEINTRESOURCE(IDR_MAINFRAME), IMAGE_ICON, ::GetSystemMetrics( SM_CXICON ), ::GetSystemMetrics( SM_CYICON ), LR_DEFAULTCOLOR ), TRUE );
	SetIcon( (HICON) ::LoadImage(_Module.GetResourceInstance(), MAKEINTRESOURCE(IDR_MAINFRAME), IMAGE_ICON, ::GetSystemMetrics( SM_CXSMICON ), ::GetSystemMetrics( SM_CYSMICON ), LR_DEFAULTCOLOR ), FALSE );

	CMessageLoop* pLoop = _Module.GetMessageLoop();
	ATLASSERT(pLoop != NULL);

	pLoop->AddMessageFilter( this );
	pLoop->AddIdleHandler( this );

	UIAddChildWindowContainer( m_hWnd );

	return ( TRUE );
}

/////////////////////////////////////////////////////////////////////////////

void CMainDlg::OnLoad( WORD wNotifyCode, WORD wID, HWND hwndCtrl )
{
	// Nuke the contents of the list control.
	m_list.DeleteAllItems( );

	while ( m_list.DeleteColumn( 0 ) );

	// Get the Excel file from the user.
	AFileFilter	ff( _T("Excel Files|*.xls|All Files|*.*||") );

	CFileDialog	dlgFile( TRUE, 
						 _T("xls"), 
						 _T(""), 
						 OFN_FILEMUSTEXIST | OFN_HIDEREADONLY, 
						 ff, 
						 m_hWnd
					   );

	dlgFile.m_ofn.lpstrTitle = _T("Select the Excel File to Load");

	if ( dlgFile.DoModal( ) != IDOK )
		return;

	// Load the Excel application in the background.
	Excel::_ApplicationPtr pApplication;

	if ( FAILED( pApplication.CreateInstance( _T("Excel.Application") ) ) )
	{
		Errorf( _T("Failed to initialize Excel::_Application!") );
		return;
	}

	_variant_t	varOption( (long) DISP_E_PARAMNOTFOUND, VT_ERROR );

	Excel::_WorkbookPtr pBook = pApplication->Workbooks->Open( dlgFile.m_szFileName, varOption, varOption, varOption, varOption, varOption, varOption, varOption, varOption, varOption, varOption, varOption, varOption );

	if ( pBook == NULL )
	{
		Errorf( _T("Failed to open Excel file!") );
		return;
	}

	Excel::_WorksheetPtr pSheet = pBook->Sheets->Item[ 1 ];

	if ( pSheet == NULL )
	{
		Errorf( _T("Failed to get first Worksheet!") );
		return;
	}

	// Load the column headers.
	Excel::RangePtr pRange = pSheet->GetRange( _bstr_t( _T("A1") ), _bstr_t( _T("Z1" ) ) );

	if ( pRange == NULL )
	{
		Errorf( _T("Failed to get header cell range( A1:Z1 )!") );
		return;
	}

	int			iColumns = 0;

	for ( int iColumn = 1; iColumn < 26; ++iColumn )
	{
		_variant_t	vItem = pRange->Item[ 1 ][ iColumn ];
		_bstr_t		bstrText( vItem );

		if ( bstrText.length( ) == 0 )
			break;

		m_list.AddColumn( bstrText, iColumns++ );
	}

	// Load the rows (up to the first blank one).
	pRange = pSheet->GetRange( _bstr_t( _T("A2") ), _bstr_t( _T("Z16384" ) ) );

	for ( int iRow = 1; ; ++iRow )
	{
		for ( int iColumn = 1; iColumn <= iColumns; ++iColumn )
		{
			_variant_t	vItem = pRange->Item[ iRow ][ iColumn ];
			_bstr_t		bstrText( vItem );

			if ( bstrText.length( ) == 0 )
				break;

			if ( iColumn == 1 )
				m_list.AddItem( iRow - 1, 0, bstrText );
			else
				m_list.SetItemText( iRow - 1, iColumn - 1, bstrText );
		}

		if ( iColumn == 1 )
			break;
	}

	// Make it all look pretty.
	for ( int iColumn = 1; iColumn <= iColumns; ++iColumn )
		m_list.SetColumnWidth( iColumn, LVSCW_AUTOSIZE_USEHEADER );

	// Don't save any inadvertant changes to the .xls file.
	pBook->Close( VARIANT_FALSE );

	// Need to quit, otherwise Excel remains active and locks the .xls file.
	pApplication->Quit( );

	return;
}

/////////////////////////////////////////////////////////////////////////////

void CMainDlg::OnCloseCommand( WORD wNotifyCode, WORD wID, HWND hwndCtrl )
{
	DestroyWindow( );

	::PostQuitMessage( wID );

	return;
}

void CMainDlg::OnAppAbout( WORD wNotifyCode, WORD wID, HWND hwndCtrl )
{
	CAboutDlg	dlg;

	dlg.DoModal( );

	return;
}

/////////////////////////////////////////////////////////////////////////////

void CMainDlg::Errorf( LPCTSTR pszFormat, ... )
{
	CString		str;

	va_list	argList;

	va_start( argList, pszFormat );

	str.FormatV( pszFormat, argList );

	::AtlMessageBox( m_hWnd, (LPCTSTR) str, _T("WTLExcel Error"), MB_ICONHAND | MB_OK );

	return;
}
