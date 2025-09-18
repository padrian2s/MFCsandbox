#include "StdAfx.h"
#include <shlwapi.h>
#include ".\common.h"


                                                 
BOOL WriteRegistryLang(HKEY hkey, LPCTSTR lpszSection, LPCTSTR lpszEntry,
                       LPCTSTR lpszValue)
{
  ASSERT(lpszSection != NULL);
  ASSERT(lpszEntry != NULL);

  HKEY hSecKey = NULL;

  DWORD dw;
  if(RegCreateKeyEx(hkey, lpszSection, 0, REG_NONE,
    REG_OPTION_NON_VOLATILE, KEY_WRITE|KEY_READ, NULL,
    &hSecKey, &dw)!=ERROR_SUCCESS)
    return FALSE;


  if (hSecKey == NULL)
    return FALSE;
  LONG lResult = RegSetValueEx(hSecKey, lpszEntry, NULL, REG_SZ,
    (LPBYTE)lpszValue, (lstrlen(lpszValue)+1)*sizeof(TCHAR));
  RegCloseKey(hSecKey);
  return lResult == ERROR_SUCCESS;
}

CString ReadRegistryLang(HKEY hkey, LPCTSTR lpszSection, LPCTSTR lpszEntry)
{
  ASSERT(lpszSection != NULL);
  ASSERT(lpszEntry != NULL);

  HKEY hSecKey = NULL;

  DWORD dw;
  if(RegCreateKeyEx(hkey, lpszSection, 0, REG_NONE,
    REG_OPTION_NON_VOLATILE, KEY_WRITE|KEY_READ, NULL,
    &hSecKey, &dw)!=ERROR_SUCCESS)
    return _T("");

  CString strValue;
  DWORD dwType, dwCount;
  LONG lResult = RegQueryValueEx(hSecKey, (LPTSTR)lpszEntry, NULL, &dwType,
    NULL, &dwCount);
  if (lResult == ERROR_SUCCESS)
  {
    ASSERT(dwType == REG_SZ);
    lResult = RegQueryValueEx(hSecKey, (LPTSTR)lpszEntry, NULL, &dwType,
      (LPBYTE)strValue.GetBuffer(dwCount/sizeof(TCHAR)), &dwCount);
    strValue.ReleaseBuffer();
  }
  RegCloseKey(hSecKey);
  if (lResult == ERROR_SUCCESS)
  {
    ASSERT(dwType == REG_SZ);
    return strValue;
  }

  return _T("");
}

BOOL GetLangFormatString(LPTSTR szFormat, HINSTANCE hInstance)
{
  LPTSTR pszExtension;

  int ret = ::GetModuleFileName(hInstance, szFormat, MAX_PATH);
  if(ret == 0 || ret == MAX_PATH)
  {
    ASSERT(FALSE);
    return NULL;
  }
  pszExtension = PathFindExtension(szFormat);

  TCHAR szExt[] = _T(".%s");
  if((pszExtension - szFormat + _countof(szExt)) > MAX_PATH)
  {
    ASSERT(FALSE);
    return NULL;
  }

  lstrcpy(pszExtension, szExt);
  return TRUE;
}
