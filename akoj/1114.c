#include<stdio.h>
#include<math.h>//153 370 371 407
int main()
{
    int a,b,x,y,z,i;
    scanf("%d%d",&a,&b);
       if(a<100) a=100;
       if(b>999) b=999;
       for(i=a;i<=b;i++)
       {
           x=i/100;
           y=i/10%10;
           z=i%10;
           if(x*x*x+y*y*y+z*z*z==i)
            printf("%d\n",i);
       }
       return 0;
}
