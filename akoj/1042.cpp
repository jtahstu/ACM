#include<iostream>
using namespace std;

int f(unsigned a)//2����ת����10����
{
     unsigned s=0,j=1;
    while(a)
    {
        s+=(a%10)*j;
        a=a/10;
        j=j*2;
    }
    return s;
}

int g(unsigned s)//10����ת����2����
{
    unsigned j=1,n=0;
    while(s)
    {
        n+=(s%2)*j;
        s=s/2;
        j*=10;
    }
    return n;
}

int main()
{
    unsigned a,b;
    char s;
    while(cin>>a>>s>>b)
    {
        if(s=='+')cout<<g(f(a)+f(b))<<endl;
        else cout<<g(f(a)-f(b))<<endl;
    }
    return 0;
}
