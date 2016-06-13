#include<stdio.h>
void result(int a,int b,int c,int *x2,int *y2)
{
    int x[100],y[100],z[100];
    int i,j,d,t,gcd;
    x[0]=0;
    y[0]=1;
    for(i=0;i<100;i++)
    {
        z[i]=a/b;
        d=a%b;
        a=b;
        b=d;
        if(d==0)
        {
            gcd=a;
            break;
        }
        if(i==0)
        {
            x[1]=1;
            y[1]=z[0];
        }
        else
        {
            x[i+1]=z[i]*x[i]+x[i-1];
            y[i+1]=z[i]*y[i]+y[i-1];
        }
    }
    for(t=-1,j=1;j<i;j++)
        t=-t;
    *x2=-t*x[i];
    *y2=t*y[i];
    if(c%gcd!=0)
    {
        printf("无解！\n");

    }
    t=c/gcd;
    *x2=*x2*t;
    *y2=*y2*t;
}

void test(int a,int b,int c,int x,int y)
{
    if(a*x+b*y==c)
        printf("结果正确!\n");
    else
        printf("结果错误！\n");
}

void main()
{
    int a,b,c,x2,y2;
    printf("请输入a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    result(a,b,c,&x2,&y2);
    test(a,b,c,x2,y2);
    printf("x=%d,y=%d\n",x2,y2);
}
