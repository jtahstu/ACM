/*n%m

Time Limit:1000MS  Memory Limit:65536K
Total Submit:235 Accepted:134

Description

求 1%m+2%m+3%m...+n%m的值。

Input

第一行有一个整数N表示有N组测试数据。
每组测试数据都有两个整数n，m( 0< n < 2^20 且 0 < m < 2014)

Output

求出每组 1%m+2%m+3%m...+n%m 的值。

Sample Input

2
3 2
63152 373
Sample Output

2
11731552*/

#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int N,m,n,i;
	cin>>N;
	while(N--)
	{
	    int s=0;
		cin>>n>>m;
		for(i=1;i<=n;i++)
		{
			s+=i%m;
		}
		cout<<s<<endl;
	}
	return 0;
}
