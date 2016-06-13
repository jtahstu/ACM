/*相反输出加强版
时间限制：1000 ms  |  内存限制：1000 KB
描述
编写一个程序，将n个自然数按相反顺序输出。（n为一个随机的值，他小于20000,每个自然数在long long 范围内，每行为一组数据）
输入
有多组测试数据，以EOF结束。
每组测试数据有n个整数。
输出
每组数据输出一行，数字间用一个空格隔开。
样例输入
1 2 3 4 5 6 7 8 9 10
6 4 10
样例输出
10 9 8 7 6 5 4 3 2 1
10 4 6
上传者
ACM_孙毓阳*/
#include "iostream"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
	long long n,a[20001],i=0;
	while(scanf("%lld",&a[i])!=)
	{i++;}
	for(int m=i-1;m>=0;m--)
		cout<<a[m]<<" ";
	cout<<endl;

	return 0;
}
