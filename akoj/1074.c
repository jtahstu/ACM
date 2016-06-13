#include<stdio.h>
int mod(int m,int n,int t)
{
    if(n>0)
    {
        int s=m%t;
        if(n==1)return s;
        if(n%2==0)return mod(s*s,n/2,t);
        return (mod(s*s,n/2,t)*s)%t;
    }
    return 1;
}
void main()
{
    int m,n,ans[1000],i,k=0;
   scanf("%d%d",&m,&n);
    while(m!=0||n!=0)
    {
        ans[k]=mod(m,n,1000);
        k++;
        scanf("%d%d",&m,&n);
    }
    for(i=0;i<k;i++)
        printf("%d\n",ans[i]);
}
