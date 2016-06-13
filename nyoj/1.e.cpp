#include<stdio.h>
int a[31][31];
int main()
{
    int i,j;
    for(i=1; i<=30; ++i)
    {
        a[i][1]=1;
        for(j=2; j<=i; ++j)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    int n;
    while(~scanf("%d",&n))
    {
        for(i=1; i<=n; ++i)
        {
            printf("%d",a[i][1]);
            for(j=2; j<=i; ++j)
                printf(" %d",a[i][j]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
