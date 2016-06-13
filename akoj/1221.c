#include<stdio.h>
int main()
{
    int n,jz,sz,sum,sum_1,i;
    int a[101];
    scanf("%d",&n);
    while(n--)
    {
        sum=0;
        scanf("%d%d",&jz,&sz);
        for(i=1;i<101;i++)
        {
            a[i]=sz%jz;
            sz=sz/jz;
            sum=sum*10+a[i];
        }
        printf("%d",sum%(jz+1));
    }
    return 0;
}


