using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace 修改oj主页的反斜杠问题 {
    class Program {
        static void Main(string[] args) {
            string path = @"D:\Github\jtahstu.github.com\OJ\index.html";
            StreamReader sr = new StreamReader(path);
            string s = sr.ReadToEnd();
            sr.Close();
            StringBuilder ss=new StringBuilder(s);
            for(int i=0;i<s.Length;i++)
                if(ss[i].Equals('\\'))
                    ss[i]='/';
            StreamWriter sw = new StreamWriter(path);
            sw.WriteLine(ss);
            sw.Close();
        }
    }
}
