//#define sort(a,b,c) ((a<b?a:b)<c?(a<b?a:b):c)
#include<iostream>
using namespace std;
int sort(int a,int b,int c)
{
    return ((a<b?a:b)<c?(a<b?a:b):c);
}
main()
{
    int a,b,c,max;
    cin>>a>>b>>c;
    sort(a,b,c);
    cout<<a<<b<<c<<max<<endl;
    return 0;
}
