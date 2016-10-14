using System;
using System.Collections;
using System.IO;

namespace test {
    class Program {
        static void Main(string[] args) {
            //String path = Environment.GetEnvironmentVariable("Path");
            //Console.Write("请输入需要添加到Path里的路径：");
            //String s = Console.ReadLine();
            //Environment.SetEnvironmentVariable("Path", path+";"+s);
            //Console.WriteLine("之前的Path为{0}",path);
            //Console.WriteLine("修改之后的Path为{0}", Environment.GetEnvironmentVariable("Path"));
            Console.WriteLine(Environment.GetEnvironmentVariable("Path"));
            Console.ReadKey();
        }
    }
}
