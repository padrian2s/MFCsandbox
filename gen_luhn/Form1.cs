using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using System.Diagnostics;

namespace gen_luhn
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
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.TextBox textBox1;
		private int nr;

		public Form1()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();
			nr=1;
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
			this.button2 = new System.Windows.Forms.Button();
			this.textBox1 = new System.Windows.Forms.TextBox();
			this.SuspendLayout();
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(24, 16);
			this.button1.Name = "button1";
			this.button1.TabIndex = 0;
			this.button1.Text = "gen luhn";
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// button2
			// 
			this.button2.Location = new System.Drawing.Point(16, 64);
			this.button2.Name = "button2";
			this.button2.TabIndex = 1;
			this.button2.Text = "++";
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// textBox1
			// 
			this.textBox1.Location = new System.Drawing.Point(96, 64);
			this.textBox1.Name = "textBox1";
			this.textBox1.TabIndex = 2;
			this.textBox1.Text = "textBox1";
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(292, 266);
			this.Controls.Add(this.textBox1);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.button1);
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

		int[] CreateNumber(int length)
		{
			Random random = new Random();
			string foo="";
			int i=0;
			int[] digits = new int[length];
			for(i = 0; i < length - 1; i++)
			{
				digits[i] = random.Next(10);
			}

			digits[0]=6;
			digits[1]=5;
			digits[2]=6;
			digits[3]=7;
			digits[4]=6;
			digits[5]=1;
			digits[6]=9;
			digits[7]=5;
			digits[8]=4;
			digits[9]=0;
			//digits[9]=nr;

			for (i=0; i<10; i++)
				foo+=digits[i].ToString();
			
			long nrP=Convert.ToInt64(foo);

			nrP+=nr;

			string ff=Convert.ToString(nrP);

			for (i=0; i<10; i++)
				digits[i]=Convert.ToInt32(ff[i]);

			foo="";
			for (i=0; i<10; i++)
				foo+=digits[i].ToString();

			int sum = 0;
			bool alt = true;
			for(i = length - 2; i >= 0; i--)
			{
				if(alt)
				{
					int temp = digits[i];
					temp *= 2;
					if(temp > 9)
					{
						temp -= 9;
					}
					sum += temp;
				}
				else
				{
					sum += digits[i];
				}
				alt = !alt;
			}
			int modulo = sum % 10;
			if(modulo > 0)
			{
				digits[length-1] = 10 - modulo;
			}
			return digits;
		}

		private void button1_Click(object sender, System.EventArgs e)
		{
			string foo="";
			
			int []j=CreateNumber(10);

			for (int i=0; i<10; i++)
				foo+=j[i].ToString();

			Trace.WriteLine(foo);
		}

		private void button2_Click(object sender, System.EventArgs e)
		{
			nr++;
			textBox1.Text=nr.ToString();
		}
	}
}
