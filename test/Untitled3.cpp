#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    int s[51];
    while(cin>>a>>b)
    {
        int count=0;
        for(int i=0;i<a;i++)
            cin>>s[i];
        for(int i=1;i<=a;i++)
        {
            if(s[i]==i||s[i]+b>=i||s[i]-b<=i)
                count++;
        }
        if(count==a)cout<<"POSSIBLE"<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
