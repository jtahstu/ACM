#include "stdio.h"
int main()
{
    int a[1000],N,i;
    //int max=0,min=0;
    while(scanf("%d",&N)==1)
    {
         int max=0,min=0;
        for (i = 0; i < N; i++)
        {
            scanf("%d",&a[i]);
        }
        max=min=a[0];
        for (i = 0; i < N; i++)
        {
            if (a[i]>max)
            {
                max=a[i];
            }
            if (a[i]<min)
            {
                min=a[i];
            }
        }
        printf("%d\n",max-min);
    }
    return 0;
}
