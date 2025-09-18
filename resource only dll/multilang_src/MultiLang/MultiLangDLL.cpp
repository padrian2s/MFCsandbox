#include "StdAfx.h"
#include "common.h"
#include "MultiLang.h"
//#include ".\MultiLangdll.h"

HINSTANCE MultiLangLoadLibrary( 
                          HINSTANCE hDllInstance,
                          HKEY hkey,
                          LPCTSTR lpszSection,
                          LPCTSTR lpszEntry
)
{
  TCHAR szLangDLL[_MAX_PATH+14];
  CString cLangCode = ReadRegistryLang(hkey, lpszSection, lpszEntry);

  TCHAR szFormat[MAX_PATH];
  GetLangFormatString(szFormat, hDllInstance);

  int ret = _sntprintf(szLangDLL,_countof(szLangDLL),szFormat,cLangCode);
  if(ret == -1 || ret >= _countof(szLangDLL))
  {
    ASSERT(FALSE);
    return NULL;
  }

  HINSTANCE hInstance = ::LoadLibrary(szLangDLL);

  if(hInstance)
    return hInstance;
  else
    return hDllInstance;
}








