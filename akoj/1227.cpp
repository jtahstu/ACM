#include <cstdio>
#include<iostream>

using namespace std;

int func(int year)
{
    if(year<4)
        return 1;
    else
        return (func(year-3)+func(year-1));
}

int main(int argc, char const *argv[])
{
    int a;
    while(cin>>a)
    {
        cout<<func(a)<<endl;
    }
    return 0;
}

