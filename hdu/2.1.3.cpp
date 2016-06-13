#include <iostream>
#include <cstdio>

using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)return b;
    else return gcd(b,a%b);
}
int main()
{
    int p,q;
    while(scanf("%d %d",&p,&q)!=EOF)
    {
        cout<<p+q-gcd(p,q)<<endl;
    }
    return 0;
}
