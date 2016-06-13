#include<iostream>
using namespace std;
void tt(int a,int b)
{
    int s[10001];bool flag=false;
    for(int i=1;i<=a/2;i++)
       {
        s[i]=i*(a-i);
        if(s[i]==b)
        {
            cout<<"YES"<<endl;
            flag=true;
            break;
        }
       }
       if(!flag)cout<<"NO"<<endl;
}

int main()
{
    int a,b;
    while(cin>>a>>b,a,b)
    {
        tt(a,b);
    }
    return 0;
}
