#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,n,m;
    int a[32]= {0};
    while(scanf("%d",&n)!=EOF)
    {
        for(m=0; m<31; m++)
        {
            i=n%2;
            j=n/2;
            n=j;
            a[m]=i;
        }
        for(m=31; m>=0; m--)
        {
            printf("%d",a[m]);
        }
        printf("\n");
    }
}
