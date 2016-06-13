#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,s;char a[4];
    cin>>s;
    while(s--)
    {
        cin>>a;
    sort(a,a+3);
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }
    return 0;
}
