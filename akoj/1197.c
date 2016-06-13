#include "stdio.h"
main()
{
  int temp,num1,num2,num3,num4,a=0;
  while(scanf("%d%d%d%d",&num1,&num2,&num3,&num4)!=EOF)
    {
  if(num1>num3)
  {temp=num1; num1=num3; num3=temp;}
  if(num2>num4)
  {temp=num2; num2=num4; num4=temp;}
  if(num1>num2)
  {temp=num1; num1=num2; num2=temp;}
  if(num3>num4)
  {temp=num3; num3=num4; num4=temp;}
  if(num2>num3)
  {temp=num2; num2=num3; num3=temp;}
  a=num1+num2+num3;
  if(a<13) printf("good luck\n");
  else printf("oh no\n");
  }
  return 0;
}
