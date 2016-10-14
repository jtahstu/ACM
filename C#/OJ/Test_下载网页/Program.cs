using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Web;
using System.Net;

namespace Test_下载网页 {
    class Program {
        static void Main(string[] args) {
            string url = "http://acm.hdu.edu.cn/showproblem.php?pid=2015";
                WebRequest request = WebRequest.Create(url);            //实例化WebRequest对象
                WebResponse response = request.GetResponse();           //创建WebResponse对象
                Stream datastream = response.GetResponseStream();       //创建流对象
                Encoding ec = Encoding.Default;
                StreamReader reader = new StreamReader(datastream, ec);
               string htmlStr = reader.ReadToEnd();                           //读取数据
                Console.WriteLine(htmlStr);
                string file = @"G:\ACM\OJ\Test_下载网页\1.txt";
                StreamWriter wr = new StreamWriter(file);
                wr.WriteLine(htmlStr);
                wr.Close();
                reader.Close();
                datastream.Close();
                response.Close();
                Console.ReadLine();
        }
    }
}
