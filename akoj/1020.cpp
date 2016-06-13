#include<iostream>
using namespace std;
int t()
int main()
{
    int n,t;
    cin>>n;
    string a;
    while(n--)
    {
        cin>>a;
         t=a[0]-'0';
        for(int i=1;i<a.length();i++)
        {
            s=a[i]-'0';
            tt(s,t);

        }
    }
    return 0;
}
