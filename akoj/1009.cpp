#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,k;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        k = a * b ;
        while(b != 0)
        {
            c = a % b;
            a=b;
            b=c;
        }
       cout<<a<<' '<<k/a<<endl;
    }
    return 0;
}
