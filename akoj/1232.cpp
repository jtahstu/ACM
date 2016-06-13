#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int Brute_Force(string s,string t) //ºÚµ•∆•≈‰À„∑®
{
    int i=0,j=0;
    while(i<s.length()&&j<t.length())
    {
        if(s[i]==t[j])
            {i++;j++;}
        else
          {i=i-j+1;j=0;}
    }
    if(j>=t.length()) return (i-t.length());
    else return -1;
}
int main()
{
    string s,t;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>s>>t;
        cout<<Brute_Force(s,t)<<endl;
    }
    return 0;
}

