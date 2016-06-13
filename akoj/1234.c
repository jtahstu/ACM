#include<stdio.h>
int main()
{
    int n;
    double a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        a=0;
        b=0;
        scanf("%lf%lf",&a,&b);
        if(b==0) printf("INF\n");
        else
        {
            c=a/b;
            printf("%.4lf\n",c);
        }
    }
    return 0;
}
