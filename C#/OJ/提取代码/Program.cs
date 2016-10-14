using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Net;
using System.Text.RegularExpressions;
using System.Web;
namespace 提取代码 {
    class Program {
        /// <summary>
        /// 获取页面中的代码
        /// </summary>
        /// <param name="s"></param>
        /// <returns></returns>
        static string Getcode(string s, int i, int x) {//s为传递来的结果页面
            string s1 = "<pre class", s2 = "</pre>", s3 = "<pre name";
            if (s.IndexOf("csdn") > 0) {
                Console.WriteLine("进入到csdn结果页中了...");
                int code_start = s.IndexOf(s1);
                if (code_start == -1) code_start = s.IndexOf(s3);
                int code_end = s.IndexOf(s2, code_start + 1);
                int code_l = code_end - code_start + 1;
                if (code_l > 10 && code_start > 10) {
                    string ans = s.Substring(code_start, code_l - 1);
                    ans = ans.Replace("&lt;", "<");
                    ans = ans.Replace("&gt;", ">");
                    ans = ans.Replace("&quot;", "\"");
                    ans = ans.Replace("&amp;", "&");
                    ans = ans.Replace("&nbsp;", " ");
                    ans = ans.Replace("#43;", "+");
                    ans = ans.Replace("#39", "'");


                    //Console.WriteLine(ans);<pre class="cpp" name="code"><pre class="html" name="code">
                    ans = ans.Replace("<pre name=\"code\" class=\"cpp\">", "\r\n");
                    ans = ans.Replace("<pre class=\"cpp\" name=\"code\">", "\r\n");
                    ans = ans.Replace("<pre class=\"html\" name=\"code\">", "\r\n");

                    string w = @"G:\ACM\OJ\OK.txt";
                    StreamReader rr = new StreamReader(w);
                    string sr = rr.ReadToEnd();
                    rr.Close();
                    StreamWriter wr = new StreamWriter(w);
                    wr.WriteLine(sr + "第{0}题的第{1}次尝试在CSDN成功！！\r\n{2}.{3}\r\n", i, x, i, x);
                    wr.Flush();
                    wr.Close();

                    return ans;
                } else return "//进去csdn了，但没找到代码...\r\n//WAFile";
            } else if (s.IndexOf("cnblog") > 0) {
                Console.WriteLine("进入到博客园结果页中了...");
                int start_code = s.IndexOf("#include");
                int end_code = s.IndexOf("return");
                int end_code2 = s.IndexOf("}", end_code + 5);
                string ans = s.Substring(start_code, end_code2 - start_code + 10);
                string code = "", show = "";
                bool left = false;
                ans = ans.Replace("<br />", "\r\n");
                for (int ii = 0; ii < ans.Length; ii++) {
                    if (ans[ii] == '<') left = true;
                    else if (ans[ii] == '>') left = false;
                    else if (left == false) code += ans[i];
                }
                code = code.Replace("&lt;", "<");
                code = code.Replace("&gt;", ">");
                code = code.Replace("&quot;", "\"");
                code = code.Replace("&amp;", "&");
                code = code.Replace("&nbsp;", " ");
                string[] split_code = code.Split('\n');
                string code1 = "";
                for (int k = 0; k < split_code.Length; k++) {
                    if (split_code[k].Length > 2 && split_code[k][1] >= '0' && split_code[k][1] <= '9') {
                        code1 = split_code[k].Substring(2, split_code[k].Length - 2);
                        //Console.WriteLine(code1);
                        show += code1 + "\r\n";
                    } else
                        show += split_code[k];
                }

                string w = @"G:\ACM\OJ\OK.txt";
                StreamReader rr = new StreamReader(w);
                string sr = rr.ReadToEnd();
                rr.Close();
                StreamWriter wr = new StreamWriter(w);
                wr.WriteLine(sr + "第{0}题的第{1}次尝试在博客园成功！！\r\n{2}.{3}\r\n", i, x, i, x);
                wr.Flush();
                wr.Close();

                return show;
            } else if (s.IndexOf("#include") > 0) {
                Console.WriteLine("进入到其他结果页中了...");
                string index1 = "#include", index2 = "return 0;";
                int start_code = s.IndexOf(index1);
                int end_code1 = s.IndexOf(index2);
                if (end_code1 > 10) {
                    int end_code = s.IndexOf("}", end_code1);
                    int l_code = end_code - start_code + 1;
                    string ans = s.Substring(start_code, l_code);

                    string code = "";
                    bool left = false;
                    ans = ans.Replace("<br />", "\r\n");
                    for (int j = 0; j < ans.Length; j++) {
                        if (ans[j] == '<') left = true;
                        else if (ans[j] == '>') left = false;
                        else if (left == false) code += ans[j];
                    }

                    code = code.Replace("&lt;", "<");
                    code = code.Replace("&gt;", ">");
                    code = code.Replace("&quot;", "\"");
                    code = code.Replace("&amp;", "&");
                    code = code.Replace("&nbsp;", " ");
                    code = code.Replace("#43", "+");
                    code = code.Replace("#39", "'");


                    string w = @"G:\ACM\OJ\OK.txt";
                    StreamReader rr = new StreamReader(w);
                    string sr = rr.ReadToEnd();
                    rr.Close();
                    StreamWriter wr = new StreamWriter(w);
                    wr.WriteLine(sr + "第{0}题的第{1}次尝试在其他页面成功！！\r\n{2}.{3}\r\n", i, x, i, x);
                    wr.Flush();
                    wr.Close();
                    if (code.IndexOf("document") > 10) return "//进去其他结果页了，但是代码返回错误";
                    return code;
                } else {
                    return "//进去其他结果页了，但没找到代码";
                }
            }
            return "//啥也没找到\r\n//WAFile";
        }

        static void Main(string[] args) {
            int st = 0;
            int en = 0;
            Console.Write("请输入起始爬取题号：");
            st = int.Parse(Console.ReadLine());
            Console.Write("请输入终止爬取题号：");
            en = int.Parse(Console.ReadLine());
            for (int i = st; i <= en; i++) {
                string file = @"G:\ACM\OJ\link\nyoj\nyoj" + i.ToString() + "题处理后链接.txt";
                StreamReader re = new StreamReader(file);
                string s;
                int x = 1;
                while ((s = re.ReadLine()) != null) {
                    Console.WriteLine("目前正在执行第{0}题的第{1}条链接", i, x);
                    System.Net.WebClient client = new WebClient();
                    Stream strm = client.OpenRead(s);
                    StreamReader sr = new StreamReader(strm);
                    string ss = sr.ReadToEnd();
                    sr.Close();
                    string ans = Getcode(ss, i, x);
                    ans = ans.Replace("&lt;", "<");
                    ans = ans.Replace("&gt;", ">");
                    ans = ans.Replace("&quot;", "\"");
                    ans = ans.Replace("&amp;", "&");
                    ans = ans.Replace("&nbsp;", " ");
                    ans = ans.Replace("#43;", "+");
                    ans = ans.Replace("#39", "'");
                    ans = "//第" + i.ToString() + "题第" + x.ToString() + "次尝试抓取 by jtahstu on " + DateTime.Now + "\r\n" + ans;
                    string write = @"G:\ACM\OJ\code\nyoj\nyoj_" + i.ToString() + "_" + (x++).ToString() + ".cpp";
                    StreamWriter wr = new StreamWriter(write);
                    wr.Write(ans);
                    wr.Flush();
                    wr.Close();
                }
            }

        }
    }
}
