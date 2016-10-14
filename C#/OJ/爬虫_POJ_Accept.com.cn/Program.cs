using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Net;
using System.Text.RegularExpressions;

namespace 爬虫_POJ_Accept.com.cn {
    class Program {
        static void Main(string[] args) {
            for (int t = 2000; t <= 4100; t++) {
                Console.WriteLine("正在处理poj第{0}题......", t);
                System.Net.WebClient client = new WebClient();
                string href = "http://accepted.com.cn/poj" + t.ToString() + "/";
                Stream strm;
                try {
                    strm = client.OpenRead(href);
                    StreamReader sr = new StreamReader(strm);
                    string s_file = sr.ReadToEnd();
                    sr.Close();
                    string index1 = "#include", index2 = "return 0;";
                    int start_code = s_file.IndexOf(index1);
                    int end_code1 = s_file.IndexOf(index2);
                    string code = "", show = "";
                    if (end_code1 > 10) {
                        int end_code = s_file.IndexOf("}", end_code1);
                        int l_code = end_code - start_code + 1;
                        string ans = s_file.Substring(start_code, l_code);

                        bool left = false;
                        ans = ans.Replace("<br />", "\n");
                        for (int i = 0; i < ans.Length; i++) {
                            if (ans[i] == '<') left = true;
                            else if (ans[i] == '>') left = false;
                            else if (left == false) code += ans[i];
                        }
                        code = code.Replace("&lt;", "<");
                        code = code.Replace("&gt;", ">");
                        code = code.Replace("&quot;", "\"");
                        code = code.Replace("&amp;", "&");
                        code = code.Replace("&nbsp;", " ");
                        show = code;
                    }
                    string link = "poj_" + t.ToString() + ".cpp";
                    StreamWriter sw2 = new StreamWriter(@"G:\ACM\OJ\code\poj_accept\" + link, true);
                    string zs = "//这是来自jtahstu的网络爬虫 at " + DateTime.Now + "\r\n//目前爬取的是poj第" + t.ToString() + "题\r\n";
                    show = zs + show;
                    sw2.WriteLine(show);
                    sw2.Close();
                } catch (Exception e) {
                    Console.WriteLine(e.Message);
                    continue;
                }
            }
            Console.ReadLine();
        }
    }
}
