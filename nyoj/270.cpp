/*数的分解
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
你的任务是找到一个最小的正整数Q，使Q的各位数的乘积等于N。

输入
最多450组测试数据。数据以EOF结尾。
输入一个整数N（0 ≤ N ≤ 400)。
输出
输出Q，如果Q不存在则输出−1。
样例输入
10
5
样例输出
25
5
来源
ural
上传者
李文鑫*/

#include<stdio.h>
int main()
{
    int n,i,k,t,s;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;; i++)
        {
            k=i;
            s=1;
            while(k)
            {
                t=k%10;
                s=s*t;
                k=k/10;
            }
            if(s==n)
            {
                printf("%d\n",i);
                break;
            }
            if(i>599)
            {
                printf("-1\n");
                break;
            }
        }
    }
}

#include<iostream>//最优codes
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;; i++)
        {
            int k=1;
            int s=i;
            while(s)
            {
                k*=(s%10);
                s/=10;
            }
            if(k==n)
            {
                cout<<i<<endl;
                break;
            }
            if(i>5000)
            {
                cout<<"-1"<<endl;
                break;
            }
        }
    }
    return 0;
}
