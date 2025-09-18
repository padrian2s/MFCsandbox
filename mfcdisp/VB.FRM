VERSION 4.00
Begin VB.Form Form1 
   Caption         =   "Test Client"
   ClientHeight    =   3525
   ClientLeft      =   5070
   ClientTop       =   1695
   ClientWidth     =   2700
   Height          =   3930
   Left            =   5010
   LinkTopic       =   "Form1"
   ScaleHeight     =   3525
   ScaleWidth      =   2700
   Top             =   1350
   Width           =   2820
   Begin VB.CommandButton SetTestProperty 
      Caption         =   "Set TestProperty"
      Height          =   495
      Left            =   240
      TabIndex        =   3
      Top             =   960
      Width           =   2055
   End
   Begin VB.CommandButton InvokeTestMethod 
      Caption         =   "Invoke TestMethod"
      Height          =   495
      Left            =   240
      TabIndex        =   2
      Top             =   2640
      Width           =   2055
   End
   Begin VB.CommandButton GetTestProperty 
      Caption         =   "Get TestProperty"
      Height          =   495
      Left            =   240
      TabIndex        =   1
      Top             =   1800
      Width           =   2055
   End
   Begin VB.CommandButton CreateServer 
      Caption         =   "Create Server"
      Height          =   495
      Left            =   240
      TabIndex        =   0
      Top             =   120
      Width           =   2055
   End
End
Attribute VB_Name = "Form1"
Attribute VB_Creatable = False
Attribute VB_Exposed = False
Dim o As Object

Private Sub CreateServer_Click()
Set o = CreateObject("Test.Document")
End Sub


Private Sub GetTestProperty_Click()
Value = o.TestProperty
Prompt = "Test Property Returned " & Value
MsgBox Prompt, vbOKOnly, "Test Client"
End Sub


Private Sub InvokeTestMethod_Click()
Value = o.TestMethod(99)
Prompt = "TestMethod was passed 99 and Returned " & Value
MsgBox Prompt, vbOKOnly, "Test Client"
End Sub


Private Sub SetTestProperty_Click()
Value = InputBox("Enter an integer to set the property", "Test Client", "1")
o.TestProperty = Value
End Sub


