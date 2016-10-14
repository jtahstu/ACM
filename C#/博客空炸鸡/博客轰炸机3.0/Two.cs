using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 博客轰炸机3._0 {
    public partial class Two : Form {
        public Two() {
            InitializeComponent();
        }

        private void button1_Click(object sender , EventArgs e) {
            Thread th = new Thread(gao);
            th.IsBackground = true;
            th.Start();
        }
        private void gao() {
            System.Net.WebClient client = new WebClient();
            string[] s = link.Text.Split(new char[] { '\n' ,' '});
            for (int i = 1 ; i <= int.Parse(count.Text) ; i++) {
                for (int j = 0 ; j < s.Length ; j++) {
                    try {
                        Stream strm = client.OpenRead(s[j]);
                        strm.Close();
                        show.AppendText("目前正在第" + i.ToString() + "次轰炸第" + j.ToString() + "条链接...\n");
                    } catch (Exception exc) {
                        show.AppendText(exc.Message);
                        continue;
                    }
                }
            }
            show.AppendText("ok nice 按指定次数轰炸完毕！");
        }

    }
}
