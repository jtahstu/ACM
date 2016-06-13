#include <stdio.h>
int F(int n)
{
    if(n==1||n==2)
    {return 1;}
    else
    {return F(n-1)+F(n-2);}
}
int main()
{
    int i,n;
    scanf("%d",&i);
    while(i--)
    {
        scanf("%d",&n);
        printf("%d\n",F(n));
    }
    return 0;
}

