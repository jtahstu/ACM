#include<iostream>
using namespace std;
int main()
{
    long long a[55]={0,1,2};
    int n;
    for(int i=3;i<51;i++)
        a[i]=a[i-1]+a[i-2];
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}
