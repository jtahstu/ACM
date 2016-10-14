/**
 * Project Name: AddHref
 * Created on: 2015/8/10 12:41:21
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace 博客笔记自动生成 {
    class AddHref {
        public string filename;
        public AddHref(string file) {
            filename = file;
        }
        internal void Add() {
            var utf8WithBom = new System.Text.UTF8Encoding(true);
            string index = @"D:\Github\jtahstu.github.com\classify\biji\index.html";
            StreamReader cin = new StreamReader(index, utf8WithBom);
            string s = cin.ReadToEnd();
            cin.Close();

            string str = "<p><a href=\"../../blogs/biji/" + filename + ".html\"" + " target=\"_blank\">" + filename + "</a> by jtahstu on " + DateTime.Now + "</p>";

            int start = s.IndexOf("<div class=\"entry\">") + 19;
            s = s.Insert(start, str );//插入链接和时间


            Console.Write("是否在侧边栏加入链接？1：是，0：否. ");
            int f = int.Parse(Console.ReadLine());
            if (f == 1) {
                int start2 = s.IndexOf("<ul class=\"test\">") + 17;
                string str2 = "<li><a href=\"../../blogs/biji/" + filename + ".html\"" + " target=\"_blank\">" + filename + "</a></li>";
                s = s.Insert(start2, str2);//只插入链接
            }
            //<p><a href="../../blogs/biji/hdu-2037-今年暑假不AC.html" target="_blank">hdu-2037-今年暑假不AC(C#结构体)</a> by jtahstu on 2015/8/9 </p>

            StreamWriter readTxt = new StreamWriter(index, false, utf8WithBom);
            readTxt.Write(s);
            readTxt.Flush();
            readTxt.Close();
            Console.WriteLine("插入链接程序执行完毕！");
        }
    }
}
