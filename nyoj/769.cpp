#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    int k,i,j;
    string str;
    while(cin>>str>>k)
    {
        for(i=0 ; i<str.length() ; i++ )
        {
            for(j=0; j<=90; j++)
            {
                if((str[i]+26*j)%k==0&&('A'<=(str[i]+26*j)/k&&(str[i]+26*j)/k<='Z'))
                    printf("%c",(str[i]+26*j)/k);
            }
        }
        cout<<endl;
    }
    return 0;
}
