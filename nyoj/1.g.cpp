#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
int main()//6816ms
{
    ll a,b,s[50000];
    for(int i=1; i<44800; i++)//TMD，打表都超时
        s[i]=i*i;
    while(cin>>a>>b)
    {
        ll a1=0,b1=0;
        for(ll i=sqrt(a)-1; i<=sqrt(b); i++)
        {
            if(a>s[i]&&a<=s[i+1])
                a1=i;
            if(b>=s[i]&&b<s[i+1])
                b1=i;
        }
    cout<<b1-a1<<endl;
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])//5568ms
{
    int numA = 0;
    int numB = 0;
    while(scanf("%d %d",&numA, &numB) != EOF )
    {
        int count = 0;
        for (int i = ceil( sqrt(numA) ) ; ; ++i)
        {
            int result = i * i;
            if (result >= numA && result <= numB)
            {
                count ++;
            }
            else if (result >numB)
            {
                break;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
#define s(a) sqrt(a)
int main()//68ms
{
   long long int a,b,c,d;
   while(~scanf("%lld%lld",&a,&b))
   {
        if(a>b)
            printf("0\n");
        else
        {
            c=s(a-1),d=s(b);
            printf("%lld\n",d-c);
        }
   }
}
