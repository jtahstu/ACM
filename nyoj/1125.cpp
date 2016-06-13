/*A+1 Problem
时间限制：1000 ms  |  内存限制：65535 KB
描述
求A+1的值！！！
输入
包含多组测试数据。
每组数据包含一个正整数A（A的位数小于1000）。
输出
每组输出数据占一行，输出A+1的值。
样例输入
2
19
12345678
样例输出
3
20
12345679
来源
alala原创
上传者
TC_唐利妹*/
#include "iostream"
#include "cstdio"
#include "cstring"
using namespace std;
int main(int argc, char const *argv[])
{
	char a[1001]={0};
	int len;
	while(cin>>a)
	{
		len=strlen(a);
		if(a[len-1]!=9) a[len-1]+=1;

			for(int i=0;i<len;i++)
				cout<<a[i];
			cout<<endl;
	}
	return 0;
}
