using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Net;
using System.Threading;

namespace 博客空炸鸡_固定连接 {
    class Program {
        /// <summary>
        /// 用try catch,然后写continue的话，这个程序不跑完绝对不会停止，如果出现异常，就继续尝试，这样正和我意
        /// good job O(∩_∩)O哈哈~
        /// </summary>
        /// <param name="args"></param>
        static void Main(string[] args) {
            System.Net.WebClient client = new WebClient();
            //string[] jt ={
            //               "http://blog.csdn.net/jtahstu/article/details/44779547",
            //               "http://blog.csdn.net/jtahstu/article/details/44779627",
            //               "http://blog.csdn.net/jtahstu/article/details/44779677",
            //               "http://blog.csdn.net/jtahstu/article/details/44779733",
            //               "http://blog.csdn.net/jtahstu/article/details/45081267"
            //           };
            //string[] akoj1 ={
            //                   "http://blog.csdn.net/jtahstu/article/details/39481689",
            //                   "http://blog.csdn.net/jtahstu/article/details/39483577",
            //                   "http://blog.csdn.net/jtahstu/article/details/39483603",
            //                   "http://blog.csdn.net/jtahstu/article/details/39914943",
            //                   "http://blog.csdn.net/jtahstu/article/details/39942435",
            //                   "http://blog.csdn.net/jtahstu/article/details/39948091",
            //                   "http://blog.csdn.net/jtahstu/article/details/39971369",
            //                   "http://blog.csdn.net/jtahstu/article/details/40017725",
            //                   "http://blog.csdn.net/jtahstu/article/details/40086463",
            //                   "http://blog.csdn.net/jtahstu/article/details/40355995",
            //                   "http://blog.csdn.net/jtahstu/article/details/40357885",
            //                   "http://blog.csdn.net/jtahstu/article/details/41230697",
            //                   "http://blog.csdn.net/jtahstu/article/details/41316809",
            //                   "http://blog.csdn.net/jtahstu/article/details/41330267",
            //                   "http://blog.csdn.net/jtahstu/article/details/41347055",
            //                   "http://blog.csdn.net/jtahstu/article/details/41362903",
            //                   "http://blog.csdn.net/jtahstu/article/details/41708645",
            //                   "http://blog.csdn.net/jtahstu/article/details/41736585"
            //              };
            //string[] akoj2 ={
            //                    "http://blog.csdn.net/jtahstu/article/details/42389469",
            //                    "http://blog.csdn.net/jtahstu/article/details/42267705",
            //                    "http://blog.csdn.net/jtahstu/article/details/42228431",
            //                    "http://blog.csdn.net/jtahstu/article/details/42157595",
            //                    "http://blog.csdn.net/jtahstu/article/details/42157501",
            //                    "http://blog.csdn.net/jtahstu/article/details/42157451",
            //                    "http://blog.csdn.net/jtahstu/article/details/42157403",
            //                    "http://blog.csdn.net/jtahstu/article/details/42157389",
            //                    "http://blog.csdn.net/jtahstu/article/details/41952181",
            //                    "http://blog.csdn.net/jtahstu/article/details/41952173",
            //                    "http://blog.csdn.net/jtahstu/article/details/41950213",
            //                    "http://blog.csdn.net/jtahstu/article/details/41931727",
            //                    "http://blog.csdn.net/jtahstu/article/details/41916711",
            //                    "http://blog.csdn.net/jtahstu/article/details/41869409",
            //                    "http://blog.csdn.net/jtahstu/article/details/41850621",
            //                    "http://blog.csdn.net/jtahstu/article/details/41826615",
            //                    "http://blog.csdn.net/jtahstu/article/details/41813991",
            //                    "http://blog.csdn.net/jtahstu/article/details/41812295",
            //                    "http://blog.csdn.net/jtahstu/article/details/41750117",
            //                    "http://blog.csdn.net/jtahstu/article/details/41738983"
            //               };
            //string[] akoj ={
            //                 "http://blog.csdn.net/jtahstu/article/details/45079901",
            //                 "http://blog.csdn.net/jtahstu/article/details/44779817",
            //                 "http://blog.csdn.net/jtahstu/article/details/43669797",
            //                 "http://blog.csdn.net/jtahstu/article/details/42598529",
            //                 "http://blog.csdn.net/jtahstu/article/details/42598425",
            //                 "http://blog.csdn.net/jtahstu/article/details/42598295",
            //                 "http://blog.csdn.net/jtahstu/article/details/42576459",
            //                 "http://blog.csdn.net/jtahstu/article/details/42576433",
            //                 "http://blog.csdn.net/jtahstu/article/details/42481219",
            //                 "http://blog.csdn.net/jtahstu/article/details/42477817",
            //                 "http://blog.csdn.net/jtahstu/article/details/42477781",
            //                 "http://blog.csdn.net/jtahstu/article/details/42423133",
            //                 "http://blog.csdn.net/jtahstu/article/details/42423093",
            //                 "http://blog.csdn.net/jtahstu/article/details/42408721"
            //};
            string[] study ={
                              "http://blog.csdn.net/jtahstu/article/details/39927143",
                              "http://blog.csdn.net/jtahstu/article/details/39927663",
                              "http://blog.csdn.net/jtahstu/article/details/39928141",
                              "http://blog.csdn.net/jtahstu/article/details/39928581",
                              "http://blog.csdn.net/jtahstu/article/details/40402301",
                              "http://blog.csdn.net/jtahstu/article/details/42321971",
                              "http://blog.csdn.net/jtahstu/article/details/42355001",
                              "http://blog.csdn.net/jtahstu/article/details/42390449",
                              "http://blog.csdn.net/jtahstu/article/details/44892369",
                              "http://blog.csdn.net/jtahstu/article/details/44892417",
                              "http://blog.csdn.net/jtahstu/article/details/44902095",
                              "http://blog.csdn.net/jtahstu/article/details/44902083",
                              "http://blog.csdn.net/jtahstu/article/details/45175263",
                              "http://blog.csdn.net/jtahstu/article/details/40630349",
                              "http://blog.csdn.net/jtahstu/article/details/42365601",
                              "http://blog.csdn.net/jtahstu/article/details/44871913"
                          };
            string[] news ={
                               "http://blog.csdn.net/jtahstu/article/details/39828543",
                               "http://blog.csdn.net/jtahstu/article/details/39828703",
                               "http://blog.csdn.net/jtahstu/article/details/39828999",
                               "http://blog.csdn.net/jtahstu/article/details/39829051",
                               "http://blog.csdn.net/jtahstu/article/details/39897301",
                               "http://blog.csdn.net/jtahstu/article/details/39897549",
                               "http://blog.csdn.net/jtahstu/article/details/39898359",
                               "http://blog.csdn.net/jtahstu/article/details/39996931",
                               "http://blog.csdn.net/jtahstu/article/details/40109091",
                               "http://blog.csdn.net/jtahstu/article/details/41317375",
                               "http://blog.csdn.net/jtahstu/article/details/41850765",
                               "http://blog.csdn.net/jtahstu/article/details/41850801",
                               "http://blog.csdn.net/jtahstu/article/details/41850843",
                               "http://blog.csdn.net/jtahstu/article/details/42108609",
                               "http://blog.csdn.net/jtahstu/article/details/42343285",
                               "http://blog.csdn.net/jtahstu/article/details/44887931"
                         };
            for (int i = 1 ; i <= (news.Length * 1500) ; i++) {
                try {
                    Stream strm = client.OpenRead(news[i % 16]);
                    strm.Close();
                    Console.WriteLine("正在执行第{0}次轰炸" , i);
                    if (i % 100 == 0)
                        Console.WriteLine("哎呦，不错呦 O(∩_∩)O~");
                    if (i % 200 == 0)
                        Console.WriteLine("哎呦，太牛X了 O(∩_∩)O~");
                    if (i % 500 == 0)
                        Console.WriteLine("哎呦，程序已经暴走 O(∩_∩)O~");
                    if (i % 1000 == 0)
                        Console.WriteLine("哎呦，这是要超神的节奏 O(∩_∩)O~");
                    if (i % 2000 == 0)
                        Console.WriteLine("哎呦，虽然很装逼，可不要贪杯哦 O(∩_∩)O~");
                    if (i % 4000 == 0)
                        Console.WriteLine("哎呦，装逼有点过度哦 O(∩_∩)O~");
                    if (i % 80000 == 0)
                        Console.WriteLine("哎呦，叼的一比哦 O(∩_∩)O~");
                    if (i % 10000 == 0)
                        Console.WriteLine("哎呦，赶紧关了吧，电脑要炸了 O(∩_∩)O~");
                } catch (Exception e) {
                    Console.WriteLine(e.Message);
                    continue;
                }
            }
        }
    }
}

