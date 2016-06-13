#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int a[152]= {0};
int main()
{
    memset(a,0,sizeof(int));
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int i;
        scanf("%d",&i);
        a[i]++;
    }
    for(int i=0; i<=150; i++)
    {
        for(int j=0; j<a[i]; j++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
