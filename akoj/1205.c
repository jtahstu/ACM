#include<stdio.h>
#include<stdio.h>
#include <string.h>
void main ()
{
    char s[80];
    while(scanf ("%s",s)!=EOF)
    {int i,len;
    len = strlen(s);
    for (i=0; i<len; i++)
    {
        if (s[i]>='a'&&s[i]<='c')
            s[i]='2';
        else if (s[i]>='d'&&s[i]<='f')
            s[i]='3';
        else if (s[i]>='g'&&s[i]<='i')
            s[i]='4';
        else if (s[i]>='j'&&s[i]<='l')
            s[i]='5';
        else if (s[i]>='m'&&s[i]<='o')
            s[i]='6';
        else if (s[i]>='p'&&s[i]<='s')
            s[i]='7';
        else if (s[i]>='t'&&s[i]<='v')
            s[i]='8';
        else if (s[i]>='w'&&s[i]<='z')
            s[i]='9';
        else if (s[i]>='A'&&s[i]<='Y')
            s[i]=s[i]+33;
        else if (s[i]=='Z')
            s[i]='a';
    }
    printf("%s",s);
    printf ("\n");}
}
