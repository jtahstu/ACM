using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace 博客 {
    class Program {
        #region 写入段落
        static void r_and_w() {
            //设置文件编码为utf-8包含BOM
            var utf8WithBom = new System.Text.UTF8Encoding(true);

            //先读取模板文件
            StreamReader reader = new StreamReader(@"D:\Users\Administrator\Documents\visual studio 2013\Projects\CSharp\CSharp\ConsoleApplication1\src\Template.html", utf8WithBom);
            String a = reader.ReadToEnd();

            //然后读取输入文件
            StreamReader reader_input = new StreamReader(@"D:\Users\Administrator\Documents\visual studio 2013\Projects\CSharp\CSharp\ConsoleApplication1\src\input.txt", utf8WithBom);
            string input_l = reader_input.ReadLine();
            int p_l = int.Parse(input_l);//输入的段落数

            string input = reader_input.ReadToEnd();
            for (int i = 1; i <= p_l; i++) {
                string ss = "p" + i.ToString();
                int start = input.IndexOf(ss);
                int end = input.IndexOf(ss, start + 2);
                string s = input.Substring(start + 2, end - start - 2);//获取当前段落要替换的字符串

                string sss = "$" + ss + "$";//模板中要替换的段落
                a = a.Replace(sss, s);//执行替换操作
            }
            reader.Close();
            reader_input.Close();
            //执行删除多余的段落


            StreamWriter readTxt = new StreamWriter(@"D:\Users\Administrator\Documents\visual studio 2013\Projects\CSharp\CSharp\ConsoleApplication1\src\change.html", false, utf8WithBom);
            readTxt.Write(a);
            readTxt.Flush();
            readTxt.Close();
        }
        #endregion

        #region 主函数
        static void Main(string[] args) {
            //执行读写操作
            r_and_w();

            //File.Copy(@"change.html", @"HTMLPage1.html", true);
        }
        #endregion
    }
}
