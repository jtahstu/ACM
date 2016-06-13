#include<stdio.h>
#include<string.h>
char a[100];
int main()
{
    int i;
    gets(a);
    int len = strlen(a);
    for(i = 0; i < len-1; i ++)
    {
        if(a[i] == ' '|| a[i] == ',' || a[i] == ';' || a[i] == '!')
            printf("%c",a[i-1]);
    }


}
