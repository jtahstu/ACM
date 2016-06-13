#include<iostream>
using namespace std;
int main()
{
    int n,j=1;
    cin>>n;
    while(n--)
    {
        int a,sum=0;
        cin>>a;
        for(int i=1;i<=a;i++)
        sum+=(i*(i+1)*(i+2))/2;

        cout<<j++<<" "<<a<<" "<<sum<<endl;
    }
    return 0;
}
