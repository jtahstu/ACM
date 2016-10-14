using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace String {
    class Program {
        static void Main(string[] args) {
            string s = Console.ReadLine();
            string[] ss = s.Split(new char[] { '?' , '.' , ';' , ' ' } , StringSplitOptions.RemoveEmptyEntries);
            //string[] ss = Regex.Split(s , "\\W+");
            foreach (var str in ss)
                Console.WriteLine(str);
            //Console.ReadKey();
        }
    }
}
