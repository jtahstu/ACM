/*Fibonacci����
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
����
Fibonacii���е���һ����ʽΪ��

F[0]=7,F[1]=11,F[n]=F[n-1]+F[n-2](n>=2)

                    ����
                    ����������飬ÿ��һ����n��n<=1000000����
                    ���
                    ��Ӧ�����n�������еĵ�n���ܱ�3�����������Yes������No
                    ��������
                    0
                    1
                    2
                    3
                    4
                    �������
                    No
                    No
                    Yes
                    No
                    No
                    ��Դ
                    ����ˮ��
                    �ϴ���
                    ACM_���*/

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

