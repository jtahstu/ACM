#include<stdio.h>
int main()
{
    int a,b,c,i,n,sum1,sum2;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        c=0;sum1=0;sum2=0;
        for(i=1;i<=a;i++)
            sum1+=i;
        for(n=1;n<=b;n++)
           sum2+=n;
        c=sum1*sum2;
        printf("%d\n",c);
    }
    return 0;
}
