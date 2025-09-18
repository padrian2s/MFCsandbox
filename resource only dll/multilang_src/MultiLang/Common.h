#pragma once

BOOL GetLangFormatString(LPTSTR szFormat, HINSTANCE hInstance=NULL);
CString ReadRegistryLang(HKEY hkey, LPCTSTR lpszSection, LPCTSTR lpszEntry);
BOOL WriteRegistryLang(HKEY hkey, LPCTSTR lpszSection, LPCTSTR lpszEntry,
                       LPCTSTR lpszValue);

// determine number of elements in an array (not bytes)
#define _countof(array) (sizeof(array)/sizeof(array[0]))


