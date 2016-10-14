using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 目录测试 {
    class Program {
        static void Main(string[] args) {
            string path="H:\\";
            string[] folders = Directory.GetDirectories(path);
            foreach (var s in folders) {
                Console.WriteLine(s);
            }
            string[] files = Directory.GetFiles(folders[4]);
            foreach (var ss in files) {
                Console.WriteLine(ss);
            }
            Console.ReadKey();
        }
    }
}
