/*king VS king
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述

    啊，从前有两个国家X和Y。两国都是兵强马壮，国王更是威猛无比。但是两个国王同时看上了一个美貌的女子，由于两个国王都深爱这名女子，都不想放弃，由于两名国王都是仁爱，害怕劳民伤财不想打仗，于是便有了个决定，决定分别派出 n 个人 来进行比赛ACM刷题；

    国王们都深知( 田忌赛马这件事)，于是出场的顺序都是从弱到强；每胜一场得2分，平一场得1分，输一场得0分；但是国王想要找一个裁判，因为他们都不相信对方国家的人，于是就想让你来当裁判，你一定能做到是吗??

输入
    第一行有一个整数T<1<T<20>，代表有T组数据
    第二行有一个整数n(1<n<100)，紧随着两行，每行有n个数分别代表有X和Y国家的参赛人 员的水平,数据保证都在int 范围内。
输出
    如果两国之间的分数相等，则输出 none
    输出胜的一方（X或Y或none）;
样例输入

    3
    3
    4 5 6
    3 2 1
    5
    1 2 3 4 5
    2 7 1 1 2
    4
    1 2 3 4
    4 3 2 1

样例输出

    X
    X
    none
*/
#include "stdio.h"
int main(int argc, char const *argv[])
{
    int n,i,a[101],b[101];
    freopen("input.txt","r",stdin);
    scanf("%d",&n);
    while(n--)
    {
        int m,num=0,l,temp,k;
        scanf("%d",&m);
        for(i=0; i<m; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<m; i++)
        {
            scanf("%d",&b[i]);
        }
        for(k=0; k<m; k++)
            for(l=0; l<m-k-1; l++)
            {
                if(a[l]>a[l+1])
                {
                    temp=a[l];
                    a[l]=a[l+1];
                    a[l+1]=temp;
                }
                if(b[l]>b[l+1])
                {
                    temp=b[l];
                    b[l]=b[l+1];
                    b[l+1]=temp;
                }
            }
        for(i=0; i<m; i++)
        {
            if(a[i]>b[i]) num++;
            else if(a[i]<b[i]) num--;
        }
        if(num>0) printf("X\n");
        else if(num==0) printf("none\n");
        else printf("Y\n");
    }
    return 0;
}
