#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n<7)
            printf("No triple\n");
        else
            printf("3 5 7\n");
    }
    return 0;
}
