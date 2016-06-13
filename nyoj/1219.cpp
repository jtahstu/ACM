#include<iostream>

using namespace std;

int main()
{
    char a[13]={3,4,5,6,7,8,9,10,'J','Q','K','A',2 };
    int n;
    cin>>n;
    while(n--)
    {
        char m,n;
        int m1=0,n1=0;
        cin>>m>>n;
        for(int i=0;i<13;i++)
        {
            if(m==a[i])m1=i;
        }
        for(int i=0;i<13;i++)
        {
            if(n==a[i])n1=i;
        }
        if(m1==n1)cout<<"="<<endl;
    else if(m1>n1)cout<<">"<<endl;
    else cout<<"<"<<endl;
    }

    return 0;
}
