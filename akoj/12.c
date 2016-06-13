#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,n,m;
    scanf("%d",&n);
    while(n--)
    {
        a=b=m=0;
    scanf("%d",&s);
    while(a>10)
    {
        s=s/10;
        a=s;
        b++;
    }
    c=a*(pow(10,b));
    m=s-c;
    printf("%d\n",m);
    }
}
