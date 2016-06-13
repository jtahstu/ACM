/*
越来越快

Time Limit:1000MS  Memory Limit:65536K
Total Submit:9 Accepted:9

Description

Viky最近对数列有很大的兴趣，比如斐波那契数列。但研究斐波那契数列的人太多了，Viky决定用递推公式定义一种新的数列，并命名为Viky数列。Viky数列定义如下：
V(1) = X, V(2) = Y;
V(n) = A * V(n-2) + B * V(n-1), n≥3;

问：给出整数m，问Viky数列的前m项和sum。

Input

第1行：测试数据组数t；
接下来依次是这t组数据，对于每一组数据：
第1行：X Y A B，有X，Y，A，B≥0；
第2行：m, m≥0。

Output

一共t行，第i行对于第i组数据的答案。

Sample Input

1
1 3 1 2
5

Sample Output

69

 */
#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n,x,y,a,b,m;
	int f[10001];
	scanf("%d",&n);
	while(n--)
	{
		int sum=0,i;
		scanf("%d%d%d%d%d",&x,&y,&a,&b,&m);
		f[1]=x;f[2]=y;
		for(i=3;i<=m;i++)
			{
				f[i]=a*f[i-2]+b*f[i-1];
			}
			for(i=1;i<=m;i++)
            {
                sum+=f[i];
            }
			printf("%d\n",sum);
	}
	return 0;
}
