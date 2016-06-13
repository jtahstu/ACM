#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s[80],m[80];
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%s%s",s,m);
            strcat(s,m);
            printf("%s\n",s);
        }
    }
}
