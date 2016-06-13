/*Fibonacci数列
时间限制：1000 ms  |  内存限制：65535 KB
描述
Fibonacii数列的另一种形式为：

F[0]=7,F[1]=11,F[n]=F[n-1]+F[n-2](n>=2)

                    输入
                    输入包括多组，每行一个数n（n<=1000000）。
                    输出
                    对应输入的n，若数列的第n项能被3整除，则输出Yes，否则No
                    样例输入
                    0
                    1
                    2
                    3
                    4
                    样例输出
                    No
                    No
                    Yes
                    No
                    No
                    来源
                    经典水题
                    上传者
                    ACM_胡皓*/

/*#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[10001]= {7,11};
    int i,n;
    for(i=2; i<10001; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    while(cin>>n)
    {
        if(a[n]%3==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}*/
/*
#include <stdio.h>
int F(int n)
{
    if(n==0)
        return 7;
    else if(n==1)
        return 11;
    else
        return F(n-1)+F(n-2);
}

int main()
{
    int i,n;

    while(scanf("%d",&n)==1)
    {
        if(F(n)%3==0)
            printf("Yes\n");
        else
            printf("No\n");

    }

    return 0;
}
*/
#include<stdio.h>
main()
{
    int m,n,i,s0,s1;
    while(scanf("%d",&n)==1)
    {

        for(i=2,s0=7,s1=11; i<=n; i++)
        {
            s0=s0+s1;
            s1=s0-s1;
        }

        if(s0%3==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

