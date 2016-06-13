#include<stdio.h>
#include<string.h>
char c[100][1000];
char s[1000];
int main()
{
    int n,m;
    int i,j;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        for(i=0; i<m; i++)
            scanf("%s",&c[i]);
        strcpy(s,c[0]);
        for(j=1; j<m; j++)
        {
            if(strcmp(s,c[j])>0)
                strcpy(s,c[j]);
        }
        printf("%s\n",s);
    }
}
