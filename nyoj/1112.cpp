#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string str;
    while(t--)
    {
        int n;
        cin>>n;
        cin>>str;
        string s;
        int len=str.size();
        map<string,int>tmp;
        int ans=0;
        for(int i=0; i<len-n+1; i++)
        {
            s=str.substr(i,n);
            if(tmp[s]==1)
                ans++;
            else
                tmp[s]=1;
        }
        cout<<ans<<endl;
    }
}
#include<iostream>
#include<string>
#include<map>
#include<stdio.h>
using namespace std;

int main()
{
    string lstr;
    int n;
    cin >> n;
    while (n--)
    {
        map<string, int> str;
        int t,ans=0;
        cin >>t>> lstr;
        for (int i = 0; i <=lstr.length()+1-t; i++)
        {
            string word(lstr, i, t );
            if (str.find(word) ==str.end()) str[word];
            else ++ans;
        }
        printf("%d\n", ans);
    }

    return 0;
}
