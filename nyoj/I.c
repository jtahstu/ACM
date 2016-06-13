#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1&&n)
    {
        if(n==1)
        {
            printf("0\n");
            continue;
        }
        if(n==2)
        {
            printf("1\n");
            continue;
        }
      printf("%d\n",(n-1)/2);
    }
  return 0;
}
