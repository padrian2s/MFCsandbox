using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using System.Net.Sockets;

namespace WindowsApplication3
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.TextBox textBox1;
		private System.Windows.Forms.TextBox textBox2;
		private System.Windows.Forms.TextBox textBox3;
		private System.Windows.Forms.TextBox textBox4;
		private System.Windows.Forms.Button button2;
		
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
			this.textBox1 = new System.Windows.Forms.TextBox();
			this.textBox2 = new System.Windows.Forms.TextBox();
			this.textBox3 = new System.Windows.Forms.TextBox();
			this.textBox4 = new System.Windows.Forms.TextBox();
			this.button2 = new System.Windows.Forms.Button();
			this.SuspendLayout();
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(24, 24);
			this.button1.Name = "button1";
			this.button1.TabIndex = 0;
			this.button1.Text = "send";
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// textBox1
			// 
			this.textBox1.Location = new System.Drawing.Point(336, 24);
			this.textBox1.Name = "textBox1";
			this.textBox1.TabIndex = 1;
			this.textBox1.Text = "1";
			// 
			// textBox2
			// 
			this.textBox2.Location = new System.Drawing.Point(16, 80);
			this.textBox2.Multiline = true;
			this.textBox2.Name = "textBox2";
			this.textBox2.Size = new System.Drawing.Size(424, 176);
			this.textBox2.TabIndex = 2;
			this.textBox2.Text = "textBox2";
			// 
			// textBox3
			// 
			this.textBox3.Location = new System.Drawing.Point(24, 48);
			this.textBox3.Name = "textBox3";
			this.textBox3.Size = new System.Drawing.Size(136, 20);
			this.textBox3.TabIndex = 3;
			this.textBox3.Text = "172.22.14.43";
			// 
			// textBox4
			// 
			this.textBox4.Location = new System.Drawing.Point(168, 48);
			this.textBox4.Name = "textBox4";
			this.textBox4.Size = new System.Drawing.Size(48, 20);
			this.textBox4.TabIndex = 4;
			this.textBox4.Text = "54321";
			// 
			// button2
			// 
			this.button2.Location = new System.Drawing.Point(104, 24);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(24, 23);
			this.button2.TabIndex = 5;
			this.button2.Text = "button2";
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(448, 266);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.textBox4);
			this.Controls.Add(this.textBox3);
			this.Controls.Add(this.textBox2);
			this.Controls.Add(this.textBox1);
			this.Controls.Add(this.button1);
			this.Name = "Form1";
			this.Text = "Form1";
			this.Load += new System.EventHandler(this.Form1_Load);
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
			Socket m_socClient = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
			string szIPSelected = textBox3.Text;
			string szPort = textBox4.Text;
			
			byte[] byData = new byte[256];
			int alPort = System.Convert.ToInt32 (szPort,10);

			System.Net.IPAddress remoteIPAddress = System.Net.IPAddress.Parse(szIPSelected);
			System.Net.IPEndPoint remoteEndPoint = new System.Net.IPEndPoint(remoteIPAddress, alPort);
			
			int j=System.Convert.ToInt32(textBox1.Text), i=0;
			m_socClient.Connect(remoteEndPoint);
			
			Color prev=button1.BackColor;
			button1.BackColor=Color.Red;

			while (i<j)
			{						
				string szData = " <?xml version=\"1.0\" encoding=\"UTF-8 standalone=\"no\" ?><checkVersion xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"clientOperations.xsd\"><version>2.1.8</version></checkVersion>";
				byData = System.Text.Encoding.ASCII.GetBytes(szData);
//				m_socClient.Send(byData);
				m_socClient.Receive(byData, 0, byData.Length, 0);
				textBox2.Text=Convert.ToString(byData);
				i++;
			}
			
			button1.BackColor=prev;
		}

		private void button2_Click(object sender, System.EventArgs e)
		{
			button1.BackColor=Color.Red;
		}

		private void Form1_Load(object sender, System.EventArgs e)
		{
		
		}

	}
}
