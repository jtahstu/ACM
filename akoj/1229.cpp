#include<iostream>
#include<string>
using namespace std;
const int D = 10000;
int primeF[D];
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int k = 0;
        for(int i=2; i<=n; ++i)
        {
            while(n%i==0)
            {
                primeF[k++] = i;
                n /= i;
            }
        }
        cout<<primeF[0];
        for(int i=1; i<k; ++i)
            cout<<"*"<<primeF[i];
        cout<<endl;
    }
    return 0;
}

