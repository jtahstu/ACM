#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,count=0;
        cin>>a;
        for(int i=1; (i+1)*(i+1)<=(a+1); i++)

            if((a+1)%(i+1)==0)
                count++;

        cout<<count<<endl;
    }
    return 0;
}
