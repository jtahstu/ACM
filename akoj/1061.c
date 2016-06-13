#include <stdio.h>
int gys(int a,int b)
{
    if(b==0)
        return a;
    else
        return gys(b,a%b);
}
int lcm(int a,int b)
{
    if(a>b)  return b*(a/gys(a,b));
    else     return b*(a/gys(b,a));
}
int main()
{
    int n,a,b,i;
    while(~scanf("%d",&n))
    {
        scanf("%d",&a);
        for(i=1; i<n; i++)
        {
            scanf("%d",&b);
            a=lcm(a,b);
        }
        printf("%d\n",a);
    }
    return 0;
}
