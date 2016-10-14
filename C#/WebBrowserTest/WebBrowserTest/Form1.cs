using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WebBrowserTest {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }

        private void button1_Click(object sender , EventArgs e) {
            
            for (int i = 61773 ; i >= 61750 ; i--) {
                string codeurl = "http://183.167.205.82:8081/JudgeOnline/showsource?solution_id=" + i.ToString();
                webBrowser1.Navigate(codeurl);
                webBrowser1.Navigate(codeurl);
                webBrowser1.Refresh();
                label1.Text=label1.Text+"第"+i.ToString()+"次成功！";
                StreamWriter sw2 = new StreamWriter(@"K:\1.html" , true);
                sw2.WriteLine(webBrowser1.DocumentText);
                sw2.Close();
            }
        }

        private void Form1_Load(object sender , EventArgs e) {
            string url = "http://183.167.205.82:8081/JudgeOnline/status";
            webBrowser1.Navigate(url);
        }

        private void button2_Click(object sender , EventArgs e) {
            webBrowser1.Navigate("http://183.167.205.82:8081/JudgeOnline/showsource?solution_id=61773");
        }

        private void webBrowser1_Navigated(object sender , WebBrowserNavigatedEventArgs e) {
            
        }
    }
}
