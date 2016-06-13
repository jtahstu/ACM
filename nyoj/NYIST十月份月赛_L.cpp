/*Problem L
第三大
时间限制：1000 ms  |  内存限制：65535 KB
描述
给你10个数，请输出第3大的数即可，简单吧

数据保证每个数都不同

输入
第一行有一个整数n，代表有n组测试数据
然后有n行，每行10个整数，所有的数大于0小于1000
输出
每行输出第三大的数
样例输入
2
383 886 777 915 793 335 386 492 649 421
8 722 783 350 657 97 827 126 269 71
样例输出
793
722
上传者
刘成*/

#include "iostream"
#include "cstdio"
#include "algorithm"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a[11];
	cin>>n;
	while(n--)
	{
		for (int i = 0; i < 10; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+10);
		cout<<a[7]<<endl;
	}
	return 0;
}
