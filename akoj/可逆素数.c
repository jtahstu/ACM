#include<stdio.h>
void main()
{
    int  a,b,c,m,t;
    printf("��������������:\n");
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
    printf("���Լ���ǣ�\n%d\n",b);
    printf("��󹫱����ǣ�\n%d\n",m/b);
}
