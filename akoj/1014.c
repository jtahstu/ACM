#include<stdio.h>
int isprime(int n)/*判断n是否为素数的函数*/
{
    int j,x;
    for(j=2; j<n; j++)
        if(n%j==0)
        {
            x=0;
            break;
        }
        else
            x=1;
    return(x);
}
main()
{
    int n,i;
    printf("请输入一个不小于6的偶数：\n");
    scanf("%d",&n);
    while(n<6||n%2!=0)
    {
        printf("您的输入有误，请重新输入：\n");
        scanf("%d",&n);
    }
    for(i=3; i<(n/2); i++)
    {
        if(isprime(i)!=0)
            if(isprime(n-i)!=0)
                printf("%d可以写成%d与%d之和。\n",n,i,n-i);
    }
}
