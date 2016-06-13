#include<iostream>
#include<string>
using namespace std;
string jt(string s)
{
    int a[5]= {0};
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='R')a[0]++;
        else if(s[i]=='W')a[1]++;
        else a[2]++;
    }
    string ans,aa="R",b="W",c="B";
    for(int i=0;i<a[0];i++)
		ans+=aa;
	for(int i=0;i<a[1];i++)
		ans+=b;
	for(int i=0;i<a[2];i++)
		ans+=c;
	return ans;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        cout<<jt(s)<<endl;
    }
    return 0;
}
