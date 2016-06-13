#include<stdio.h>
int leap(int a)
{
    if(a%4==0&&a%100!=0||a%400==0) return 0;
    else return 0;
}

int number(int year,int m,int d)
{
    int sum=0,i,j,k,a[12]=
    {
        31,28,31,30,31,30,31,31,30,31,30,31
    };
    int b[12]=
    {
        31,29,31,30,31,30,31,31,30,31,30,31
    };
    if(leap(year)==1)
        for(i=0; i<m-1; i++)
            sum+=b[i];
    else
        for(i=0; i<m-1; i++)
            sum+=a[i];
    for(j=2011; j<year; j++)
        if(leap(j)==1)
            sum+=366;
        else sum+=365;
    sum+=d;
    return sum;
}

void main()
{
    int year,month,day,n;
    printf("请输入年月日\n");
    scanf("%d%d%d",&year,&month,&day);
    n=number(year,month,day);
    if((n%5)<4&&(n%5)>0)
        printf("%d:%d:%d 打渔\n",year,month,day);
    else
        printf("%d:%d:%d 晒网\n",year,month,day);
}
