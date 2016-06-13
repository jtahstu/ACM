#include<stdio.h>
int main()
{
    int i,a[71],b,c;
    a[1]=1;
    a[2]=2;
    while(scanf("%d",&b)==1)
    {
        for(i=3; i<=b; i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        printf("%d\n",a[b]);
    }
    return 0;
}
