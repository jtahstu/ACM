#include<iostream>
using namespace std;

int func(int m, int n)
{
    if(m==0)return n;
    if(n==0)return m;
    int t,i = n, j = m;
    while ((m%n)!=0)
    {
        t = n;
        n = m % n;
        m = t;

    }
    return i*j/n;
}
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int num=0;
        if(a>0)num++;
        if(b>0)num++;
        if(c>0)num++;
        cout<<num*func(a,func(b,c))<<endl;
    }
    return 0;
}
