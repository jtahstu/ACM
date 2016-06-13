#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int is_prime(int n)
{
    for (int i=2; i*i<=n; ++i)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int prime[100], count=0, n, p[100],maxp,m;
    for (int i=2; i<=100; ++i)
    {
        if (is_prime(i))
        {
            prime[count++]=i;
        }
    }
    scanf("%d",&m);
    while (m--)
    {
        scanf("%d",&n);
        memset(p,0,sizeof(p));// clear
        maxp=0;
        for (int i=1; i<=n; ++i)// 1*2*...*n
        {
            int tm=i;
            for (int j=0; j<count; ++j)
            {
                while (tm%prime[j]==0)
                {
                    tm/=prime[j];
                    ++p[j];
                    if (j>maxp)
                    {
                        maxp=j;
                    }
                }
            }
        }
        for (int i=0; i<=maxp; ++i)
        {
            printf("%d ",p[i]);
        }
        printf("\n");
    }
//system("pause");
    return 0;
}
