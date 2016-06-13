#include<stdio.h>
void main()
{
    long i,j,k1,k2,k3,a[10]={0},num,m,n,sum;
    printf("请输入一个数表示范围：\n");
    scanf("%ld",&num);
    printf("结果是：");
    for(j=0;j<num;j++)
    {
        m=j;
        n=1;
        sum=0;
        k1=10;
        k2=1;
        while(m!=0)
        {
            a[n]=j%k1;
            n++;
            k1*=10;
            m=m/10;

        }
        k1=k1/10;
        k3=k1;
        for(i=1;i<=n-1;i++)
        {
            sum+=(a[i]/k2*a[n-i])%k1*k2;
            k2*=10;
            k1/=10;
        }
        sum=sum%k3;
        if(sum==j)
            printf("%5ld",sum);
    }
    printf("\n");
}
