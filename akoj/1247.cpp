#include<iostream>
using namespace std;
int main()
{
    int a[1001];
    a[1]=1;
    a[2]=1;
    a[3]=2;
    a[4]=3;
    a[5]=5;
    a[6]=7;
    for(int i=7,count=2; i<1000; i++)
    {
        a[i]=a[i-1]+count;
        count+=2;
    }
    int n;
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}
