#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,s[32]={0},i=1;
        cin>>a;
        for(i=0;i<32;i++)
        {
            s[i]=a%2;
            a=a/2;
        }
        for(i=31;i>=0;i--)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}
