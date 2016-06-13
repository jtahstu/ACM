/*
6174问题
时间限制：1000 ms  |  内存限制：65535 KB
难度：2

描述

    假设你有一个各位数字互不相同的四位数，把所有的数字从大到小排序后得到a,从小到大后得到b,然后用a-b替换原来这个数，并且继续操作。例如，从1234出发，依次可以得到4321-1234=3087、8730-378=8352、8532-2358=6174，又回到了它自己！现在要你写一个程序来判断一个四位数经过多少次这样的操作能出现循环，并且求出操作的次数

    比如输入1234执行顺序是1234->3087->8352->6174->6174,输出是4

输入
    第一行输入n,代表有n组测试数据。
    接下来n行每行都写一个各位数字互不相同的四位数
输出
    经过多少次上面描述的操作才能出现循环
样例输入

    1
    1234

样例输出

    4


 */
#include<stdio.h>
int main()
{
    int n,m,a[4],i,j,count,max,min,t;
    scanf("%d",&n);
    while(n--)
    {
        count=1;
        scanf("%d",&m);
        while(m!=6174)
        {
            for(i=0; i<4; i++)
            {
                a[i]=m%10;
                m=m/10;
            }
            for(i=0; i<4; i++)
                for(j=i+1; j<4; j++)
                    if(a[i]<a[j])
                    {
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
            max=a[0]*1000+a[1]*100+a[2]*10+a[3];
            min=a[3]*1000+a[2]*100+a[1]*10+a[0];
            m=max-min;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

/* 
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	//freopen("1.txt","r",stdin);
	int k;
	cin>>k;
	while(k--)
	{
		int n,a[4],n1,n2;
		scanf("%d",&n);
		int s=1;
		while(n!=6174)
		{
			a[0]=n%10;
			a[3]=n/1000;
			a[1]=n/10%10;
			a[2]=n/100%10;
			sort(a,a+4);
			n1=1000*a[3]+100*a[2]+10*a[1]+a[0];
			n2=1000*a[0]+100*a[1]+10*a[2]+a[3];
			n=n1-n2;
			s++;
		}
		printf("%d\n",s);
	}
}    
最优代码    
 */