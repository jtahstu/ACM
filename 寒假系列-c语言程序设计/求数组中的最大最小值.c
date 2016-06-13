#include "math.h"
#define N 20
main()
{
    int i,a[N],max,min;
    printf("Please enter N numbers:\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    max=min=a[0];
    for(i=1;i<N;i++)
    {
        if(max<a[i])max=a[i];
        if(min>a[i])min=a[i];
    }
    printf("\nmax=%d,min=%d",max,min);
}

