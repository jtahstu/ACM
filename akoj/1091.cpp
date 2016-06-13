#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int Reverse(int a)
{
    int s=0;
    while(a)
    {
        s=s*10+a%10;
        a=a/10;
    }
    return s;
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<Reverse(Reverse(a)*Reverse(b))<<endl;//fuck , double reverse
    }
    return 0;
}
