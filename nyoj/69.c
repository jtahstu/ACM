/*
数的长度
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述

        N！阶乘是一个非常大的数，大家都知道计算公式是N!=N*(N-1）······*2*1.现在你的任务是计算出N！的位数有多少（十进制）？

输入
    首行输入n，表示有多少组测试数据(n<10)
    随后n行每行输入一组测试数据 N( 0 < N < 1000000 )
输出
    对于每个数N，输出N!的（十进制）位数。
样例输入

    3
    1
    3
    32000

样例输出

    1
    1
    130271
 */
#include "stdio.h"
#include "math.h"
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int s=1,i,m;
		double sum=1;
		scanf("%d",&m);
		for(i=1;i<=m;i++)
		{
			/*s*=i;
			if(s>=10)
			{
				s/=10;这里不能除，一除s就变小了
				len++;
			}*/
            sum+=log10((double)i);
		}
		printf("%d\n",(int)sum);
	}
	return 0;
}
