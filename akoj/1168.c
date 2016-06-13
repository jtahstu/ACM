#include<stdio.h>
int main()
{
    int n,i,h,t;
    scanf("%d",&n);
    while(n--)
    {
        h=0;
        scanf("%d",&h);
        if(0<h&&h<=10) printf("1\n");
        else
        {
            if((h%5)==0) printf("%d\n",h/5-1);
            else printf("%d\n",h/5);
        }
    }
    return 0;
}
