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
    public partial class One : Form {
        public One() {
            InitializeComponent();
        }

        private void button1_Click(object sender , EventArgs e) {
            Thread th = new Thread(gao);
            th.IsBackground = true;
            th.Start();
        }
        private void gao() {
            System.Net.WebClient client = new WebClient();
            for (int i = 1 ; i <= int.Parse(count.Text) ; i++) {
                try {
                    Stream strm = client.OpenRead(link.Text);
                    strm.Close();
                    show.AppendText("目前正在执行第" + i.ToString() + "次轰炸...\n");
                    if (i % 100 == 0)
                        show.AppendText("哎呦，不错呦 O(∩_∩)O~\n");
                    if (i % 200 == 0)
                        show.AppendText("哎呦，太牛X了 O(∩_∩)O~\n");
                    if (i % 500 == 0)
                        show.AppendText("哎呦，程序已经暴走 O(∩_∩)O~\n");
                    if (i % 1000 == 0)
                        show.AppendText("哎呦，这是要超神的节奏 O(∩_∩)O~\n");
                    if (i % 2000 == 0)
                        show.AppendText("哎呦，虽然很装逼，可不要贪杯哦 O(∩_∩)O~\n");
                    if (i % 4000 == 0)
                        show.AppendText("哎呦，装逼有点过度哦 O(∩_∩)O~\n");
                    if (i % 80000 == 0)
                        show.AppendText("哎呦，叼的一比哦 O(∩_∩)O~\n");
                    if (i % 10000 == 0)
                        show.AppendText("哎呦，赶紧关了吧，电脑要炸了 O(∩_∩)O~\n");

                } catch (Exception exc) {
                    show.AppendText(exc.Message);
                    continue;
                }
            }
            show.AppendText("ok nice 按指定次数轰炸完毕！");
        }

        private void One_Load(object sender , EventArgs e) {
            Control.CheckForIllegalCrossThreadCalls = false;
        }
    }
}
