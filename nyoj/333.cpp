#include<iostream>//ŷ������
using namespace std;
int oula(int n) {
  int ret = 1, i;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {  //�޳���������
      n /= i;
      ret *= i - 1;
      while (n % i == 0) {
        n /= i;
        ret *= i;//Ϊ�˱��ֹ�ʽ��n*(1-1/p)..�е�n
      }
    }
  }
  if (n > 1) //���������������
    ret *= n - 1;
  return ret;
}
int main() {
  int n;
  while (cin >> n&&n) {
    cout << oula(n) << endl;
  }
}
