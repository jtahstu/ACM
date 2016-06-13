/*最长平台

Time Limit:1000MS  Memory Limit:65536K
Total Submit:70 Accepted:23

Description

已知一个已经从小到大排列好的数组，说这个数组中的一个平台
（Plateau），就是连续的一串值相同的元素，并且这一串元素不能再延
伸。例如，在 1，2，2，3，3，3，4，5，5，6 中 1，2.2，3.3.3，4，
5.5，6 都是平台。试编写一个程序，接收一个数组，把这个数组中最长的
平台找出来。在上面的例子中 3.3.3 是该数组中最长的平台。（注：为了
方便，测试用例的数组最大长度都不超过 50，数组中的元素全部为整数范
围为[-2^31,2^31-1]）。

Input

多组测试数据,处理到文件结尾。每组数据首先由一个数组的长度 L，随后
跟随 L 个该数组数据组成。

Output

对于每个测试用例输出它的最长平台

Sample Input


10
1 2 2 3 3 3 4 5 5 6
11
1 1 1 1 1 1 2 2 2 2 2
5
1 2 3 4 5
Sample Output


3
6
1
Source

ahstu@ICPC02*/

#include "iostream"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int a[1001];
		while(scanf("%d",&n)!=EOF)
		{
			for(int i=0;i<n;i++)
				cin>>a[i];
            int count=1;
			for (int i = 1; i < n; i++)
			{
				if(a[i]==a[i-count])
					{
						count++;
					}
			}
			cout<<count<<endl;
		}
	return 0;
}
