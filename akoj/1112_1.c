#include<stdio.h>
int main()
{
    int a[100];
    int i,max,min,sum=0;
    double average;
    int cnt=0;
    while(scanf("%d",&a[cnt])!=EOF)
        cnt++;

    max=min=sum=a[0];
    for(i=1; i<cnt; i++)
    {
        sum+=a[i];
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("%d ",min);
    printf("%d ",max);
    printf("%.3f\n",sum*1.0/cnt);
}
