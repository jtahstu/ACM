#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001][16];
    int t;
    int n,i,j,max,flag;
    while(scanf("%d",&n)&&n)
    {
        getchar();
        for(i=0; i<n; i++)
        {
            gets(a[i]);
        }
        max=1;
        flag=0;
        for(i=0; i<n; i++)
        {
            t=1;
            if(a[i][0]=='\0') continue;
            for(j=i+1; j<n; j++)
            {
                if(a[j][0]=='\0') continue;
                if(strcmp(a[i],a[j])==0)
                {
                    t++;
                    a[j][0]='\0';
                }
            }
            if(t>max)
            {
                max=t;
                flag=i;
            }
        }
        puts(a[flag]);
    }
    return 0;
}
