/*
最近点对
时间限制：1000 ms  |  内存限制：65535 KB
难度：0

描述

    给出n个自然数，求出2个数绝对值之差最小的2个数，如果有多个满足要求，请输出其和最小的那对

输入
    有多组测试数据

    第一行一个整数n (2 <= n <= 1000).
    第二行是n个自然数的值
输出


    输出最近的那2个数即可（递增输出）。
样例输入

    4
    1 3 7 9
    4
    0 3 0 2

样例输出

    1 3

    0 0
 */
#include "stdio.h"
int main()
{
    int n;
    freopen("input.txt","r",stdin);
    while(~scanf("%d",&n))
    {
        int a[1001],b[1001],temp,i,j;
        for (i = 0; i < n; ++i)
        scanf("%d",&a[i]);
        for(i=0; i<n-1; i++)//这里是i<n-1
            for(j=0; j<n-i-1; j++)//j<n-i-1
                if (a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        for (i = 0; i < n-1; ++i)
        {
        	b[i]=a[i+1]-a[i];
        }
        int min=b[0],m=0;
        for(i=0;i<n-1;i++)
        {
        	if(b[i]<min)
        	{
            min=b[i];
        	m=i;
        	}
        }
        if(min==b[0]) printf("%d %d\n",a[0],a[1] );
        else printf("%d %d\n",a[m],a[m+1] );

    }
} 
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,a[1000];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int min=10000000,x,y;
        for(i=0;i<n-1;i++)
            if(a[i+1]-a[i]<min)
                min=a[i+1]-a[i],x=a[i],y=a[i+1];
        cout<<x<<' '<<y<<endl;
    }
    return 0;
}    最优代码    
*