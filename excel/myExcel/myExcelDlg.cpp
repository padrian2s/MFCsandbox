// myExcelDlg.cpp : implementation file
//

#include "stdafx.h"
#include "myExcel.h"
#include "myExcelDlg.h"
#include "DlgProxy.h"
#include ".\myexceldlg.h"

#include "CApplication.h"
#include "CWorkbooks.h"
#include "CWorkbook.h"
#include "CWorksheets.h"
#include "CWorksheet.h"
#include "CRange.h"
#include "CFont0.h"
#include "Cnterior.h"
#include "CBorders.h"
#include "CBorder.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CmyExcelDlg dialog




IMPLEMENT_DYNAMIC(CmyExcelDlg, CDialog);
CmyExcelDlg::CmyExcelDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CmyExcelDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pAutoProxy = NULL;
}
CmyExcelDlg::~CmyExcelDlg()
{
	// If there is an automation proxy for this dialog, set
	//  its back pointer to this dialog to NULL, so it knows
	//  the dialog has been deleted.
	if (m_pAutoProxy != NULL)
		m_pAutoProxy->m_pDialog = NULL;
}

void CmyExcelDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CmyExcelDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_CLOSE()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
    ON_BN_CLICKED(IDC_BUTTON1, OnBnClickedButton1)
    ON_BN_CLICKED(IDC_BUTTON2, OnBnClickedButton2)
END_MESSAGE_MAP()


// CmyExcelDlg message handlers

BOOL CmyExcelDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CmyExcelDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CmyExcelDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CmyExcelDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

// Automation servers should not exit when a user closes the UI
//  if a controller still holds on to one of its objects.  These
//  message handlers make sure that if the proxy is still in use,
//  then the UI is hidden but the dialog remains around if it
//  is dismissed.

void CmyExcelDlg::OnClose() 
{
	if (CanExit())
		CDialog::OnClose();
}

void CmyExcelDlg::OnOK() 
{
	if (CanExit())
		CDialog::OnOK();
}

void CmyExcelDlg::OnCancel() 
{
	if (CanExit())
		CDialog::OnCancel();
}

BOOL CmyExcelDlg::CanExit()
{
	// If the proxy object is still around, then the automation
	//  controller is still holding on to this application.  Leave
	//  the dialog around, but hide its UI.
	if (m_pAutoProxy != NULL)
	{
		ShowWindow(SW_HIDE);
		return FALSE;
	}

	return TRUE;
}

void FillSafeArray(OLECHAR FAR* sz, int iRow, int iCol,
                   COleSafeArray* sa)
{

    VARIANT v;
    long index[2];

    index[0] = iRow;
    index[1] = iCol;

    VariantInit(&v);
    v.vt = VT_BSTR;
    v.bstrVal = SysAllocString(sz);
    sa->PutElement(index, v.bstrVal);
    SysFreeString(v.bstrVal);
    VariantClear(&v);

}



