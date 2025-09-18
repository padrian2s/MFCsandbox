// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "test.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


#include "OneFrame.h"
#include "TwoFrame.h"

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_COMMAND(ID_FILE_ONE, OnFileOne)
	ON_COMMAND(ID_FILE_TWO, OnFileTwo)
	ON_WM_CREATE()
	ON_COMMAND(ID_LANGUAGE_ENGLISH, OnLanguageEnglish)
	ON_UPDATE_COMMAND_UI(ID_LANGUAGE_ENGLISH, OnUpdateLanguageEnglish)
	ON_COMMAND(ID_LANGUAGE_ROMANIAN, OnLanguageRomanian)
	ON_UPDATE_COMMAND_UI(ID_LANGUAGE_ROMANIAN, OnUpdateLanguageRomanian)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	m_hLanguageDLL=NULL;
}

CMainFrame::~CMainFrame()
{
	if (m_hLanguageDLL)
		FreeLibrary(m_hLanguageDLL); 	
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CMDIFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CMDIFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CMDIFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers

void CMainFrame::OnFileOne() 
{
	// TODO: Add your command handler code here
	static CMDIChildWnd *pMark;
	CMDIChildWnd *pChild=MDIGetActive();
	CString Title;
	BOOL fFound=FALSE;
	while (pChild)
	{
		pChild->GetWindowText(Title);
		if(Title=="One")
		{
			fFound=TRUE;
			break;
		}
		pChild=(CMDIChildWnd *)pChild->GetNextWindow();
	}
	if (!fFound)
	{
		((CTestApp *)AfxGetApp())->m_pOneTempl->OpenDocumentFile(NULL);
		pMark=MDIGetActive();
	}
	else
		pMark->ActivateFrame();
}

void CMainFrame::OnFileTwo() 
{
	// TODO: Add your command handler code here
	static CMDIChildWnd *pMark;
	CMDIChildWnd *pChild=MDIGetActive();
	CString Title;
	BOOL fFound=FALSE;
	while (pChild)
	{
		pChild->GetWindowText(Title);
		if(Title=="Two")
		{
			fFound=TRUE;
			break;
		}
		pChild=(CMDIChildWnd *)pChild->GetNextWindow();
	}
	if (!fFound)
	{
		((CTestApp *)AfxGetApp())->m_pTwoTempl->OpenDocumentFile(NULL);
		pMark=MDIGetActive();
	}
	else
		pMark->ActivateFrame();
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	
	return 0;
}

void CMainFrame::OnLanguageEnglish() 
{
	// TODO: Add your command handler code here
    if (m_hLanguageDLL)
	{
		FreeLibrary(m_hLanguageDLL); 	
		m_hLanguageDLL=NULL;
 		HMODULE hCurrentModule=GetModuleHandle(NULL);
        AfxSetResourceHandle(hCurrentModule);
		UpdateMenus();
	}
}

void CMainFrame::OnUpdateLanguageEnglish(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(m_hLanguageDLL==NULL);
}

void CMainFrame::OnLanguageRomanian() 
{
	// TODO: Add your command handler code here
    if (!m_hLanguageDLL)
	{
		HMODULE hCurrentModule=m_hLanguageDLL=LoadLibrary("language.dll");
		if (hCurrentModule)
		{
	        AfxSetResourceHandle(hCurrentModule);
			UpdateMenus();		
		}
		else
		{
			MessageBeep(MB_ICONHAND);
			AfxMessageBox("Cannot find the language dynamic link library!", MB_ICONHAND);
		}
	}
}


void CMainFrame::OnUpdateLanguageRomanian(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
    pCmdUI->SetCheck(m_hLanguageDLL!=NULL);
}

void CMainFrame::UpdateMenus()
{
   	CMenu DefaultMenu, MenuOne, MenuTwo;
	// Reload Default
    DefaultMenu.LoadMenu(IDR_MAINFRAME);
    SetMenu(&DefaultMenu);
	::DestroyMenu(m_hMenuDefault);
	m_hMenuDefault=DefaultMenu.m_hMenu;
	DefaultMenu.Detach();
	// Reload IDR_ONE
	MenuOne.LoadMenu(IDR_ONE);
	::DestroyMenu(((CTestApp *)AfxGetApp())->m_pOneTempl->m_hMenuShared);
	((CTestApp *)AfxGetApp())->m_pOneTempl->m_hMenuShared=MenuOne.m_hMenu;
	MenuOne.Detach();
	// Reload IDR_TWO
    MenuTwo.LoadMenu(IDR_TWO);
	::DestroyMenu(((CTestApp *)AfxGetApp())->m_pTwoTempl->m_hMenuShared);
	((CTestApp *)AfxGetApp())->m_pTwoTempl->m_hMenuShared=MenuTwo.m_hMenu;
	MenuTwo.Detach();
}
