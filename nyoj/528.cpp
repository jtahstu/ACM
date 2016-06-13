#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int ans=0,m;
        for(int i=0;i<n;i++)
        {
            cin>>m;
            ans^=m;
        }
        cout<<ans<<endl;
    }
    return 0;
}
