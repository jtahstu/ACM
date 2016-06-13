#include"stdio.h"
#include<stdlib.h>
int main()
{
    int a[109][109]= {0},i,j,k,n,m,top,x,y;
    top=1;
    scanf("%d",&n);
    a[x=0][y=n-1]=1;
    while(top<n*n)
    {
        while(x+1<n&&!a[x+1][y]) a[++x][y]=++top;
        while(y-1>=0&&!a[x][y-1]) a[x][--y]=++top;
        while(x-1>=0&&!a[x-1][y]) a[--x][y]=++top;
        while(y+1<n&&!a[x][y+1]) a[x][++y]=++top;
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)

            printf("%d ",a[i][j]);
        printf("\n");
    }
    //system("33.exe\n");
}

#include<stdio.h>
int main()
{
    int a,b,c,d,n,sum=1;
    int yi[101][101];
    scanf("%d",&n);
    for(a=0; a<=(n-1)/2; a++)
    {
        for(b=a; b<=n-a-1; b++)
            yi[b][n-a-1]=sum++;
        for(b=n-2-a; b>=a; b--)
            yi[n-a-1][b]=sum++;
        for(b=n-a-2; b>=a; b--)
            yi[b][a]=sum++;
        for(b=a+1; b<n-a-1; b++)
            yi[a][b]=sum++;
    }
    for(c=0; c<n; c++)
    {
        for(d=0; d<n; d++)
            printf("%d ",yi[c][d]);
        printf("\n");
    }
}
