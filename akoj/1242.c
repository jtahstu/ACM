#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char a[10];
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        memset(a,'A',10);
        scanf("%s",a);
        if(a[2]=='A')
        {
            printf("0\n");
            continue;
        }
        else if(a[2]=='0')
        {
            printf("4.0\n");
            continue;
        }
        else
        {
            if(a[0]>=49&&a[1]<=57)
            {
                if(a[0]=='9')
                {
                    printf("4.0\n");
                    continue;
                }
                else if(a[0]=='8')
                {
                    if(a[1]<=57&&a[1]>=53)
                    {
                        printf("3.6\n");
                        continue;
                    }
                    else
                    {
                        printf("3.2\n");
                        continue;
                    }
                }
                else if(a[0]=='7')
                {
                    if(a[1]<=57&&a[1]>=53)
                    {
                        printf("2.8\n");
                        continue;
                    }
                    else
                    {
                        printf("2.3\n");
                        continue;
                    }
                }
                else if(a[0]=='6')
                {
                    if(a[1]<=57&&a[1]>=53)
                    {
                        printf("1.8\n");
                        continue;
                    }
                    else
                    {
                        printf("1.3\n");
                        continue;
                    }
                }
                else
                    printf("0\n");
            }
            if(a[0]=='G')
            {
                printf("4.0\n");
                continue;
            }
            if(a[0]=='J')
            {
                printf("3.4\n");
                continue;
            }
            if(a[0]=='X')
            {
                printf("2.7\n");
                continue;
            }
            if(a[0]=='Y')
            {
                printf("1.5\n");
                continue;
            }
            if(a[0]=='M')
            {
                printf("0\n");
            }
        }

    }
    return 0;
}
