#include<stdio.h>
int main()
{
    int i,n,m;

    while(1== scanf("%d",&n))
    {
    int a[10000],num=0;
    for (i =0; i<n; i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    {
        for(i=0;i<n;i++)
        if(a[i]<m)
        {
            num++;
        }
    }
    printf("%d\n",num);
    }
    return 0;
}
