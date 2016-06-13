#include<stdio.h>
#include<string.h>
int main()
{
 char a[10];
 int M,len,i;
 scanf("%d",&M);
 while(M--)
 {
  memset(a,'0',sizeof(a));
  scanf("%s",a);
  len=strlen(a);
  for(i=1;i<len&&a[i]=='0';i++);
  if(a[i]=='\0')
   printf("0\n");
  else
  {
  for(;i<len;i++)
   printf("%c",a[i]);
  printf("\n");
  }
 }
return 0;
}
