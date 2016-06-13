#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        if(i%3==0&&i%5==0)count++;
    }
    cout<<count<<endl;
    return 0;
}
