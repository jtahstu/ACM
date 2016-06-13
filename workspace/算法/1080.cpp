#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std ;
int main()
{
   int n,a[500000+5];
    cin>>n;
    while(n--)
    {
        memset(a,0,sizeof(a));
        int m,x,max=-1;
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>x;
            a[x]++;
            if(x>max)max=x;
        }
        for(int i=0; i<=max; i++)
            if(a[i]%2==1)cout<<i<<endl;
    }
    return 0;
}
