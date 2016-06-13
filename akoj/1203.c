#include<stdio.h>
#include<string.h>
char input[705];
int main()
{
    while(1)
    {
        scanf("%s", input);
        if(strcmp(input, "0") == 0)
            exit(0);
        int i,sum=0;
        for( i = 0; input[i] != '\0'; i++)
        {
            sum += input[i] - '0';
        }
        printf("%d\n",sum);
    }

    return 0;
}
