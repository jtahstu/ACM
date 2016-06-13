#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *s=(char *)malloc(sizeof(char));
    int len,i;
    while(scanf("%s",s)!=EOF)
    {
        len=strlen(s);
        for(i=0;i<len;i++)
        {
            if(s[i]=='a'||s[i]=='b'||s[i]=='c')
                printf("2");
            else if(s[i]=='d'||s[i]=='e'||s[i]=='f')
                printf("3");
            else if(s[i]=='g'||s[i]=='h'||s[i]=='i')
                printf("4");
            else if(s[i]=='j'||s[i]=='k'||s[i]=='l')
                printf("5");
            else if(s[i]=='m'||s[i]=='n'||s[i]=='o')
                printf("6");
            else if(s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s')
                printf("7");
            else if(s[i]=='t'||s[i]=='u'||s[i]=='v')
                printf("8");
            else if(s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z')
                printf("9");
        }
        printf("\n");
    }
    return 0;
}
