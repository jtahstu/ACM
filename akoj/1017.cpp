#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a)
    {
        if(a<0) a=-a;
         b=pow(a,1.0/3)+1;
         if(b*b*b==a||a==0||a==1)
            cout<<"YES"<<endl;
         else
           cout<<"NO"<<endl;
    }
}
