#include<iostream>
using namespace std;
long long C(int n,int r)
{
    long long ans[100];
    ans[0]=1,ans[1]=n;
    for(int i=2; i<=r; i++)
    {
        ans[i]=ans[i-1]*(n-i+1)/i;
    }
    return ans[r];
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)break;
        cout<<C(n+m,m)<<endl;
    }
    return 0;
}
//#include<stdio.h>
//long long sum(int a,int b)
//{
//    long long sum1=1;
//    int i;
//    for( i=a; i>a-b; i--)
//    {
//        sum1=sum1*i/(a-i+1);
//    }
//    return sum1;
//}
//int main()
//{
//    int  a,b;
//    while(~scanf("%d%d",&a,&b))
//    {
//        if(a==0&&b==0)
//        {
//            break;
//        }
//        long long sum1;
//        sum1=sum(a+b,a);
//        printf("%lld\n",sum1);
//    }
//}
