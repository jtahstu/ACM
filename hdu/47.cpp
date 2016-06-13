#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        if(a.find(b,0)==string::npos)
            cout<<"-1"<<endl;
        else
            cout<<a.find(b,0)+1<<endl;
    }
    return 0;
}
