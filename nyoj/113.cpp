/*字符串替换
时间限制：3000 ms  |  内存限制：65535 KB
难度：2
描述
编写一个程序实现将字符串中的所有"you"替换成"we"
输入
输入包含多行数据

每行数据是一个字符串，长度不超过1000
数据以EOF结束
输出
对于输入的每一行，输出替换后的字符串
样例输入
you are what you do
样例输出
we are what we do
来源
水题比赛
上传者
hzyqazasdf*/

#include "iostream"
#include "cstring"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
	char a[1001];

	while(gets(a)!=NULL)
	{
		int i,len=0;
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			if(a[i]=='y'&&a[i+1]=='o'&&a[i+2]=='u')
				{cout<<"we";
				i+=2;}
            else cout<<a[i];
		}
    cout<<endl;
	}
	return 0;
}
