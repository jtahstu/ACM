#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a=0,b=0,c=0,d=0,i,n,j,k;
    char s[100000];
    while(gets(s)!=NULL)
    {
        for(i=0; i<strlen(s); i++)
        {
            if((97<=s[i]&&s[i]<=122)||(65<=s[i]&&s[i]<=90))
            {                a++;           }
            else if(48<=s[i]&&s[i]<=57)
            {                b++;            }
            else if(s[i]==32)
            {                c++;            }
            else
            {                d++;            }
        }
        printf("%d %d %d %d\n",a,b,c,d);
        a=b=c=d=0;
    }
    return 0;
}
