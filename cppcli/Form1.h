#pragma once


namespace cppcli
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
	private: System::Windows::Forms::Button *  button1;
	private: System::Windows::Forms::ListView *  listView1;

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
			this->button1 = new System::Windows::Forms::Button();
			this->listView1 = new System::Windows::Forms::ListView();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 288);
			this->button1->Name = S"button1";
			this->button1->Size = System::Drawing::Size(80, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = S"button1";
			this->button1->Click += new System::EventHandler(this, button1_Click);
			// 
			// listView1
			// 
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(248, 32);
			this->listView1->Name = S"listView1";
			this->listView1->Size = System::Drawing::Size(248, 144);
			this->listView1->TabIndex = 1;
			this->listView1->View = System::Windows::Forms::View::List;
			// 
			// Form1
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->ClientSize = System::Drawing::Size(568, 326);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button1);
			this->Name = S"Form1";
			this->Text = S"Form1";
			this->ResumeLayout(false);

		}	
	private: System::Void button1_Click(System::Object *  sender, System::EventArgs *  e)
			 {

			 }

	};
}


