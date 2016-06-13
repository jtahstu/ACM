#include<stdio.h>
int main()
{
    double n,s=0;
    scanf("%lf",&n);
    s=n*95;
    if(s>=300)
    printf("%.2f\n",0.85*s);
    else
    printf("%.2f\n",s);
    return 0;
}
