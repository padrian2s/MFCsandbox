// LoopSlider.cpp : implementation file
//

#include "stdafx.h"

#include "LoopSlider.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLoopSlider



BEGIN_MESSAGE_MAP(CLoopSlider, CSliderCtrl)
	//{{AFX_MSG_MAP(CLoopSlider)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
ON_WM_HSCROLL_REFLECT()
END_MESSAGE_MAP()

//////////////////////////////////////////
CLoopSlider::CLoopSlider() : CSliderCtrl()
{
	
	m_iMax=0;
	m_iMin=0;
	m_iPosition=0;
	
}




CLoopSlider::~CLoopSlider()
{
	

}

///////////////////////////////////////////////////
void CLoopSlider::SetSlidePos( const int pos )
{
	
	m_iPosition = pos;
	
	SetPos( m_iPosition );
}

/////////////////////////////////////////////////////////////////////
void CLoopSlider::SetSlideRange( const int imin, const int imax )
{
	m_iMin = imin;
	m_iMax = imax;
	SetRange( m_iMin, m_iMax );
}




////////////////////////////////////////////////////////////////////
void CLoopSlider::HScroll(UINT ncode, UINT pos )
{
	
	
	if(theApp.m_ThreadsState ==END)
	{
		CSliderCtrl::OnVScroll( ncode, pos, NULL );
		m_iPosition = GetPos();
		CString str,code;
		char buf[2];
		CStdioFile fw;
		itoa(m_iPosition,buf,10);
		int sliderId=GetDlgCtrlID();
		CWnd* pWnd;
		str=(CString)buf;// the current position of the slider in string format
		switch(sliderId)
		{
			case IDC_SLIDER_T1:
				{
					pWnd=theApp.m_pMainWnd ->GetDlgItem(IDC_STATIC_T1);
					fw.Open ("slider1.txt",CFile::modeWrite);
					fw.WriteString (str);// writing the slider position to file
					fw.Close();
					
					//Displaying the code part with the new slider position which is set to the factor in the loop
					code="... ;                                                               ";
					code+="for ( int i = 0 ; i <80 ; i++)                                     ";
					code+="{                                                                      ";
					code+="for ( int p = 0 ; p <";
					code+=buf;
					code+="*800;p++);";
					code+="                         dcObject .TextOut( ThreadsNr ) ;";
					code+="                 ... ;                                                    ";
					code+="      }                                                              ";
					code+="... ;                                                       ";
					pWnd->SetWindowText (code);
					pWnd->ShowWindow (SW_SHOW);
					
					break;
				}
			case IDC_SLIDER_T2:
				{
					pWnd=theApp.m_pMainWnd ->GetDlgItem(IDC_STATIC_T2);
					fw.Open ("slider2.txt",CFile::modeWrite);
					fw.WriteString (str);
					fw.Close();
					//Displaying the code part with the new slider position which is set to the factor in the loop
					code="... ;                                                               ";
					code+="for ( int i = 0 ; i <80 ; i++)                                     ";
					code+="{                                                                      ";
					code+="for ( int p = 0 ; p <";
					code+=buf;
					code+="*800;p++);";
					code+="                         dcObject .TextOut( ThreadsNr ) ;";
					code+="                 ... ;                                                    ";
					code+="      }                                                              ";
					code+="... ;                                                       ";
					pWnd->SetWindowText (code);
					pWnd->ShowWindow (SW_SHOW);
					break;
				}
			case IDC_SLIDER_T3:
				{
					pWnd=theApp.m_pMainWnd ->GetDlgItem(IDC_STATIC_T3);
					fw.Open ("slider3.txt",CFile::modeWrite);
					fw.WriteString (str);
					fw.Close();
					//Displaying the code part with the new slider position which is set to the factor in the loop
					code="... ;                                                               ";
					code+="for ( int i = 0 ; i <80 ; i++)                                     ";
					code+="{                                                                      ";
					code+="for ( int p = 0 ; p <";
					code+=buf;
					code+="*800;p++);";
					code+="                         dcObject .TextOut( ThreadsNr ) ;";
					code+="                 ... ;                                                    ";
					code+="      }                                                              ";
					code+="... ;                                                       ";
					pWnd->SetWindowText (code);
					pWnd->ShowWindow (SW_SHOW);
					break;
				}
				
			case IDC_SLIDER_T4:
				{
					pWnd=theApp.m_pMainWnd ->GetDlgItem(IDC_STATIC_T4);
					fw.Open ("slider4.txt",CFile::modeWrite);
					fw.WriteString (str);
					fw.Close();
					//Displaying the code part with the new slider position which is set to the factor in the loop
					code="... ;                                                               ";
					code+="for ( int i = 0 ; i <80 ; i++)                                     ";
					code+="{                                                                      ";
					code+="for ( int p = 0 ; p <";
					code+=buf;
					code+="*800;p++);";
					code+="                         dcObject .TextOut( ThreadsNr ) ;";
					code+="                 ... ;                                                    ";
					code+="      }                                                              ";
					code+="... ;                                                       ";
					pWnd->SetWindowText (code);
					pWnd->ShowWindow (SW_SHOW);
					break;
				}
			case IDC_SLIDER_T5:
				{
					pWnd=theApp.m_pMainWnd ->GetDlgItem(IDC_STATIC_T5);
					fw.Open ("slider5.txt",CFile::modeWrite);
					fw.WriteString (str);
					fw.Close();
					//Displaying the code part with the new slider position which is set to the factor in the loop
					code="... ;                                                               ";
					code+="for ( int i = 0 ; i <80 ; i++)                                     ";
					code+="{                                                                      ";
					code+="for ( int p = 0 ; p <";
					code+=buf;
					code+="*800;p++);";
					code+="                         dcObject .TextOut( ThreadsNr ) ;";
					code+="                 ... ;                                                    ";
					code+="      }                                                              ";
					code+="... ;                                                       ";
					pWnd->SetWindowText (code);
					pWnd->ShowWindow (SW_SHOW);
					break;
				}
				break;
		}
		
	}
}

		




///////////////////////////////////////
int CLoopSlider::GetSliderPos (){return m_iPosition;}


///////////////////////////////////
void CLoopSlider::initSlider()


{
 SetSlideRange( 1,9 );
 SetSlidePos (1);
}


/////////////////////////////////////////////////////////////////////////////
// CLoopSlider message handlers
