#include<stdio.h>
int fact(int n)
{
    int i;
    for(i=2; i*i<=n; i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int i, t , n;
    scanf("%d",&t);
    while(t--)
    {
        int sum=1;
        scanf("%d",&n);
        for(i=2; i<=n; i++)
            if(fact(i)==1)
                sum=sum*i%1000000;
        printf("%d\n",sum);
    }
    return 0;
}
