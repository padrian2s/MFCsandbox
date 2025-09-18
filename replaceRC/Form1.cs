using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using System.IO;
using System.Diagnostics;

namespace replaceRC
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Button button1;
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
			this.SuspendLayout();
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(16, 24);
			this.button1.Name = "button1";
			this.button1.TabIndex = 0;
			this.button1.Text = "replace";
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(416, 326);
			this.s.Add(this.button1);
			this.Name = "Form1";
			this.Text = "Form1";
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
			FileStream file = new FileStream("c:\\Eng-Ger4.csv", FileMode.Open, FileAccess.Read);
			StreamReader sr = new StreamReader(file);

			string s = sr.ReadToEnd();
				
			sr.Close();
			file.Close();

			string []splited = s.Split('`');
			int i = 0;

			string [,] tab = new string[600,2];
					
			bool b1 = true, b2 = true;
			int tx=0;

			for (int t = 1; t<=557; t++)
			{
				if (splited[t].Length>1 && splited[t]!=null)
				{					
					if (splited[t][0]==',')
					{
						splited[t] = splited[t].Substring(1, splited[t].Length-1);
					}

					if (splited[t][splited[t].Length-1]==',')
					{
						splited[t] = splited[t].Substring(0, splited[t].Length-1);
					}

					if (t%2 != 0)
					{
						//tab[i, 0] = splited[t];
						tab[i, 0] =	splited[t];
						tab[i, 0] = tab[i, 0].Replace("\n", "");
						tab[i, 0] = tab[i, 0].Replace("\r", "");
						b1=false;
					}
					else
					{
						tab[i, 1]= splited[t];
						tab[i, 1] = tab[i, 1].Replace("\n", "");
						tab[i, 1] = tab[i, 1].Replace("\r", "");
						b2=false;
					}

					if (!b1 && !b2)
					{
						i++;
						b1=true;
						b2=true;
					}
				}
			}

			FileStream file2 = new FileStream("c:\\deu.rc", FileMode.Open, FileAccess.ReadWrite);			
			FileStream file4 = new FileStream("c:\\deu2.rc", FileMode.Create, FileAccess.ReadWrite);

			StreamReader sr2 = new StreamReader(file2);
			StreamWriter sw = new StreamWriter(file4);

			string ss = sr2.ReadToEnd();
			
			string test = @"""";
			for (int t = 0; t<=276; t++)
			{
				if (tab[t,0]!="PAN")
				ss=ss.Replace(tab[t,0], tab[t, 1]);
			}
			
			sw.Write(ss);
			sw.Close();

			sr2.Close();
			file2.Close();

			file4.Close();

		}
	}
}
