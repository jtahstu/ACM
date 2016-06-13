#include <iostream>
using namespace std;
int
jt(int n)
{
  if (n < 10)
    return 1;
  else if (n % 10 == 0)
    return n / 10;
  else
    return n / 10 + 1;
}
int
main()
{
  int n;
  cin >> n;
  while (n--)
    {
      int m, x, y, z;
      cin >> m;
      x = m / 2;
      y = (m - x) * 2 / 3;
      z = m - x - y;
      cout << jt(x) + jt(y) + jt(z) << endl;
    }
  return 0;
}
