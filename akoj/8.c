#include "stdio.h"//
void main(void)
{
    char stext[1001],*p=stext;
    gets(stext);
    while(*p) p++;
    for(p--; p>stext; p--)
    {
        if(*p==' '||*p=='?'||*p=='.'||*p==';'||*p=='¡£')
        {
            printf("%s\n",p+1);
            *p='\0';
        }
    }
    printf("%s\n",stext);
}
