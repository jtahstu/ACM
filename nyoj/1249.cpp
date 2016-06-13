#include<iostream>
using namespace std;
int main()
{
    int a[10001];
    a[1]=2;
    for(int i=2;i<10001;i++)
        a[i]=a[i-1]+6*(i-1);
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        cout<<a[t]<<endl;
    }
    return 0;
}
