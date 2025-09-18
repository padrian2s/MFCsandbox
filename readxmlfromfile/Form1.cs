using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using System.Diagnostics;
using System.Xml;
using System.IO;
using Oracle.DataAccess.Client;


namespace readxmlfromfile
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.DataGrid dataGrid1;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.Button button3;
		private System.Windows.Forms.Button button4;
		private System.Windows.Forms.Button button5;
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
			this.button2 = new System.Windows.Forms.Button();
			this.button3 = new System.Windows.Forms.Button();
			this.button4 = new System.Windows.Forms.Button();
			this.button5 = new System.Windows.Forms.Button();
			((System.ComponentModel.ISupportInitialize)(this.dataGrid1)).BeginInit();
			this.SuspendLayout();
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(8, 16);
			this.button1.Name = "button1";
			this.button1.TabIndex = 0;
			this.button1.Text = "insert txn";
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// dataGrid1
			// 
			this.dataGrid1.DataMember = "";
			this.dataGrid1.HeaderForeColor = System.Drawing.SystemColors.ControlText;
			this.dataGrid1.Location = new System.Drawing.Point(8, 64);
			this.dataGrid1.Name = "dataGrid1";
			this.dataGrid1.Size = new System.Drawing.Size(592, 368);
			this.dataGrid1.TabIndex = 1;
			// 
			// button2
			// 
			this.button2.Location = new System.Drawing.Point(520, 16);
			this.button2.Name = "button2";
			this.button2.TabIndex = 2;
			this.button2.Text = "oracle";
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// button3
			// 
			this.button3.Location = new System.Drawing.Point(88, 16);
			this.button3.Name = "button3";
			this.button3.Size = new System.Drawing.Size(104, 23);
			this.button3.TabIndex = 3;
			this.button3.Text = "insert acct detail";
			this.button3.Click += new System.EventHandler(this.button3_Click);
			// 
			// button4
			// 
			this.button4.Location = new System.Drawing.Point(288, 16);
			this.button4.Name = "button4";
			this.button4.TabIndex = 4;
			this.button4.Text = "bulk insert";
			this.button4.Click += new System.EventHandler(this.button4_Click);
			// 
			// button5
			// 
			this.button5.Location = new System.Drawing.Point(424, 16);
			this.button5.Name = "button5";
			this.button5.TabIndex = 5;
			this.button5.Text = "button5";
			this.button5.Click += new System.EventHandler(this.button5_Click);
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(608, 446);
			this.Controls.Add(this.button5);
			this.Controls.Add(this.button4);
			this.Controls.Add(this.button3);
			this.Controls.Add(this.button2);
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
									
			string xmlFolder=@"C:\Development\Stored_procedures\Stored_procedures";
			DirectoryInfo dir = new DirectoryInfo(xmlFolder);
			
			dataGrid1.DataSource = dir.GetFiles("3.txnDetails*.xml");
			FileInfo []fi=dir.GetFiles("3.txnDetails*.xml");
							
			int j=0;

			ArrayList file_names=new ArrayList();

			try
			{
				while (j<9999)
				{				
					Trace.WriteLine(fi[j].Name);
					file_names.Add(fi[j].Name);
					j++;
				}
			}
			catch(Exception)
			{
			}
			
			int jj=0;

			StreamWriter sw = new StreamWriter("c:\\txn_insert.txt");

			////////////////////// oracle ////////////////////
			OracleConnection con = new OracleConnection();
			con.ConnectionString = "User Id=cdms;Password=cdms;data source=CDMSDEVEL;";			
						
			try
			{
				con.Open();
			}
			catch(OracleException err)
			{
				Trace.WriteLine(err.Message);
			}


			Trace.WriteLine("Connected to Oracle" + con.ServerVersion);

			Trace.WriteLine("Connected to Oracle" + con.ServerVersion);
			//</ ///////////////////// oracle ////////////////////

			string s="";
			for (jj=0; jj<j; jj++)
			{
				DataSet ds = new DataSet();
				ds.ReadXml(xmlFolder+"\\"+file_names[jj].ToString());
				Trace.WriteLine(file_names[jj].ToString());

				string insertScript="";

				DataTable maintbl = ds.Tables["txnDetails_Response"];
				DataTable tbl = ds.Tables["transaction"];
				
				DataRow mainDR=maintbl.Rows[0];
				
				foreach (DataRow dr in tbl.Rows)
				{
					if (jj==0)
					{				
						s="<?xml version=\"1.0\" encoding=\"UTF-8\" ?><txnDetails_Response xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"txnDetails.xsd\">";
						s+="<pan>"+mainDR[0].ToString()+"</pan>"+"<transactions><transaction>";

						insertScript="insert INTO simCDMStxn values(xmltype('"+s+"</transaction></transactions></txnDetails_Response>'))";							

					}

					string data="";
					for (int i=0; i<tbl.Columns.Count-1; i++)
					{				
						data+="<"+tbl.Columns[i].ToString()+">"+dr[i].ToString().Replace("'", "")+"</"+tbl.Columns[i].ToString()+">";
					}

					if (jj>0)
					{
						insertScript="UPDATE simCDMSTxn SET object_value=appendCHildXML(object_value, '/txnDetails_Response/pan/transactions', xmltype('"+data+"'))";
					}

					//Trace.Write("<"+tbl.Columns[i].ToString()+">"+dr[i].ToString()+"</"+tbl.Columns[i].ToString()+">");
					//insertScript+="</transaction></transactions></txnDetails_Response>";					
					//Trace.WriteLine(insertScript);

					insertScript=insertScript.Replace("&", "&amp;");					
					OracleCommand myOracleCommand = new OracleCommand(insertScript);
					myOracleCommand.Connection = con;
					

					//Trace.WriteLine(insertScript);
					//Trace.WriteLine("----------------------------------------------------------------------");
					try
					{
						myOracleCommand.ExecuteNonQuery();
					}
					catch (OracleException err)
					{
						Trace.WriteLine("x:"+err.Message);
					}
				
					myOracleCommand.Dispose();
					//sw.WriteLine(insertScript);
				}
		}	
			
			con.Close();
			con.Dispose();

			sw.Close();
			/*
				XmlTextReader reader = new XmlTextReader (@"c:\txn.xml");
				while (reader.Read()) 
				{
					switch (reader.NodeType) 
					{
						case XmlNodeType.Element: 
							Trace.Write("<" + reader.Name);
							Trace.WriteLine(">");
							break;
						case XmlNodeType.Text: 
							Trace.WriteLine (reader.Value);
							break;
						case XmlNodeType.EndElement: 
							Trace.Write("</" + reader.Name);
							Trace.WriteLine(">");
							break;
					}
				}
				Console.ReadLine();
			*/
		}

		private void button2_Click(object sender, System.EventArgs e)
		{
			OracleConnection con = new OracleConnection();
			con.ConnectionString = "User Id=cdms;Password=cdms;data source=CDMSDEVEL;";

			try
			{
				con.Open();
			}
			catch(OracleException err)
			{
				Trace.WriteLine(err.Message);
			}

			OracleCommand myOracleCommand = new OracleCommand("insert into test(a) values(10);");
			myOracleCommand.Connection = con;
			myOracleCommand.ExecuteNonQuery();

			Trace.WriteLine("Connected to Oracle" + con.ServerVersion);
			// Close and Dispose OracleConnection object
			con.Close();
			con.Dispose();
			Trace.WriteLine("Disconnected");
		}

		private void button3_Click(object sender, System.EventArgs e)
		{
			string xmlFolder=@"C:\Development\Stored_procedures\Stored_procedures";
			DirectoryInfo dir = new DirectoryInfo(xmlFolder);
			
			dataGrid1.DataSource = dir.GetFiles("2.accountDetails*.xml");
			FileInfo []fi=dir.GetFiles("2.accountDetails*.xml");
							

			int j=0;

			ArrayList file_names=new ArrayList();

			try
			{
				while (j<9999)
				{				
					Trace.WriteLine(fi[j].Name);
					file_names.Add(fi[j].Name);
					j++;
				}
			}
			catch(Exception)
			{
			}
			
			int jj=0;

			StreamWriter sw = new StreamWriter("c:\\txn_insert_acct.txt");

			////////////////////// oracle ////////////////////
			OracleConnection con = new OracleConnection();
			con.ConnectionString = "User Id=cdms;Password=cdms;data source=CDMSDEVEL;";			

			try
			{
				con.Open();
			}
			catch(OracleException err)
			{
				Trace.WriteLine(err.Message);
			}
			Trace.WriteLine("Connected to Oracle" + con.ServerVersion);
			//</ ///////////////////// oracle ////////////////////


			for (jj=0; jj<j; jj++)
			{
				DataSet ds = new DataSet();
				ds.ReadXml(xmlFolder+"\\"+file_names[jj].ToString());
				Trace.WriteLine(file_names[jj].ToString());

				string insertScript="";

				DataTable maintbl = ds.Tables["account"];
				DataTable tbl = ds.Tables["account"];
				
				DataRow mainDR=maintbl.Rows[0];
				
				foreach (DataRow dr in tbl.Rows)
				{
					insertScript="insert INTO simCDMSACCT VALUES (xmltype('";

					insertScript+="<?xml version=\"1.0\" encoding=\"UTF-8\" ?><accountDetails_Response xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"accountDetails.xsd\">";
					//insertScript+="<pan>"+mainDR[0].ToString()+"</pan>"+"<transactions><transaction>";
					insertScript+="<account>";
					for (int i=0; i<tbl.Columns.Count; i++)
					{				
						insertScript+="<"+tbl.Columns[i].ToString()+">"+dr[i].ToString().Replace("'", "")+"</"+tbl.Columns[i].ToString()+">";
					}
					//Trace.Write("<"+tbl.Columns[i].ToString()+">"+dr[i].ToString()+"</"+tbl.Columns[i].ToString()+">");
					insertScript+="</account></accountDetails_Response>";

					insertScript+="'))";
					Trace.WriteLine(insertScript);


					insertScript=insertScript.Replace("&", "&amp;");					
					OracleCommand myOracleCommand = new OracleCommand(insertScript);
					myOracleCommand.Connection = con;
					

					Trace.WriteLine(insertScript);
					Trace.WriteLine("----------------------------------------------------------------------");
					try
					{
						myOracleCommand.ExecuteNonQuery();
					}
					catch (InvalidOperationException err)
					{
						Trace.WriteLine("x:"+err.Message);
					}
				
					myOracleCommand.Dispose();
					//sw.WriteLine(insertScript);
				}
			}	
			
			con.Close();
			con.Dispose();

			sw.Close();		
		}

		private void button4_Click(object sender, System.EventArgs e)
		{
			string xmlFolder=@"C:\Development\Stored_procedures\Stored_procedures";
			DirectoryInfo dir = new DirectoryInfo(xmlFolder);
			
			dataGrid1.DataSource = dir.GetFiles("2.accountDetails*.xml");
			FileInfo []fi=dir.GetFiles("3.txnDetails*.xml");
					
			int j=0;
			string insertScript="";


			ArrayList file_names=new ArrayList();

			try
			{
				while (j<9999)
				{				
					Trace.WriteLine(fi[j].Name);
					file_names.Add(fi[j].Name);
					j++;
				}
			}
			catch(Exception)
			{
			}
			
			int jj=0;
			

					////////////////////// oracle ////////////////////
					OracleConnection con = new OracleConnection();
					con.ConnectionString = "User Id=cdms;Password=cdms;data source=CDMSDEVEL;";			

					try
					{
						con.Open();
					}
					catch(OracleException err)
					{
						Trace.WriteLine(err.Message);
					}
					Trace.WriteLine("Connected to Oracle" + con.ServerVersion);
					//</ ///////////////////// oracle ////////////////////
					
					
										
					for (jj=0; jj<j; jj++)
					{
						Trace.WriteLine("insert into db = "+file_names[jj].ToString());

						FileStream file = new FileStream(xmlFolder+"\\"+file_names[jj].ToString(), FileMode.Open, FileAccess.Read);
						StreamReader sr = new StreamReader(file);

						string s = sr.ReadToEnd();
						s=s.Replace("'", "");

						if (jj==0)
						{				
							s="<?xml version=\"1.0\" encoding=\"UTF-8\" ?><txnDetails_Response xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"txnDetails.xsd\">";
//							s+="<pan>"+mainDR[0].ToString()+"</pan>"+"<transactions><transaction>";

							insertScript="insert INTO simCDMStxn (xmltype('"+s+"'))";							

						}
						else
						{
							insertScript="UPDATE simCDMSTxn SET object_value=appendCHildXML(object_value, '/txnDetails_Response/pan/transactions', xmltype('"+s+"'))";
						}
						
						
						insertScript=insertScript.Replace("&", "&amp;");					
						OracleCommand myOracleCommand = new OracleCommand("", con);
						myOracleCommand.Connection = con;
						myOracleCommand.CommandText=insertScript;
		
						Trace.WriteLine("---------------x");
						Trace.WriteLine(s);
						Trace.WriteLine("--------------</x");						

						try
						{
							myOracleCommand.ExecuteNonQuery();
						}
						catch (OracleException err)
						{
							Trace.WriteLine("x:"+err.Message);
						}
												
						myOracleCommand.Dispose();
						sr.Close();
						file.Close();

					}
		


		}

		private void button5_Click(object sender, System.EventArgs e)
		{
			string xmlFolder=@"C:\Development\DMS_CPP\DMS_CPP\client\presentation\include\";
			DirectoryInfo dir = new DirectoryInfo(xmlFolder);
			FileInfo []fi=dir.GetFiles("*.h");

			ArrayList file_names=new ArrayList();
			int j=0;

			try
			{
				while (j<9999)
				{				
					//Trace.WriteLine(fi[j].Name);
					file_names.Add(fi[j].Name);
					j++;
				}
			}
			catch(Exception)
			{
			}

			
			int jj=0;
			for (jj=0; jj<j; jj++)
			{
				Console.WriteLine(fi[jj].ToString());

				string fff = fi[jj].ToString();

				FileStream file = new FileStream(xmlFolder+@"\\"+fi[jj].ToString(), FileMode.OpenOrCreate, FileAccess.Read);				
				StreamReader sr = new StreamReader(file);				
				string s = sr.ReadToEnd();				
				sr.Close();
				file.Close();
				

				FileStream file2 = new FileStream(xmlFolder+@"\\"+fi[jj].ToString(), FileMode.OpenOrCreate, FileAccess.Write);
				StreamWriter sw = new StreamWriter(file2);
				string fileName = fi[jj].ToString().Replace(".", "_")+"_";
				fileName = fileName.ToUpper();							

				s=s.Replace("#pragma once", "#ifndef _"+fileName+"\n\r \n\r#define _"+fileName+"\n\n");
				s+="\n\n#endif";

				sw.Write(s);
				// Close StreamWriter
				sw.Close();

				// Close file
				file2.Close();
			}

		}		

		}


}
