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

namespace 博客轰炸机2._0 {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }
        System.Net.WebClient client = new WebClient();
        List<string> list = new List<string>();
        int sum = 0;
        Thread Th_1;
        private void button1_Click(object sender , EventArgs e) {
            Th_1 = new Thread(gan);
            Th_1.IsBackground = true;
            Th_1.Start();
        }
        /// <summary>
        /// 事先准备阶段，包括获取文章链接和左边txtbox的显示
        /// </summary>
        private void gan() {
            try {
                string id = name.Text;
                string url = @"http://blog.csdn.net/" + id + @"/article/list/100";
                Stream strm = client.OpenRead(url);
                StreamReader sr = new StreamReader(strm);
                string html_code = sr.ReadToEnd();
                strm.Close();
                sr.Close();
                int start = html_code.IndexOf(" class=\"list\"") , sta = 0;
                int end = html_code.IndexOf("<div id=\"papelist\" class=\"pagelist\">");
                for (int i = 0 ; i < 500 * 3 ; i++) {
                    sta = html_code.IndexOf("article/details/" , start);
                    if (sta > 10) {
                        string count = html_code.Substring(sta + 16 , 8);
                        if (!Char.IsDigit(count[count.Length - 1]))
                            count = count.Substring(0 , 7);
                        string Temp_url = @"http://blog.csdn.net/" + id + @"/article/details/" + count;
                        if (!list.Contains(Temp_url)) {
                            list.Add(Temp_url);
                            sum++;
                        }
                        start = sta + 50;
                    }
                    if (sta > end)
                        break;
                }
                ListShow.AppendText("目前在该博客检测到" + sum.ToString() + "篇博文\r\n");
                foreach (var show in list) {
                    ListShow.AppendText(show + "\r\n");
                }
                boom();
            } catch (Exception ex) {
                MessageBox.Show(ex.Message);
            }
        }
        /// <summary>
        /// 轰炸部分，包括右边txtbox的显示部分
        /// </summary>
        private void boom() {
            int count = int.Parse(Count.Text);
            string[] link = list.ToArray();
            for (int i = 1 ; i <= count ; i++) {
                if (i % 1 == 0)
                    TextShow.AppendText("哎呦，不错呦 O(∩_∩)O~\r\n");
                if (i % 2 == 0)
                    TextShow.AppendText("哎呦，太牛X了 O(∩_∩)O~\r\n");
                if (i % 5 == 0)
                    TextShow.AppendText("哎呦，程序已经暴走 O(∩_∩)O~\r\n");
                if (i % 10 == 0)
                    TextShow.AppendText("哎呦，这是要超神的节奏 O(∩_∩)O~\r\n");
                if (i % 15 == 0)
                    TextShow.AppendText("哎呦，虽然很装逼，可不要贪杯哦 O(∩_∩)O~\r\n");
                if (i % 20 == 0)
                    TextShow.AppendText("哎呦，装逼有点过度哦 O(∩_∩)O~\r\n");
                if (i % 25 == 0)
                    TextShow.AppendText("哎呦，叼的一比哦 O(∩_∩)O~\r\n");
                if (i % 30 == 0)
                    TextShow.AppendText("哎呦，赶紧关了吧，电脑要炸了 O(∩_∩)O~\r\n");
                for (int j = 1 ; j <= sum ; j++) {
                    try {
                        TextShow.AppendText("目前正在第" + i.ToString() + "次轰炸第" + j.ToString() + "条链接...\r\n");
                        Stream st = client.OpenRead(link[j - 1]);
                        st.Close();

                    } catch (Exception exc) {
                        TextShow.AppendText(exc.Message + "\r\n");
                        continue;
                    }
                }
            }
            TextShow.AppendText("OK nice 博客按指定次数轰炸完毕了！");
        }

        private void 声明ToolStripMenuItem_Click(object sender , EventArgs e) {

            MessageBox.Show("本软件为作者一时兴起之产物，可能对CSDN形成DDos攻击，如产生任何不良后果请使用者自负，与作者无关！");
        }

        private void Form1_Load(object sender , EventArgs e) {
            Control.CheckForIllegalCrossThreadCalls = false;
        }

        private void 注意事项ToolStripMenuItem_Click(object sender , EventArgs e) {
            string p1 = "       本软件在1.0的基础上做出了很大的改变，首先就是从控制台程序到WinForm界面操作的突破，然后在设计上更加简化，只需输入用户名和轰炸的次数即可，简单快捷！\r\n";
            string p2 = "       如果出现右边显示栏停止显示，就像卡住了似的，一般是正常情况，那是程序抛出了异常造成的程序短暂性卡顿，这种异常往往是本机网络的异常和CSDN服务器未响应而造成的，耐心等待即可。\r\n";
            string p3 = "       若程序一直抛异常，可以重新启动本程序，再继续，因为这个时候可能正处于某种持续性异常下，或者服务器检测到你这个IP的大量流量访问，被服务器屏蔽了，这个是作者猜测的，毕竟服务器肯定会有相应程序来自保的，不然岂不死机了，如果只是一两次那等一会就好了！";
            string s = p1 + p2 + p3;
            MessageBox.Show(s);
        }

        private void button2_Click(object sender , EventArgs e) {
            try {
                Th_1.IsBackground = false;
                Th_1.Abort();
                TextShow.AppendText("OK nice 博客轰炸机已经停止运行了！");
            } catch (Exception ee) {
                TextShow.AppendText(ee.Message);
            }
            
        }
    }
}
