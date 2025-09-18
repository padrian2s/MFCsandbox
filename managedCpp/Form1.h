#pragma once


namespace managedCpp
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary> 
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class Form1 : public System::Windows::Forms::Form
	{	
	public:
		Form1(void)
		{
			InitializeComponent();
		}
  
	protected:
		void Dispose(Boolean disposing)
		{
			if (disposing && components)
			{
				components->Dispose();
			}
			__super::Dispose(disposing);
		}
    private: System::Windows::Forms::Panel *  panel1;
    private: System::Windows::Forms::Button *  button1;
    private: System::Windows::Forms::ErrorProvider *  errorProvider1;
    private: System::Windows::Forms::TextBox *  textBox1;
    private: System::Windows::Forms::ListView *  listView1;
    private: System::Windows::Forms::ColumnHeader *  columnHeader1;
    private: System::Windows::Forms::ColumnHeader *  columnHeader2;
    private: System::Windows::Forms::ColumnHeader *  columnHeader3;
    private: System::Windows::Forms::ColumnHeader *  columnHeader4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container * components;

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->panel1 = new System::Windows::Forms::Panel();
            this->button1 = new System::Windows::Forms::Button();
            this->errorProvider1 = new System::Windows::Forms::ErrorProvider();
            this->textBox1 = new System::Windows::Forms::TextBox();
            this->listView1 = new System::Windows::Forms::ListView();
            this->columnHeader1 = new System::Windows::Forms::ColumnHeader();
            this->columnHeader2 = new System::Windows::Forms::ColumnHeader();
            this->columnHeader3 = new System::Windows::Forms::ColumnHeader();
            this->columnHeader4 = new System::Windows::Forms::ColumnHeader();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Location = System::Drawing::Point(8, 8);
            this->panel1->Name = S"panel1";
            this->panel1->TabIndex = 0;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(8, 32);
            this->button1->Name = S"button1";
            this->button1->TabIndex = 1;
            this->button1->Text = S"button1";
            this->button1->Click += new System::EventHandler(this, button1_Click);
            // 
            // errorProvider1
            // 
            this->errorProvider1->ContainerControl = this;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(8, 8);
            this->textBox1->Name = S"textBox1";
            this->textBox1->TabIndex = 2;
            this->textBox1->Text = S"textBox1";
            // 
            // listView1
            // 
            this->listView1->CheckBoxes = true;
            System::Windows::Forms::ColumnHeader* __mcTemp__1[] = new System::Windows::Forms::ColumnHeader*[4];
            __mcTemp__1[0] = this->columnHeader1;
            __mcTemp__1[1] = this->columnHeader2;
            __mcTemp__1[2] = this->columnHeader3;
            __mcTemp__1[3] = this->columnHeader4;
            this->listView1->Columns->AddRange(__mcTemp__1);
            this->listView1->FullRowSelect = true;
            this->listView1->Location = System::Drawing::Point(8, 112);
            this->listView1->Name = S"listView1";
            this->listView1->Size = System::Drawing::Size(488, 136);
            this->listView1->TabIndex = 3;
            // 
            // Form1
            // 
            this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
            this->ClientSize = System::Drawing::Size(504, 310);
            this->Controls->Add(this->listView1);
            this->Controls->Add(this->panel1);
            this->Name = S"Form1";
            this->Text = S"Form1";
            this->panel1->ResumeLayout(false);
            this->ResumeLayout(false);

        }	
    private: System::Void button1_Click(System::Object *  sender, System::EventArgs *  e)
             {
                
             }

    };
}


