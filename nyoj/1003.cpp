#include<iostream>
using namespace std;
int main()
{
    int n,i;
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<1<<'\n';
            continue;
        }
        cout<<(2*n-1)*(2*n-1)+1<<'\n';
    }
    return 0;
}
