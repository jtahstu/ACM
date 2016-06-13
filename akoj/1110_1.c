#include<stdio.h>
int main()
{
    int i=0;
    long long n;
    scanf("%I64d",&n);
    while(n>1&&n<=1000000000)
    {
        while(n!=1)
        {
            if(n % 2==1)
                n = n * 3 + 1;
            else
                n =n/2;
            i ++;
        }
        printf("%d\n",i);
    }
    return 0;
}
