#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100];
    int i;
    int t;
    while(gets(a))
    {
     t=strlen(a);
     putchar(a[0]-32);
     for(i=1;i<t;i++)
     {
      if(a[i-1]==' '&&isalpha(a[i]))
      {
       putchar(a[i]-32);
      }
      else
      putchar(a[i]);
     }
     printf("\n");
    }
    return 0;
}
