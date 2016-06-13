#include<stdio.h>
void qusort(int s[],int start,int end)
{
    int i,j;
    i=start;
    j=end;
    s[0]=s[start];
    while(i<j)
    {
        while(i<j&&s[0]<s[j])
            j--;
        if(i<j)
        {
            s[i]=s[j];
            i++;
        }
        while(i<j&&s[i]<=s[0])
            i++;
        if(i<j)
        {
            s[j]=s[i];
            j--;
        }
    }
s[i]=s[0];
if(start<i)
    qusort(s,start,j-1);
if(i<end)
    qusort(s,j+1,end);
}


void main()
{
    int a[11],i,x,y;
    scanf("%d%d",&x,&y);
    for(i=1;i<=x;i++)
        scanf("%d",&a[i]);
    qusort(a,1,x);
    if(y==0)
    for(i=1;i<=x;i++)
        printf("%d\n",a[i]);
    else
        for(i=x;i>0;i--)
        printf("%d\n",a[i]);
}











