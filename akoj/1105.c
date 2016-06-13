#include<stdio.h>
int main()
{
    double f;
    scanf("%lf",&f);
    if(f<0) printf("%.2lf\n",-f);
    else printf("%.2lf\n",f);
    return 0;
}
