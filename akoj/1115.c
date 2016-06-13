#include<stdio.h>
int main()
{
    int a,b,c,i;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        for(i=10;i<=100;i++)
            if(i%3==a&&i%5==b&&i%7==c)
             {
                printf("%d\n",i);
               break;
             }
             if(i>100) printf("No answer\n");
    }
    return 0;
}
