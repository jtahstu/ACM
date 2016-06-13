#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c,t;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        if(b>c)
        {
            t=b;
            b=c;
            c=t;
        }
        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        if(a+b>c)
        {
            if(a*a+b*b<c*c)printf("Obtuse Triangle\n");
            if(a*a+b*b==c*c)printf("Rect Triangle\n");
            if(a*a+b*b>c*c)printf("Actue Triangle\n");
        }
        else continue;
    }
    return 0;
}
