#include<stdio.h>
void main()
{
    int x[7],y[7],s,i;
    s=2520/6;
    for(i=2;i<=6;i++)
        y[i]=s*(9-i)/(8-i);
    y[1]=x[1]=(s-y[6]/3)*8/7;
    for(i=2;i<=6;i++)
        x[i]=y[i]-y[i-1]/(10-i);
    for(i=1;i<=6;i++)
        printf("x[%d]=%d\n",i,x[i]);
}
