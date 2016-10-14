using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Net;

namespace 博客空炸鸡_自定义链接 {
    class Program {
        static void Main(string[] args) {
            System.Net.WebClient client = new WebClient();
            string link = "";
            Console.WriteLine("请输入轰炸链接：");
            link = Console.ReadLine();
            Console.WriteLine("请输入轰炸次数:");
            int count = int.Parse(Console.ReadLine());
            for (int i = 0; i <= count; i++) {
                try {
                    Stream strm = client.OpenRead(link);
                    strm.Close();
                    Console.WriteLine("正在执行第{0}次轰炸", i);
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
