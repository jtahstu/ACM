#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int count;
    for(int i=0; i<a.size(); i++)
        if(a[i]=='@')count=i;
    for(int i=0; i<count; i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}
