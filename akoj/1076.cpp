#include<iostream>
#include<cstdio>
#include<string.h>

using namespace std;

char s[10001];

int main()
{
    int t, c,i;
    cin>>t;
    while( t -- )
    {
        cin>>s;
        c = 1;
        for(i = 1; i < strlen(s); i ++ )
        {
            if( s[i]==s[i-1] ) ++c;
            else
            {
                if(c>1)
                   cout<<c;
                cout<<s[i-1];
                c = 1;
            }
        }
        if( s[strlen(s)-1] == s[strlen(s)-2] )
            cout<< c<<s[strlen(s)-2];
        else
           cout<< s[strlen(s)-1];
        cout<<endl;
    }
}
