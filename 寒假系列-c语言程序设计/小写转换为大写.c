#include<stdio.h>
main()
{
    int i;
  char a[20];
  printf("Please input a array:\n");
  for(i=0;i<20;i++)
        a[i]=getchar();
  for(i=0;i<20;i++)
    if(a[i]>='a'&&a[i]<='z')
    a[i]=a[i]-32;
  printf("\n");
  for(i=0;i<20;i++)
    printf("%c",a[i]);

}
