using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace 文章自动添加 {
    class Program {
        static void add(string file) {
            var utf8WithBom = new System.Text.UTF8Encoding(true);
            string index = @"D:\Github\jtahstu.github.com\classify\wenzhang\index2.0.html";
            StreamReader cin = new StreamReader(index, utf8WithBom);
            string s = cin.ReadToEnd();
            cin.Close();

            string str = "<p><a href=\"../../blogs/wenzhang/" + file + ".html\"" + " target=\"_blank\">" + file + "</a> by jtahstu on " + DateTime.Now + "</p>";

            int start = s.IndexOf("<div class=\"entry\">") + 19;
            s = s.Insert(start, str);//插入链接和时间


            Console.Write("是否在侧边栏加入链接？1：是，0：否. ");
            int f = int.Parse(Console.ReadLine());
            if (f == 1) {
                int start2 = s.IndexOf("<ul class=\"test\">") + 17;
                string str2 = "<li><a href=\"../../blogs/wenzhang/" + file + ".html\"" + " target=\"_blank\">" + file + "</a></li>";
                s = s.Insert(start2, str2);//只插入链接
            }

            StreamWriter readTxt = new StreamWriter(index, false, utf8WithBom);
            readTxt.Write(s);
            readTxt.Flush();
            readTxt.Close();
            Console.WriteLine("插入链接程序执行完毕！");
        }
        static void Main(string[] args) {
            Console.WriteLine("请输入你要添加的文件名，并确保其已保存在blogs\\wenzhang文件夹中");
            string file = Console.ReadLine();
            add(file);
        }
    }
}

