#include<stdio.h>
int main()
{
    int N,n,a[101],min,t,i;
    while(scanf("%d",&N),N==2)
    {
        for(i=1; i<=N; i++)
        {
            scanf("%d",&a[i]);
        }
        min=a[1];
        for(i=1; i<=N; i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        for(i=1; i<=N; i++)
        {
            if(a[i]==min)
            {
                t=a[1];
                a[1]=a[i];
                a[i]=t;
            }
        }
        for(i=1; i<=N; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
