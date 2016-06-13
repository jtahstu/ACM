#include<stdio.h>
int main()
{
    int a1,a2,a3;
    while(scanf("%d%d%d",&a1,&a2,&a3)<=10000)
    {
    if(a1==-1&&a2==-1&&a3==-1)
      return 0;
    if(a1>168&&a2>168&&a3>168)
        printf("NO CRASH\n");
    if(a1<=168)
        printf("CRASH %d\n",a1);
     if(a1>168&&a2<=168)
        printf("CRASH %d\n",a2);
    if(a1>168&&a2>168&&a3<=168)
        printf("CRASH %d\n",a3);
    }
}
