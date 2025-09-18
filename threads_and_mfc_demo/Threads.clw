; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CThreadsDlg
LastTemplate=CSliderCtrl
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Threads.h"

ClassCount=4
Class1=CThreadsApp
Class2=CThreadsDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_THREADS_DIALOG
Resource4=IDD_ABOUTBOX (English (U.S.))
Class4=CLoopSlider
Resource5=IDD_THREADS_DIALOG (English (U.S.))

[CLS:CThreadsApp]
Type=0
HeaderFile=Threads.h
ImplementationFile=Threads.cpp
Filter=N

[CLS:CThreadsDlg]
Type=0
HeaderFile=ThreadsDlg.h
ImplementationFile=ThreadsDlg.cpp
Filter=D
LastObject=CThreadsDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=ThreadsDlg.h
ImplementationFile=ThreadsDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Class=CAboutDlg


[DLG:IDD_THREADS_DIALOG]
Type=1
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Class=CThreadsDlg

[DLG:IDD_THREADS_DIALOG (English (U.S.))]
Type=1
Class=CThreadsDlg
ControlCount=17
Control1=IDC_LIST1,listbox,1352728833
Control2=IDC_STATIC_T1,static,1342308352
Control3=IDC_STATIC_T2,static,1342308352
Control4=IDC_SLIDER_T1,msctls_trackbar32,1342242825
Control5=IDC_SLIDER_T2,msctls_trackbar32,1342242825
Control6=IDC_STATIC_T3,static,1342308352
Control7=IDC_STATIC_T5,static,1342308352
Control8=IDC_SLIDER_T3,msctls_trackbar32,1342242825
Control9=IDC_SLIDER_T4,msctls_trackbar32,1342242825
Control10=IDC_STATIC_T4,static,1342308352
Control11=IDC_SLIDER_T5,msctls_trackbar32,1342242825
Control12=IDC_SPEAKER,{2398E32F-5C6E-11D1-8C65-0060081841DE},1073807360
Control13=IDC_STATIC,static,1342308352
Control14=IDC_STATIC,static,1342308352
Control15=IDC_STATIC,static,1342308352
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[CLS:CLoopSlider]
Type=0
HeaderFile=LoopSlider.h
ImplementationFile=LoopSlider.cpp
BaseClass=CSliderCtrl
Filter=W

