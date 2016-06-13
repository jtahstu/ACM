#include <cstdio>
#include <cstdlib>
#include<iostream>
using namespace std;
int main()
{
    int  n,m;
    char str[20];
    cin>>m;
    while (m--)
    {
        cin>>n>>str;
       cout<<strtol(str, NULL, n)%(n+1)<<endl;
    }
}
