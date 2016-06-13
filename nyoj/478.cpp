#include<stdio.h>
#include<math.h>
long sum[500005];
int main()
{
    int t,n,i,ss,j;
    for(i=1; i<=500000; i++)
        for(j=1; j*i<=500000; j++)//是i的倍数的加i
            sum[i*j]+=i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%ld\n",sum[n]-n);
    }
    return 0;
}
