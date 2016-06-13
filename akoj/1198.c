#include<stdio.h>
int fun(int n)
{
    long long f;
    if(n==2)
        f=1;
    else if(n==3)
        f=2;
    else f=(n-1)*(fun(n-2)+fun(n-1));
    return f;
}

int main()
{
    int n;
    while(scanf("%d",&n)>0)
    {
        printf("%ld\n",fun(n));
    }
    return 0;
}
