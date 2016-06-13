#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int a[27]= {0},count=0,j=0,k=0;
        a[0]=1;
        cin>>s;
        for(int i=1; i<s.length(); i++)
        {
            if(s[i]==s[i-1])
            {
                a[j]++;
            }
            else
            {
                j++;
                a[j]++;
            }
        }
        for(int i=0; i<=j; i++)
        {
            cout<<a[i];
            for(int t=k; t<s.length()-1; t++)
                if(s[t]!=s[t+1])
                {
                    k=t+1;
                    cout<<s[t];
                    break;
                }
        }
        cout<<s[s.length()-1]<<endl;
    }
    return 0;
}
