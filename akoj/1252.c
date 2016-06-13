#include <stdio.h>
int g(int number)
{
    while(number%2==0)
    {number=number/2;}
    while(number%3==0)
    {number=number/3;}
    while(number%5==0)
    {number=number/5;}
    if(number == 1)
        return 1;
    else
        return 0;
}

int f(int N)
{
    int count=0;
    int number=1;
    while(1)
    {
        if(g(number))
        {
            count++;
        }
        if(count == N)
            return number;
        else
            number++;
    }
}

void main()
{
    int N=0;
    while(scanf("%d",&N)==1)
    {
        printf("%d\n",f(N));
    }
}
