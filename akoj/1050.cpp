#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctype.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        int s=0,s1=0;
        char str[151];
        gets(str);
        for(int i=0; i<strlen(str); i++)
        {
            if(str[i]=='_')  s++;
            if(str[i]>='0'&&str[i]<='9'&&i!=0||str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
                s1++;
        }
        if(strlen(str)==s+s1)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

