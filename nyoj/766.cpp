#include<iostream>
#include<cstdio>
using namespace std;
long long f(long long n)
{
    long long m=0,sum=0;
    m=n;
    while(n)
    {
        sum=n%10+sum*10;
        n/=10;
    }
    if(sum==m)return 1;
    return 0;
}
int main()
{
    long long n,count=0;
   for(long long i=1;i<=1000000;i++)
   {
       if(f(i)&&f(i*i)&&f(i*i*i))
        {cout<<i<<" ";
    count++; if(count%5==0) cout<<'\n';}
   }

    return 0;
}
//1 2 11 101 111 1001 10001 10101 11011 100001 101101 110011
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    cout<<"1 2 11 101 111\n";
    cout<<"1001 10001 10101 11011 100001\n";
    cout<<"101101 110011"<<endl;
    return 0;
}
