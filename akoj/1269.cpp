#include<iostream>
using namespace std;

int f(int n)
{
    int count=1,s=1;
    while(s%n!=0)
    {
        count++;
        s=(s*10+1)%n;
    }
    return count;
}

int main()
{

    int n;
    while(cin>>n)
        cout<<f(n)<<endl;
    return 0;
}
