#include<stdio.h>
int mian()
{
    int i,x,y,z=1;

    scanf("%d%d",&x,&y);
    for(i=1; i<=y; i++)
        z=z*x%1000;
    if(z>=100)
    {
    printf("%d%d%d",x,y,z);

    }
    else
    {
    printf("%d%d%d",x,y,z);

    }
}
