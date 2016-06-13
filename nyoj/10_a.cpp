#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    char a[81];
    cin>>t;
    while(t--)
    {
        cin>>a;  int count=0,sum=0;
        for(int i=0;i<strlen(a)-1;i++)
        {
            if(a[i]=='O')
            {
                count++;
                cout<<count<<"+";
                sum+=count;
            }
            if(a[i]=='X')
            {
                count=0;
                cout<<count<<"+";
                sum+=count;
            }
        }
        if(a[strlen(a)-1]=='O')
            {
                count++;
                cout<<count;
                sum+=count;
            }
            if(a[strlen(a)-1]=='X')
            {
                count=0;
                cout<<count;
                sum+=count;
            }
        cout<<"="<<sum<<endl;
    }
    return 0;
}
