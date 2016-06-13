#include<stdio.h>
void main()
{
    int a,b,c;
    for(a=1;a<=3;a++)
    for(b=1;b<=3;b++)
    for(c=1;c<=3;c++)
    if(a!=1&&c!=1&&c!=3&&a!=b&&a!=c&&b!=c)
    {
        printf("%c 将嫁给 A\n",'X'+a-1);
        printf("%c 将嫁给 B\n",'X'+b-1);
        printf("%c 将嫁给 C\n",'X'+c-1);
    }
}
