#include<iostream>//欧拉商数
using namespace std;
int oula(int n) {
  int ret = 1, i;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {  //剔除所有因子
      n /= i;
      ret *= i - 1;
      while (n % i == 0) {
        n /= i;
        ret *= i;//为了保持公式的n*(1-1/p)..中的n
      }
    }
  }
  if (n > 1) //本身是质数的情况
    ret *= n - 1;
  return ret;
}
int main() {
  int n;
  while (cin >> n&&n) {
    cout << oula(n) << endl;
  }
}
