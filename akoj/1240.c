#include<stdio.h>
int main()
{
    double a,b,c,x,y,z,t,m;
    a=0;b=0;c=0;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {x=0;y=0;z=0;
        if(a==0&&b==0&&c==0) break;
        scanf("%lf%lf%lf",&x,&y,&z);
        {
            if(a>b){m=a;a=b;b=m;}
            if(a>c){m=a;a=c;c=m;}
            if(b>c){m=b;b=c;c=m;}
        }
        {
            if(x>y){t=x;x=y;y=t;}
            if(x>z){t=x;x=z;z=t;}
            if(y>z){t=y;y=z;z=t;}
        }
        if(a>=x&&b>=y&&c>=z)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}


