#include<stdio.h>
main()
{
    int n=0,i=0;
    char c;
    while((c=getchar())!='\n')
    {
        i++;
        if(c=='j') n++;
    }
    printf("i=%d n=%d\n",i,n);
}
