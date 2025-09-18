using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using System.IO;
using System.Diagnostics;
using System.Text.RegularExpressions;

namespace addRedundantGuards
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.DataGrid dataGrid1;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		public Form1()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();

			//
			// TODO: Add any constructor code after InitializeComponent call
			//
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if (components != null) 
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.button1 = new System.Windows.Forms.Button();
			this.dataGrid1 = new System.Windows.Forms.DataGrid();
			((System.ComponentModel.ISupportInitialize)(this.dataGrid1)).BeginInit();
			this.SuspendLayout();
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(16, 16);
			this.button1.Name = "button1";
			this.button1.TabIndex = 0;
			this.button1.Text = "button1";
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// dataGrid1
			// 
			this.dataGrid1.DataMember = "";
			this.dataGrid1.HeaderForeColor = System.Drawing.SystemColors.ControlText;
			this.dataGrid1.Location = new System.Drawing.Point(16, 48);
			this.dataGrid1.Name = "dataGrid1";
			this.dataGrid1.Size = new System.Drawing.Size(472, 216);
			this.dataGrid1.TabIndex = 1;
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(512, 326);
			this.Controls.Add(this.dataGrid1);
			this.Controls.Add(this.button1);
			this.Name = "Form1";
			this.Text = "Form1";
			((System.ComponentModel.ISupportInitialize)(this.dataGrid1)).EndInit();
			this.ResumeLayout(false);

		}
		#endregion

		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main() 
		{
			Application.Run(new Form1());
		}

		private void button1_Click(object sender, System.EventArgs e)
		{
			string xmlFolder=@"C:\tmp\guards\MainApp\";
			DirectoryInfo dir = new DirectoryInfo(xmlFolder);
						
			dataGrid1.DataSource = dir.GetFiles("*.cpp");
			FileInfo []fi=dir.GetFiles("*.cpp");

			for (int i=0; i<=2; i++)
			{
				Trace.WriteLine("Filename:"+fi[i].FullName.ToString());

				FileStream file = new FileStream(fi[i].FullName, FileMode.Open, FileAccess.ReadWrite);
				StreamReader sr = new StreamReader(file);
				
				while (sr.Peek()>0)				
				{
					string s = sr.ReadLine();
					
					int j = s.IndexOf("#include \"");
					if (j==0)
					{
						int start = s.IndexOf("\"");
						int end = s.IndexOf("\"", start+1);

						if (start > 0 && end>0)
						{						
							string ss = s.Substring(start+1, end-start-1);							
							string file4ifdef = ss.Replace(".", "_").ToUpper();

							string rep = s.Replace("#include \""+ss+"\"", "#ifdef _"+file4ifdef+"_");
							Trace.WriteLine(rep);
						}
					}
				}
								
			}
		}
	}
}
