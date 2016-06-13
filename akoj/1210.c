#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i,n;
    long int a[10000]={0};//直接全部赋值为0就可以了
n=0;
    while(scanf ("%ld",&a[n])!=EOF)
    {
        for(i=0;i<n;i++)
        {
            if(a[n]==a[i])
            {
                n--;
                //a[n]=0;这样就废掉这个空间了,0怎么输出---
                break;
            }
        }
        n++;
    }
    printf ("%ld",a[0]);
    int k;
    for(k=1;k<n;k++)
    {
            printf (" %ld",a[k]);
    }

printf ("\n");
    return 0;
}
