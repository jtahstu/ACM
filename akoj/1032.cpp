//153 370 371 407
#include<iostream>
using namespace std;
const int a[4]={153,370,371,407};
int main()
{
    int n;
    while(cin>>n)
    {
        int flag=0;
        if(n==0)break;
        for(int i=0;i<4;i++)
        {
            if(a[i]==n)
            {
                cout<<"Yes"<<endl;
                flag=1;
            }
        }
        if(flag==0)cout<<"No"<<endl;
    }
    return 0;
}
