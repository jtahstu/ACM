#include<stdio.h>
void main()
{
    int i,j,k,sum1,sum2;
    for(i=1;i<=10000;i++)
    {
        sum1=0;
        sum2=0;
        for(j=1;j<i;j++)
            if(i%j==0)
            sum1+=j;
        for(k=1;k<sum1;k++)
            if(sum1%k==0)
            sum2+=k;
        if(sum2==i&&i!=sum1&&i<sum1)
            printf("%d =>%d\n",i,sum1);
    }
}
