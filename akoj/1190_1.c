#include<stdio.h>
int main()
{
    int n,a[200],i,j,b,c;
    while(scanf("%d",&n)!=EOF)
    {
        c=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&b);
        for(j=0; j<n; j++)
        {
            if(a[j]==b)
            {
                printf("%d\n",j);
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("-1\n");
        }
    }return 0;
}
