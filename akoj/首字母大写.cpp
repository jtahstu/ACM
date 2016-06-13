#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    while(gets(str)!=NULL)
    {
        int i;
        for(i=0; i<strlen(str); i++)
            if(str[i]==' ')
                str[i+1]=str[i+1]-32;
        printf("%c",str[0]-32);
        for(i=1; i<strlen(str); i++)
            printf("%c",str[i]);
        printf("\n");
    }
    return 0;
}
