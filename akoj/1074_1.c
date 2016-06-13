#include<stdio.h>
int main()
{
    int a,b,result,i;
    while(scanf("%d%d",&a,&b)&&a&&b)
    {
        a %= 1000;
        result = a;
        for(i=1;i<b;i++)
        {
            result = result*a;
            result %= 1000;
            if (result == 0) break;
        }
        printf("%d\n",result);
    }
    return 0;
}
