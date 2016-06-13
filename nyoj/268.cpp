/*荷兰国旗问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述

荷兰国旗有三横条块构成，自上到下的三条块颜色依次为红、白、蓝。现有若干由红、白、蓝三种颜色的条块序列，要将它们重新排列使所有相同颜色的条块在一起。本问题要求将所有红色的条块放最左边、所有白色的条块放中间、所有蓝色的条块放最右边。
输入
第1行是一个正整数n（n<100），表示有n组测试数据。接下来有n行，每行有若干个由R，W，B三种字符构成的字符串序列，其中R，W和B分别表示红、白、蓝三种颜色的条块,每行最多有1000个字符。
输出
对输入中每行上由R，W，B三种字符构成的字符串序列，将它们重新排列使所有相同颜色的条块在一起，满足前述要求。
样例输入
3
BBRRWBWRRR
RRRWWRWRB
RBRW
样例输出
RRRRRWWBBB
RRRRRWWWB
RRWB
来源
acm教材*/

#include "iostream"
#include "cstdio"
#include "cstring"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,i;
	char a[1001];
	cin>>n;
	getchar();
	while(n--)
	{
		int x=0,y=0,z=0,m=0;
        //把getchar();放这里了，我去
		gets(a);
		m=strlen(a);
		for(i=0;i<m;i++)
		{
			if(a[i]=='R')x++;
			if(a[i]=='W')y++;
			if(a[i]=='B')z++;
		}
		for (i=0;i<x;i++)
		cout<<'R';
		for(i=0;i<y;i++)
			cout<<'W';
		for(i=0;i<z;i++)
			cout<<'B';
		cout<<endl;
	}
	return 0;
}
 
#include<stdio.h>//最优codes
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		int w=0,b=0;
		char c;
		while((c=getchar())!=10)
			c=='R'?printf("R"):(c=='W'?w++:b++);
		while(w--)
			putchar('W');
		while(b--)
			putchar('B');
		printf("\n");
	}
}        