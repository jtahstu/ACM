#include<stdio.h>
#include<stdlib.h>
int getlen(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return getlen(n/2)+1;
}
void main()
{
    int n,t;
    int a [100];
    int i;
    while(scanf("%d",&n)!=EOF)
    {
        t=getlen(n)-1;
        for(i=0; i<=t; i++)
        {
            a[i]=n%2;
            n=n/2;
        }
        for(i--; i>=0; i--)
        {printf("%ld",a[i]);}
         printf("\n");
    }
}
