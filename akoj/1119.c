#include<stdio.h>
void main()
{
    int n,i;
    double x,k;
    while(scanf("%d",&n)==1)
     {
         x=1;k=-1;
         for(i=3; i<=n; i+=2)
        {
            x+=k/i;
            k=-k;
        }
    printf("%lf\n",x*4);
     }
     return 0;
}
