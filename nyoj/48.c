/*
小明的调查作业
时间限制：1000 ms  |  内存限制：65535 KB
难度：1

描述
    小明的老师布置了一份调查作业，小明想在学校中请一些同学一起做一项问卷调查，聪明的小明为了实验的客观性，想利用自己的计算机知识帮助自己。他先用计算机生成了N个1到1000之间的随机整数（0<N≤1000），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。

输入
    输入有2行，第1行为1个正整数，表示所生成的随机数的个数：
    N
    第2行有N个用空格隔开的正整数，为所产生的随机数。
输出
    输出也是2行，第1行为1个正整数M，表示不相同的随机数的个数。第2行为M个用空格隔开的正整数，为从小到大排好序的不相同的随机数。
样例输入

    10
    20 40 32 67 40 20 89 300 400 15

样例输出

    8
    15 20 32 40 67 89 300 400


 */
#include "stdio.h"
int main(int argc, char const *argv[])
{
    int n,a[1001],b[1001],i,j,temp,k=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)//这里是i<n-1
        for(j=0; j<n-i-1; j++)//j<n-i-1
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    for (i=0; i<n; i++)
    {
        if (a[i]!=a[i+1])
            k++;
    }
    printf("%d\n",k);
    for (i=0; i<n; i++)
        if (a[i]!=a[i+1])
            printf("%d ",a[i]);
            puts("\n");

    return 0;
}


/*
 
#include<iostream>
using namespace std;
bool a[1002];
int main()
{
    //freopen("1.txt","r",stdin);
    //freopen("2.txt","w",stdout);
    int n;
    cin>>n;
    int x;
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        a[x]=1;
    }
    for (int i=1;i<=1000;i++)
    {
        if(a[i]) cout<<i<<" ";
    }
    return 0;
}        最优代码
 */