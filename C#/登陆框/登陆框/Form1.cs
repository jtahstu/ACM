using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 登陆框 {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }

        private void button1_Click(object sender , EventArgs e) {
            string name = textBox1.Text.Trim();
            string password = textBox2.Text;
            if (radioButton1.Checked) {
                if (name.Equals("student") && password.Equals("123")) {
                    MessageBox.Show("You are student!");
                } else {
                    MessageBox.Show("Failed");
                    textBox1.Clear();
                    textBox2.Clear();
                    textBox1.Focus();
                }
            } else {
                if (name.Equals("teacher") && password.Equals("321")) {
                    MessageBox.Show("You are teacher!");
                } else {
                    MessageBox.Show("Failed");
                    textBox1.Clear();
                    textBox2.Clear();
                    textBox1.Focus();
                }
            }

        }
    }
}
