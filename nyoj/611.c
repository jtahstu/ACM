/*练练
时间限制：1000 ms  |  内存限制：65535 KB
难度：0

描述

    给定一个整数n，请求出0与n之间的所有偶数的和（包括0和n）？

输入
    有多组数据

    每种情况第一行一个整数n（0<=n<= 500)
    （用EOF结尾）
输出
    每行输出所有偶数的和
样例输入

    3

    4

样例输出

    2

    6
*/
#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d",&n)!= EOF)
	{
		if(n%2==0) printf("%d\n",(n+2)*n/4 );
		else printf("%d\n",(n+1)*(n-1)/4 );
	}
	return 0;
}
/*
 
#include<cstdio>
int main()
{
int t,n;
while(~scanf("%d",&t))
printf("%d\n",t/2*(t/2+1));
}    最优代码    
 */