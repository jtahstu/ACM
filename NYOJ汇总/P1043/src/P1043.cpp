#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std ;
ifstream fin("jt.in");
ofstream fout("jt.out");
int
main()
{
  int n;
  fin >> n;
  while (n--)
    {
      int a, b;
      fin >> a >> b;
      fout << a * b << endl;
    }
  return 0;
}
