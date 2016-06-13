#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,t,min,max;
    while(cin>>n)
    {
        while(n--)
        {
            cin>>a>>b>>c;
            min=a;
            max=a;
            if(b<min) min=b;
            if(b>max) max=b;
            if(max/min==c)
                cout<<max<<"/"<<min<<"="<<c<<endl;
            else if(max-min==c)
                cout<<max<<"-"<<min<<"="<<c<<endl;
            else if(max+min==c)
                cout<<max<<"+"<<min<<"="<<c<<endl;
            else if(max*min==c)
                cout<<max<<"*"<<min<<"="<<c<<endl;
            else printf("None\n");
        }
    }
}
