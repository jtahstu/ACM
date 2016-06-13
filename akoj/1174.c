#include<stdio.h>
#define pi 3.1415926
int main()
{
    double a,s=0;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf",&a);
        s=a*a*pi/3;
        printf("%.2lf\n",s);
    }
    return 0;
}

#include<stdio.h>
#define PI 3.1415926
int main()
{
int a;
scanf("%d",&a);
while(a--)
{
double n;
scanf("%lf",&n);
printf("%.2lf\n",n*n*PI/3);
}
return 0;
}
