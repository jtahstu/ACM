/*king 选 太子
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述

    啊，从前有一个国家。此国兵强马壮，但是国王却身体不好。于是就想挑一位太子出来；

    但是问题来了，国王不知道他有几个孩子（这国王糊涂吧！），他只知道他的孩子的年龄都是不同的。同时这个国王也有要求，他认为孩子年龄太大的过于迂腐，而年龄太小又不成熟，（这孩子挑的也太难了吧），他就想要年龄在他们孩子之间是最中间的（如果孩子的个数为偶数，那么选中间的两个皇子中年龄较大的那个）。

输入
    第一行有一个整数T，代表有T组数据（T<=10）
    第二行有一个整数n（0<n<=15），紧随着有n个数代表有n个皇子（年龄都是整数）
输出
    每行输出这串数字的太子的年龄
样例输入

    2
    3
    1 2 3
    4
    1 2 3 4

样例输出

    2
    3*/

#include "stdio.h"
int main(int argc, char const *argv[])
{
    int n;
    freopen("input.txt","r",stdin);
    scanf("%d",&n);
    while(n--)
    {
        int a[16],b,i,k,l,temp;
        scanf("%d",&b);
        for(i=0; i<b; i++)
        {
            scanf("%d",&a[i]);
        }
        for(k=0; k<b; k++)
            for(l=0; l<b-k-1; l++)
                if(a[l]>a[l+1])
                {
                    temp=a[l];
                    a[l]=a[l+1];
                    a[l+1]=temp;
                }
        printf("%d\n",a[b/2]);
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b )
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int m,a[16],i,n;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(a[0]),cmp);
        printf("%d\n",a[n/2]);

    }
    return 0;
}// c函数排序
