/*数乌龟
时间限制：1000 ms  |  内存限制：65535 KB
难度：0

描述
    有一只母
    乌龟
    ，它每年年初生一头小母乌龟
    。每头小母乌龟
    从第四个年头开始，每年年初生一头小母乌龟
    。请你计算第n年是共有多少只母乌龟
    （第一年是有一头母乌龟）

输入
    输入多组测试数据，每组测试数据占一行，输入一个整数n(0<n<56)n含义如题所示,n=0是表示输入结束
输出
    每组输出数据占一行，输出第在第n年的时候母乌龟的数量。
样例输入

    2
    4
    5
    0

样例输出

    2
    4
    6
*/
/*#include "stdio.h"
int f(int year)
{
  if(year==1) return 1;
  if(year==2) return 2;
  if(year==3) return 3;
  if(year==4) return 4;
  else return f(year-1)+f(year-3);
}
int main()
{
	int year;
	freopen("input.txt","r",stdin);
	while(scanf("%d",&year)!=EOF&&year)
	{
		printf("%d\n",f(year));
	}
	return 0;
}
这样写理论上是没错的，但数一旦较大就会超时，所以可以先开个数组存进去
*/
#include "stdio.h"
int main(int argc, char const *argv[])
{
    int a[60]={1,2,3},year,i;
    for (year= 3; year < 60; year++)
    a[year]=a[year-1]+a[year-3];
    freopen("input.txt","r",stdin);
    while(scanf("%d",&year)!=EOF&&year)
    {
        printf("%d\n",a[year-1]);
    }
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int n,a[60]={0,1,2,3,4,5};
    for(int i=5; i<60;i++)
    a[i]=a[i-1]+a[i-3];
    while(scanf("%d",&n),n)
    {   
        printf("%d\n",a[n]);
    }
}    最优代码   
 */