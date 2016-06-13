#include<stdio.h>
int main()
{
    int value;
    char s[20];
    scanf("%d",&value);
    itoa(value ,s,2);
    printf("%s\n",s);
    return 0;
}
