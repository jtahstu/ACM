/*Take it easy II
时间限制：1000 ms  |  内存限制：65535 KB
难度：0

描述
    小蜗牛经过一段时间的学习和训练，水平的到了很大的提升。但是小蜗牛的时间很少，特别是期末的时候，所以他决定每天做5道题目。对他而言，他认为每个题目花费的时间应该跟题目的难度成正比，并且每一个题目花费的时间都应该是（5+N*10）分钟，其中N为题目的难度。如果他花费的总时间超过了预定的时间，他就认为是浪费时间了，否则他就认为是节省时间了。现在他想知道自己这一天是不是浪费时间了。

输入
    输入有多组。
    每组数据第一行都有五个数，代表每个题目的难度。（难度不会小于0，大于10）。
    第二行也有五个数，代表对应题目花费的时间。
输出
    每组输出一个结果
    如果小蜗牛觉得自己没有浪费时间直接输出 No ！
    否则输出Yes 并输出浪费的时间.
样例输入

    0 2 5 3 1
    10 20 60 40 30
    7 8 7 2 6
    68 57 61 32 15

样例输出

    Yes 25
    No !
*/
#include "stdio.h"
int main()
{
    int a,b,i,x;
    freopen("input.txt","r",stdin);
    while(~scanf("%d",&a))
    {
        int sum=0,s1=0,s2=0;
        s1=a*10+5;
        for (i = 0; i < 4; ++i)
        {
            scanf("%d",&a);
            s1+=(a*10+5);
        }
        for (i = 0; i < 5; ++i)
        {
            scanf("%d",&b);
            s2+=b;
        }
        if(s2<=s1) printf("No !\n");
        else printf("Yes %d\n",s2-s1);
    }
    return 0;
}

/*
#include<stdio.h>
main()
{
    int n,t,m,i,b[5];
    while (scanf("%d%d%d%d%d",b,b+1,b+2,b+3,b+4)!=EOF)
    {
        n=t=0;
        for (i=0; i<5; i++)
        {
            n+=b[i];
        }
        n=n*10+25;
        for (i=0; i<5; i++)
        {
            scanf("%d",&m);
            t+=m;
        }
        if (t>n)
        {
            printf("Yes %d\n",t-n);
        }
        else
        {
            printf("No !\n");
        }
    }
}
*/
