#include<stdio.h>
#include<math.h>
void main()
{
    int n,n2,n3,n4;
    double n1;
    scanf("%d",&n);
    if(n>=100000||n<=0)
     {
         return 0;
     }
    if(n>0&&n<100000)
    {
        n1=sqrt(n);
        if(n1*n1==n)
            printf("%d\n",n);
        else
        {
            n2=n1*n1;
            n3=(n1+1)*(n1+1);
            n4=n1*n1;
            if((n4-n2)<(n3-n4))
                printf("%d\n",n4);
            else
                printf("%d\n",n3);
        }
    }
    return 0;
}
