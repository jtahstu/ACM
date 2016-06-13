#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        int p[26]={0},q[26]={0};
        for(int i=0; i<a.size(); i++)
        {
            p[a[i]-'a']++;
        }
        for(int i=0; i<b.size(); i++)
        {
            q[b[i]-'a']++;
        }
        bool flag=true;
        for(int i=0; i<26; i++)
        {
            if((p[i]==0&&q[i]!=0)||(p[i]!=0&&q[i]==0))flag=false;
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
