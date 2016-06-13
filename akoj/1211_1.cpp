#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[10001]={0},b[10001]={0};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(a[j]==i)b[i]++;
    }
    for(int i=0;i<n;i++)
    if(b[i]!=0)
        cout<<i<<" "<<b[i]<<endl;
    return 0;
}
