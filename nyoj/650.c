/*Draw Something
时间限制：1000 ms  |  内存限制：65535 KB
难度：0

描述

    Wangpeng is good at drawing. Now he wants to say numbers like “521” to his girlfriend through the game draw something.
    Wangpeng can’t write the digit directly. So he comes up a way that drawing several squares and the total area of squares is the number he wants to say.
    Input all the square Wangpeng draws, what’s the number in the picture?


输入
    There are multiple test cases.
    For each case, the first line contains one integer N(1≤N≤100) indicating the number of squares.
    Second line contains N integers ai(1≤ai≤100)represent the side length of each square. No squares will overlap.
    Input ends with N = 0
输出
    For each case, output the total area in one line
样例输入

    4
    1 2 3 4
    3
    3 3 3
    0

样例输出

    30
    27
*/
#include "stdio.h"
int main(int argc, char const *argv[])
{
    int n,a[101],i;
    freopen("input.txt","r",stdin);
    while(scanf("%d",&n),n)
    {
        int sum=0;
        for(i=0;i<n;i++)
        {    scanf("%d",&a[i]);
             sum+=a[i]*a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
/*
#include<stdio.h>
main()
{
	int n,i,j,k;
	while(scanf("%d",&n),n)
	{
		j=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&k);
			j+=k*k;
		}
		printf("%d\n",j);
	}
}     最优代码   */
