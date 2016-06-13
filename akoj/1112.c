#include<stdio.h>
int main()
{
    int a[1001],i=0,max,min,sum=0,x;
    while(scanf("%d",&a[i])!=EOF)
        i++;
    min=max=sum=a[0];
    for(x=1; x<i; x++)
    {
        if(a[x]<min) min=a[x];
        if(a[x]>max) max=a[x];
        sum+=a[x];
    }
    printf("%d %d %.3f\n",min,max,sum*1.0/i);
    return 0;
}
