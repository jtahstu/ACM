#include<stdio.h>
double f(int n)
{
    int i;
    double mu1;
    mu1=1;
    for(i=1;i<=n;++i)
        mu1*=i;
    return mu1;
}

int c(int n,int k)
{
    return f(n)/(f(k)*f(n-k));
}

int main(void)
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d\n",c(n,k));
    return 0;
}
