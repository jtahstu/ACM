using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Net;
using System.Text.RegularExpressions;

namespace 爬虫 {
    class Program {
        static void Main(string[] args) {
            int st =0;//起始搜索题目
            int en = 0;//终止搜索题目
            Console.Write("请输入起始搜索题号：");
            st = int.Parse(Console.ReadLine());
            Console.Write("请输入终止搜索题号：");
            en = int.Parse(Console.ReadLine());
            for (int k = st; k <= en; k++) {
                Console.WriteLine("目前正在处理hdu第{0}题，Please wait.....",k);
                System.Net.WebClient client = new WebClient();
                string problem = "nyoj%20" + k.ToString();
                string hproblem = "http://www.baidu.com/s?word=" + problem + "&pn=0";
                Stream strm = client.OpenRead(hproblem);
                StreamReader sr = new StreamReader(strm);

                //不保存百度后的链接，保存那个东西没用
                //string file = "百度搜索hdu" + k.ToString() + "题代码.html";
                //StreamWriter sw = new StreamWriter(@"G:\ACM\OJ\result\"+file);

                string link = "nyoj" + k.ToString() + "题处理后链接.txt";
                StreamWriter sw2 = new StreamWriter(@"G:\ACM\OJ\link\nyoj\" + link,true);

                string s = sr.ReadToEnd();
                //sw.WriteLine(s);

                int index = 0;
                for (int i = 0; i < 18; i++) {
                    string temp = "http://www.baidu.com/link?url";
                    int start = s.IndexOf(temp, index);
                    int end = s.IndexOf("\"", start + 5);
                    string ans = s.Substring(start, end - start);
                    if (i % 2 == 0) {
                        sw2.WriteLine(ans);
                    }
                    index = end + 5;
                }

                sr.Close();
                //sw.Close();
                sw2.Close();
                Console.WriteLine("目前hdu第{0}题已经处理完毕，Please wait.....\n",k);

            }
            //http://www.baidu.com/link?url=ZdN5LcBLNMw4xK45gGwVEq-vyuuKQbXU7CJDF8YQixQbE1VveqWkUhGWUklD91Mcri3Q0gfwPk9fkjIIDnPWXBsfx54Wc9ynaaN0pOteUtS
            //System.Net.WebClient client2 = new WebClient();
            //Stream page = client2.OpenRead("http://www.baidu.com/link?url=ZdN5LcBLNMw4xK45gGwVEq-vyuuKQbXU7CJDF8YQixQbE1VveqWkUhGWUklD91Mcri3Q0gfwPk9fkjIIDnPWXBsfx54Wc9ynaaN0pOteUtS");
            //StreamReader pageer = new StreamReader(page);
            //string spage = pageer.ReadToEnd();
            //StreamWriter wpage = new StreamWriter(@"G:\ACM\OJ\linkpage\result.html");
            //wpage.WriteLine(spage);
            //page.Close();
            //pageer.Close();
            //wpage.Close(); 
        }
    }
}
