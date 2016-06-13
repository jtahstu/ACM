#include<stdio.h>
void main()
{
    int  a,b,c,m,t;
    printf("请输入两个整数:\n");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    m=a*b;
    c=a%b;
    while(c!=0)
    {
        a=b;
        b=c;
        c=a%b;
    }
    printf("最大公约数是：\n%d\n",b);
    printf("最大公倍数是：\n%d\n",m/b);
}
