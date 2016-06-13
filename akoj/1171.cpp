#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        int x=0,y=0,z=0;
        for(size_t i=0; i<a.size(); i++)
        {
            if(a[i]=='B')x++;
            if(a[i]=='W')y++;
            if(a[i]=='R')z++;
        }
        for(int i=0; i<z; i++)
            cout<<"R";
        for(int i=0; i<y; i++)
            cout<<"W";
        for(int i=0; i<x; i++)
            cout<<"B";
        cout<<endl;
    }
    return 0;
}
