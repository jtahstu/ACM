#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10]="c:\\tc\\tc.exe";
    int position;
    position=(int)s1-(int)strstr(s1,".exe");
}
