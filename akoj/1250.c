#include<stdio.h>
int main()
{
     int n,a,b,c,d;
     scanf("%d",&n);
     while(n--)
     {
         scanf("%d.%d.%d.%d",&a,&b,&c,&d);
         if(a<256&&b<256&&c<256&&d<256&&a>=0&&b>=0&&c>=0&&d>=0)
            printf("Yes!\n");
         else
            printf("No!\n");
     }
    return 0;
}
