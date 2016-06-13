#include<cstdio>
#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long sum=0,a,b;
        cin>>a>>b;
        if(a>b)
        {
          int temp= a;
          a=b;
          b=temp;
        }
            sum=b*(b+1)*(2*b+1)/6-a*(a+1)*(2*a+1)/6+a*a;
            cout<<sum<<endl;
    }
    return 0;
}
