using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AddCalculator
{
    public partial class Calculator : Form
    {
        public Calculator()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }      

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int a = int.Parse(textBox1.Text.Trim());
            int b = int.Parse(textBox2.Text.Trim());
            textBox3.Text = Convert.ToString(a + b);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int a = int.Parse(textBox1.Text.Trim());
            int b = int.Parse(textBox2.Text.Trim());
            textBox3.Text = Convert.ToString(a - b);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            int a = int.Parse(textBox1.Text.Trim());
            int b = int.Parse(textBox2.Text.Trim());
            textBox3.Text = Convert.ToString(a * b);
        }

        private void button6_Click(object sender, EventArgs e)
        {
            int a = int.Parse(textBox1.Text.Trim());
            int b = int.Parse(textBox2.Text.Trim());
            textBox3.Text = Convert.ToString(a / b);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a = int.Parse(textBox1.Text.Trim());
            int b = int.Parse(textBox2.Text.Trim());
            textBox3.Text = Convert.ToString(a % b);
        }
    }
}
