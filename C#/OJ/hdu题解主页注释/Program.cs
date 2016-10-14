using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace hdu题解主页注释 {
    class Program {
        static void Main(string[] args) {
            for (int i = 4366; i <= 5299; i++) {
                try {
                    string path = @"D:\Github\jtahstu.github.com\OJ\code\hdu\P" + i.ToString()+".html";
                    if (!File.Exists(path)) {//如果文件不存在，注释掉主页对应的行号
                        String path_index=@"D:\Github\jtahstu.github.com\OJ\index.html";
                        StreamReader sr = new StreamReader(path_index);
                        string s_index = sr.ReadToEnd();
                        sr.Close();
                        int start = s_index.IndexOf("P" + i.ToString() + "&nbsp;&nbsp;");
                        string s_in = "<!-- ", s_in2 = " -->";
                        s_index = s_index.Insert(start , s_in);
                        s_index = s_index.Insert(start +22, s_in2);
                        File.Delete(path_index);
                        StreamWriter wr = new StreamWriter(path_index,false);
                        wr.WriteLine(s_index);
                        wr.Close();
                    }

                } catch (Exception e) {
                    Console.WriteLine(e.Message);
                    continue;
                }
            }
        }
    }
}
