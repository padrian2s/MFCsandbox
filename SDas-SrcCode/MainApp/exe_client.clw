; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CExe_clientDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "exe_client.h"

ClassCount=4
Class1=CExe_clientApp
Class2=CExe_clientDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_EXE_CLIENT_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Resource4=IDD_SELECTPROGID
Class4=CChoseProgID
Resource5=IDR_MENU1

[CLS:CExe_clientApp]
Type=0
HeaderFile=exe_client.h
ImplementationFile=exe_client.cpp
Filter=N

[CLS:CExe_clientDlg]
Type=0
HeaderFile=exe_clientDlg.h
ImplementationFile=exe_clientDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CExe_clientDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=exe_clientDlg.h
ImplementationFile=exe_clientDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_EXE_CLIENT_DIALOG]
Type=1
Class=CExe_clientDlg
ControlCount=0

[MNU:IDR_MENU1]
Type=1
Class=?
Command1=ID_FILE_INSERTCONTROL
Command2=ID_DESTROYCONTROL
Command3=ID_EXIT
Command4=ID_HELP_ABOUT
CommandCount=4

[DLG:IDD_SELECTPROGID]
Type=1
Class=CChoseProgID
ControlCount=5
Control1=IDC_PROGID,edit,1350631552
Control2=IDOK,button,1342242817
Control3=IDCANCEL,button,1342242816
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352

[CLS:CChoseProgID]
Type=0
HeaderFile=ChoseProgID.h
ImplementationFile=ChoseProgID.cpp
BaseClass=CDialog
Filter=D
LastObject=CChoseProgID
VirtualFilter=dWC

