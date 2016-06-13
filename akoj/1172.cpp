#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        int m,a[1001],b[1001],c[1001];cin>>m;
        for(int i=0; i<m; i++)cin>>a[i]>>b[i]>>c[i];
        int max=0,min=1000000,mmax=0;
        for(int i=0; i<m; i++)if(a[i]>max)max=a[i];
        for(int j=0; j<m; j++)if(a[j]==max&&b[j]<min)min=b[j];
        for(int i=0; i<m; i++)if(a[i]==max&&b[i]==min&&c[i]>mmax)mmax=c[i];
        cout<<mmax<<endl;
    }
    return 0;
}
