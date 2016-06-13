#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[105]={0};
    cin>>n;
    while(n--)
    {
        memset(a,0,sizeof(a));
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
            a[i]=s[i]-'0';
        sort(a,a+s.length());
        if(a[s.length()-1]==0)cout<<"0";  //注意字符串都是0的情况
        else{
            for(int i=s.length()-1;i>=0;i--)
            cout<<a[i];
        }
        cout<<" ";
        if(a[s.length()-1]==0)cout<<"0";
        else{
            for(int i=0;i<s.length();i++)
            if(a[i]!=0)
            cout<<a[i];
        }
         cout<<endl;
    }

    return 0;
}
