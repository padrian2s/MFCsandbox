; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CThreadedDialogDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ThreadedDialog.h"

ClassCount=4
Class1=CThreadedDialogApp
Class2=CThreadedDialogDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_THREADED_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Class4=a
Resource4=IDD_MESSAGE_DIALOG

[CLS:CThreadedDialogApp]
Type=0
HeaderFile=ThreadedDialog.h
ImplementationFile=ThreadedDialog.cpp
Filter=N

[CLS:CThreadedDialogDlg]
Type=0
HeaderFile=ThreadedDialogDlg.h
ImplementationFile=ThreadedDialogDlg.cpp
Filter=D
LastObject=CThreadedDialogDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=ThreadedDialogDlg.h
ImplementationFile=ThreadedDialogDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MESSAGE_DIALOG]
Type=1
Class=a
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDC_STATIC_MESSAGE,static,1342308352
Control3=IDC_BUTTON1,button,1073807360

[DLG:IDD_THREADED_DIALOG]
Type=1
Class=CThreadedDialogDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352

[CLS:a]
Type=0
HeaderFile=a.h
ImplementationFile=a.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_BUTTON1

