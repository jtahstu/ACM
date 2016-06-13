#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(string a, string b)
{
    return a.size() < b.size();
}
int main()
{
    int n;
    int count=0;
    string a[10001];
    while(cin>>n)
    {
        if(n==0)break;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,cmp);//sort
        cout<<"SET "<<++count<<endl;
        for(int i=0; i<n; i+=2)
            cout<<a[i]<<endl;
        if(n%2==0)
        {
            for(int i=n-1; i>0; i-=2)
                cout<<a[i]<<endl;
        }
        else for(int i=n-2; i>0; i-=2)
                cout<<a[i]<<endl;
    }

    return 0;
}
