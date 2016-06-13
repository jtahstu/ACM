#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if((2*a)%b==0) printf("%d\n",(2*a)/b);
    else printf("%d\n",(2*a)/b+1);
}
