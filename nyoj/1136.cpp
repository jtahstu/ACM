#include<iostream>
using namespace std;
int tt(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i%7==0||i/100%10==7||i%100/10==7||i/100==7||i%10==7||n/10==7)
            cout<<i<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    tt(n);
    return 0;
}
