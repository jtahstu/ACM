#include<stdio.h>
#include<string.h>
char str[50009];
void reverse(char str[])
{
    int len=strlen(str),i,j;
    char tmp;
    for(i=0,j=len-1; i<=j; i++,j--)
    {
        tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;
    }
}
int main()
{
    char str1[100];
    while(gets(str))
    {
        int len=strlen(str),k=0,j,i,p;
        reverse(str);

        for(i=0; i<len; i++)
        {
            if(str[i]==' ')
                break;
        }
        for(j=0; j<i; j++)
        {
            str1[j]=str[j];
        }
        str1[j]='\0';//一定要在末尾加'\0'
        reverse(str1);
        for(p=0; p<i; p++)
            printf("%c",str1[p]);
        for(j=i; j<len; j++)
        {
            if(str[j]==' ')
            {
                printf(" ");
            }
            else if(str[j]!=' ')
            {
                str1[k++]=str[j];
                if(str[j+1]==' '||str[j+1]=='\0')
                {
                    str1[k]='\0';
                    reverse(str1);
                    for(p=0; p<k; p++)
                        printf("%c",str1[p]);
                    k=0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
