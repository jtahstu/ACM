#include<stdio.h>
int main()
{
    int n,a,b,c,t,min,max;
    while(scanf("%d",&n)==1)
   {
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
       min=a;max=a;if(b<min) min=b;if(b>max) max=b;
        if(max/min==c) printf("%d/%d=%d\n",max,min,c);
       else if(max-min==c) printf("%d-%d=%d\n",max,min,c);
       else if(max+min==c) printf("%d+%d=%d\n",max,min,c);
       else if(max*min==c) printf("%d*%d=%d\n",max,min,c);
        else printf("None\n");
    }
   }
}
