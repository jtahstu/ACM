/*K尾相等数
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
输入一个自然数K（K>1）,如果存在自然数M和N（M>N），使得K^M和K^N均大于等于1000，且他们的末尾三位数相等，则称M和N是一对“K尾相等数”。下面请编程求出M+N最小的K尾相等数。
输入
第一行包含一个正整数T，T<10000，表示有T组数据；
随后有N行，每行包括一个整数K（K<2*10^10);
输出
对于输入的每个整数K，输出对应的M+N的最小值；
样例输入
1
2
样例输出
120
*/
//思路是每次相乘后都取余，以余数为索引将指数存到数组中，若余数相同的存在，则直接返回当前指数与对应数组元素的和。经典题。
#include <stdio.h>
#include <string.h>
int sign[1001]; //索引

int f(long long k)
{
    memset(sign, 0, sizeof(sign));
    long long t;
    int i = 1, j;
    t = k;
    while(k < 1000)
    {
        k *= t;
        ++i;
    }
    sign[k %= 1000] = i++;
    for(j = 1; j <= 1001; ++j, ++i)
        if(sign[k = (k * t) % 1000])
            return i + sign[k];
        else sign[k] = i;
}

int main()
{
    int t;
    long long k;
    scanf("%d", &t);
    while(t-- && scanf("%lld", &k))
        printf("%d\n", f(k));
    return 0;
}

#include <stdio.h>
int Findk(int k)
{
    int ans[1000]= {0};   //记录数据
    int count = 0,s = 1;
    while(s < 1000)       // 遍历出第一个大于1000的数
    {
        s *= k;
        count++;
    }
    s %= 1000;
    k %= 1000;
    ans[s] = count;
    while(true)            // 需找出现的第二个数，即尾数相等。
    {
        s = s * k % 1000;
        count++;
        if(!ans[s]) ans[s] = count;
        else return ans[s] + count;
    }
}
int main()
{
    int n,k;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&k);
        printf("%d\n",Findk(k));
    }
}

//最优代码
#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,flag,a[1001];
    long k,sum;
//	freopen("f:\\input.txt","r",stdin);
    scanf("%d%*c",&t);
    while(t--)
    {
        scanf("%ld",&k);
        sum = 1;
        flag = 0;
        memset(a,0,sizeof(a));
        for(i = 0; sum < 1000; i++)
            sum *= k;
        for(j = 0,sum %= 1000,k %= 1000; j < 1000; j++,i++)
        {
            (a[sum] != 0)?(printf("%d\n",a[sum]+i),flag = 1):(a[sum] = i,sum = sum * k % 1000);
            if(flag == 1)
                break;
        }
    }
    return 0;
}
// #include "stdio.h"
// int main(int argc, char const *argv[])
// {
// 	int n,m,i,j;
// 	scanf("%d",&n);
// 	while(n--)
// 	{
// 		int s=1,t=1;
// 		scanf("%d",&m);
// 		for(i=1;i<=m;i++)
// 		{
// 			s*=i;
// 			for(j=1;j<m;j++)
// 		{	t*=j;
// 		if(s>=1000&&t>=1000&&s%1000==t%1000)
// 			printf("%d%d\n",i,j);
// 			else continue;
// 		}
// 			}
// 	}
// 	return 0;
// }
