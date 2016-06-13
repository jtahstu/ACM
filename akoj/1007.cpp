#include <iostream>
using namespace std;
main()
{
    int n,m,i,a[100];
    cin>>n;
    while(n--)
    {
        cin>>m;
        a[0]=1;a[1]=1;
        for(i=2;i<m;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        cout<<a[i-1]<<endl;
    }
    return 0;
}
