using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Net;
using System.Text.RegularExpressions;

namespace 爬虫_杭电题目 {
    class Program {
        static void Main(string[] args) {
            var utf8WithBom = new System.Text.UTF8Encoding(true);
            System.Net.WebClient client = new WebClient();
            for (int i = 2037 ; i <=2037 ; i++) {
                Console.WriteLine("第{0}题" , i);
                string href = "http://acm.hdu.edu.cn/showproblem.php?pid=" + i.ToString();
                Stream stm = client.OpenRead(href);
                StreamReader stmr = new StreamReader(stm);
                string s = stmr.ReadToEnd();
                int strat = s.IndexOf("<h1 style=");
                if (strat < 0)
                    continue;
                int end = s.IndexOf("</td>" , strat + 20);
                s = s.Substring(strat , end - strat);
                string file = @"K:\Code\C#\OJ\code\hdu\" + i.ToString()+".txt" ;
                StreamWriter readTxt = new StreamWriter(file , false , Encoding.GetEncoding("gb2312"));
                readTxt.Write(s);
                readTxt.Flush();
                readTxt.Close();
                stmr.Close();
            }
            
        }
    }
}
