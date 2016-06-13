#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a[100];
    int len=0,l=0,i,m=0;
    for(i=0; i<100; i++)
    {
        scanf("%d",a[i]);
        m++;
    }
    printf("%d\n",m);
}
