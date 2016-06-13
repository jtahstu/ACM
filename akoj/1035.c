#include <stdio.h>
    int main(void)
    {
        char a[10];
        int i;
        for(i=0;i<10;i++)
        {
            while(scanf("%c",&a[i])!=EOF)
            {
                printf("%c",a[i]);
            }
        }
        printf("\n");
        return 0;
    }
