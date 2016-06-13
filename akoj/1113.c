#include<stdio.h>
int main()
{
    int n,i=0,a;
    scanf("%d",&n);
    while(n>9)
    {
        n=n/10;
        i++;
    }
    printf("%d\n",i+1);
}
