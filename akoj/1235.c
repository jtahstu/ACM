
#include<iostream>
#include<cstdio>
using namespace std;
int f(int n)//正数十转二进制
{
  int count=0;
    while(n)
    {
        if(n%2==1)count++;
        n/=2;
    }
    return count;
}
int g(int n)//判断负数二进制有多少个1
{
    int count=0;
    int m=-n;
     if(m%2==1)count++;
    count++;
    while(m)
    {
        if(m%2==0)count++;
        m/=2;
    }
    return count;
}

int main()
{
    int a,b,n;
    char s[100],t[100];
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        int i,count1=0,count2=0;
        if(a>=0)count1=f(a);
        else if(a<0)count1=g(a);
        if(b>=0)count2=f(b);
        else if(b<0)count2=g(b);
       if(count1==count2)
       {
           a==b?cout<<"="<<endl:(a>b?cout<<">"<<endl:cout<<"<"<<endl);
       }
       else count1>count2?cout<<">"<<endl:cout<<"<"<<endl;
    }
    return 0;
}
