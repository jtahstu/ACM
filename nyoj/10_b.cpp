#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int count=0;
        while(n!=1)
        {
        if(n%2==1)n=3*n+1;
        else if(n%2==0)n/=2;
        count++;
        }
        cout<<count%3<<endl;
    }
    return 0;
}
