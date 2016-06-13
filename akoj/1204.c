#include<stdio.h>
int main()
{
    int f[1001],g[1001],n,m,min,i;
    //freopen("input.txt","r",stdin);
    while(scanf("%d%d",&m,&n)!=EOF)
    {
       int num=0;
        for(i=1; i<=m; i++)
            scanf("%d",&f[i]);
        for(i=1; i<=n; i++)
            scanf("%d",&g[i]);
            min=m;
        if(n<min) min=n;
        for(i=1; i<=min; i++)
        {
            if(f[i]==g[i]) num++;
        }
        printf("%d\n",num);
    }
    return 0;
}
