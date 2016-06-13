/*函数解析式

Time Limit:1000MS  Memory Limit:65536K
Total Submit:113 Accepted:85

Description

二次函数f（x）满足 f(x+1)=f(x)+2x 且f(0)=1。

Input

第一行有一个整数N表示N组测试数据。
接下来有N行，且每行都有一个整数x(0 < x < 10000)。

Output

求每组测试数据中f(x)的值。

Sample Input
2
1
2
Sample Output

1
3*/

#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,x,a[10001],i;
	cin>>n;

	while(n--)
	{
		cin>>x;
		a[0]=1;
	for(i=1;i<=x;i++)
		{
			a[i]=a[i-1]+2*(i-1);
		}
		cout<<a[x]<<endl;

	}
	return 0;
}