void CmyExcelDlg::OnBnClickedButton1()
{
    // Commonly used OLE variants.
    COleVariant
        covTrue((short)TRUE),
        covFalse((short)FALSE),
        covOptional((long)DISP_E_PARAMNOTFOUND, VT_ERROR);

    CApplication app;
    CWorkbooks books;
    CWorkbook book;
    CWorksheets sheets;
    CWorksheet sheet;
    CRange range;
    CFont0 font;
    CRange cols;
    CRange resizedrange;
    Cnterior interior;
    CBorders borders;
    CBorder bottomborder;
    


    // Start Excel and get an Application object.
    if(!app.CreateDispatch("Excel.Application"))
    {
        AfxMessageBox("Couldn't start Excel and get Application object.");
        return;
    }

    //Get a new workbook.
    books = app.get_Workbooks();

    SAFEARRAY *psaString = NULL; 
    SAFEARRAYBOUND bounds = {2, 0};
    psaString = SafeArrayCreate(VT_INT, 1, &bounds);
    
    /*
    //int *i = new int();
    SafeArrayAccessData(psaString, (void**)&i);


    
    SafeArrayAccessData(psaString, (void**)&i);
    SafeArrayUnaccessData(psaString);

    COleSafeArray oSafeArray;
    */

    COleSafeArray oSafeArray;
    DWORD rgElem[2] = {41,2};
    oSafeArray.Create(VT_I4, 2, rgElem);
    long data; 
    long index[2];

    for (int i = 0; i <= 40; i++)
    {
        index[0]= i;
        index[1] = 0;
        data = i + 1;
        oSafeArray.PutElement(index,(void*)(&data));
        index[1] = 1;
        data = 2;
        oSafeArray.PutElement(index,(void*)(&data));
    }

    /*
    index[0]=0;    
    index[1]=0;
    data = 1;
    oSafeArray.PutElement(index,(void*)(&data));

    index[0]=0;
    index[1]=1;
    data = 2;
    oSafeArray.PutElement(index,(void*)(&data));

    index[0]=1;    
    index[1]=0;
    data = 2;
    oSafeArray.PutElement(index,(void*)(&data));

    index[0]=1;
    index[1]=1;
    data = 2;
    oSafeArray.PutElement(index,(void*)(&data));

    index[0]=2;    
    index[1]=0;
    data = 3;
    oSafeArray.PutElement(index,(void*)(&data));

    index[0]=2;
    index[1]=1;
    data = 2;
    oSafeArray.PutElement(index,(void*)(&data));
*/
    
    VARIANT var2;    
    var2.vt = VT_ARRAY | VT_INT;
    var2.pparray = &psaString;

    //Excel::xlColumnDataType.xlTextFormat;
    
    books.OpenText("c:\\a.tsv", covOptional, covOptional, covOptional, 1,
        covOptional, covOptional, covOptional, covOptional,
        covOptional, covOptional, covOptional, oSafeArray, covOptional, covOptional, covOptional, covOptional, covOptional);
        

    //book = books.Add(covOptional);
    VARIANT var;
    var.intVal = 1;
    var.vt = VT_INT;


    book = books.get__Default(var);

    
    //Get the first sheet.
    sheets =book.get_Sheets();
    sheet = sheets.get_Item(COleVariant((short)1));
    
    //range = sheet.get_Range(COleVariant("A1"),COleVariant("Z999"));
    //range.put_NumberFormat(COleVariant("@"));
    //range.put_Value2(COleVariant("1111"));

/*
    //Fill cells A1, B1, C1, and D1 one cell at a time with "headers".
    range = sheet.get_Range(COleVariant("A1"),COleVariant("A1"));
    range.put_Value2(COleVariant("First Name"));

    range = sheet.get_Range(COleVariant("B1"),COleVariant("B1"));
    range.put_Value2(COleVariant("Last Name"));
    range = sheet.get_Range(COleVariant("C1"),COleVariant("C1"));
    range.put_Value2(COleVariant("Full Name"));
    range = sheet.get_Range(COleVariant("D1"),COleVariant("D1"));
    range.put_Value2(COleVariant("Salary"));

    //Format A1:D1 as bold, vertical alignment = center.
    range = sheet.get_Range(COleVariant("A1"), COleVariant("D1"));
    font = range.get_Font();
    font.put_Bold(covTrue);
    range.put_VerticalAlignment(
        COleVariant((short)-4108));   //xlVAlignCenter = -4108

    //Fill A2:B6 with an array of values (First & Last Names).
    {
        COleSafeArray saRet;
        DWORD numElements[]={5,2};   //5x2 element array
        saRet.Create(VT_BSTR, 2, numElements);


        //Fill the 5x2 SafeArray with the following data:
        //   John      Smith
        //   Tom       Brown
        //   Sue       Thomas
        //   Jane      Jones
        //   Adam      Johnson

        FillSafeArray(L"John", 0, 0, &saRet);
        FillSafeArray(L"Smith", 0, 1, &saRet);
        FillSafeArray(L"Tom", 1, 0, &saRet);
        FillSafeArray(L"Brown", 1, 1, &saRet);
        FillSafeArray(L"Sue", 2, 0, &saRet);
        FillSafeArray(L"Thomas", 2, 1, &saRet);

        FillSafeArray(L"Jane", 3, 0, &saRet);
        FillSafeArray(L"Jones", 3, 1, &saRet);
        FillSafeArray(L"Adam", 4, 0, &saRet);
        FillSafeArray(L"Johnson", 4, 1, &saRet);

        range = sheet.get_Range(COleVariant("A2"), COleVariant("B6"));
        range.put_Value2(COleVariant(saRet));

        saRet.Detach();
    }

    //Fill C2:C6 with a relative formula (=A2 & " " & B2).
    range = sheet.get_Range(COleVariant("C2"), COleVariant("C6"));
    range.put_Formula(COleVariant("=A2 & \" \" & B2"));

    //Fill D2:D6 with a formula(=RAND()*100000) and apply a number
    //format.
    range = sheet.get_Range(COleVariant("D2"), COleVariant("D6"));
    range.put_Formula(COleVariant("=RAND()*100000"));
    range.put_NumberFormat(COleVariant("$0.00"));

    //AutoFit columns A:D.
    range = sheet.get_Range(COleVariant("A1"), COleVariant("D1"));
    cols = range.get_EntireColumn();
    cols.AutoFit();

    //Manipulate a variable number of columns for Quarterly Sales Data.
    {
        short NumQtrs;
        CString msg;

        //Determine how many quarters to display data for.
        for(NumQtrs=1;NumQtrs<=3;NumQtrs++)
        {
            msg.Format("Enter sales data for %d quarter(s)?", NumQtrs);
            if(AfxMessageBox(msg,MB_YESNO)==IDYES)
            {
                break;
            }
        }
        msg.Format("Displaying data for %d quarters.", NumQtrs);
        AfxMessageBox(msg);

        //Starting at E1, fill headers for the number of columns selected.
        range = sheet.get_Range(COleVariant("E1"), COleVariant("E1"));
        resizedrange = range.get_Resize(covOptional, COleVariant(NumQtrs));
        resizedrange.put_Formula(
            COleVariant("=\"Q\" & COLUMN()-4 & CHAR(10) & \"Sales\""));
        //Change the Orientation and WrapText properties for the headers.
        resizedrange.put_Orientation(COleVariant((short)38));
        resizedrange.put_WrapText(covTrue);
        //Fill the interior color of the headers.
        interior = resizedrange.get_Interior();
        interior.put_ColorIndex(COleVariant((short)36));

        //Fill the columns with a formula and apply a number format.
        range = sheet.get_Range(COleVariant("E2"), COleVariant("E6"));
        resizedrange = range.get_Resize(covOptional, COleVariant(NumQtrs));
        resizedrange.put_Formula(COleVariant("=RAND()*100"));
        resizedrange.put_NumberFormat(COleVariant("$0.00"));

        //Apply borders to the Sales data and headers.
        range = sheet.get_Range(COleVariant("E1"), COleVariant("E6"));
        resizedrange= range.get_Resize(covOptional, COleVariant(NumQtrs));
        borders = resizedrange.get_Borders();
        borders.put_Weight(COleVariant((short)2));   //xlThin = 2

        //Add a Totals formula for the Quarterly sales data and apply a
        //border.
        range = sheet.get_Range(COleVariant("E8"), COleVariant("E8"));
        resizedrange = range.get_Resize(covOptional, COleVariant(NumQtrs));
        resizedrange.put_Formula(COleVariant("=SUM(E2:E6)"));
        borders = resizedrange.get_Borders();
        {
            bottomborder = borders.get_Item((long)9);
            bottomborder.put_LineStyle(
                COleVariant((short)-4119));   //xlDouble = -4119
            bottomborder.put_Weight(
                COleVariant((short)4));       //xlThick = 4
        }
    }

    //Make the application visible and give the user control of
    //Excel.
    */
    app.put_Visible(TRUE);
    app.put_UserControl(TRUE);

}
void CmyExcelDlg::OnBnClickedButton2()
{
    int i=1;

    if (--i != 0) {
        AfxMessageBox("mda");
    }
    else
    {
        AfxMessageBox("xxx");
    }
}
