#include<stdio.h>
#include<math.h>
int main()
{
    int x=0;
    double pi;
    pi=1.0* atan(1)*4;
    scanf("%d",&x);
    printf("%.3lf %.3lf\n",sin(x*pi/180),cos(x*pi/180));
    return 0;
}
