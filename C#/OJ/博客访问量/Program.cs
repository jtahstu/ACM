using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Net;
using System.Threading;

namespace 博客访问量 {
    class Program {
        /// <summary>
        /// 用try catch,然后写continue的话，这个程序不跑完绝对不会停止，如果出现异常，就继续尝试，这样正和我意
        /// good job O(∩_∩)O哈哈~
        /// </summary>
        /// <param name="args"></param>
        static void Main(string[] args) {
            System.Net.WebClient client = new WebClient();
            for (int i = 0; i < 10000; i++) {
                try {
                    Stream strm = client.OpenRead("http://blog.csdn.net/jtahstu/article/details/47411757");
                    strm.Close();
                    Console.WriteLine("目前正在执行第{0}次轰炸", i);
                } catch (Exception e) {
                    Console.WriteLine(e.Message);
                    continue;
                }
            }
        }
    }
}

