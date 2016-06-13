#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1024

int main()
{
    int t,i,j,l,b,e,f;
    char s[MAX],ss[MAX];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        for(i=0,f=0,b=0,e=0;i<l;++i)
        {
            if(s[i]==':' && s[i+1]=='/' && s[i+2]=='/')
            {
                b=i+3;
                for(j=b;j<l;++j)
                    if(s[j]==':' || s[j]=='/')    {e=j-1;break;}
                f=1;
            }
            if(f)    break;
        }
        for(i=b,j=0;i<=e;++i)    ss[j++]=s[i];
        ss[j++]='\0';
        printf("%s\n",ss);
    }
    return 0;
}
