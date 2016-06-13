#include<iostream>
using namespace std;
int f(int n)
{
    int count=0;
    while(n)
    {
        if(n%2==1)count++;
        n/=2;
    }
    return count;
}
int main()
{
    int n,a[1001];
    for(int i=1;i<1001;i++)
        a[i]=f(i);
    while(cin>>n)
    {
        int count=0;
        for(int i=1;i<1001;i++)
            if(a[i]==f(n)&&count<5&&i!=n)
        {
            cout<<i<<" ";
            count++;
        }
    cout<<endl;
    }
    return 0;
}
