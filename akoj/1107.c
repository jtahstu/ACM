#include<stdio.h>
int main()
{
    int year,a;
    scanf("%d",&year);
    a=leap(year);
    if(a==1) printf("yes\n");
    else printf("no\n");
    return 0;
}
int leap(int a)
{
    if(a%4==0&&a%100!=0||a%400==0)
        return 1;
    else return 0;
}
				