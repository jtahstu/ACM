/*#include<stdio.h>
int main()
{
    char t[100]= {0};
    int a,b,c,d;
    int B[8]= {0};
    int i,n;
    while(scanf("%d",&n)!=EOF)
    while(n--)
    {
        gets(t);
        sscanf(t,"%d.%d.%d.%d",&a,&b,&c,&d);
        for(i=31; i>=0; i--)
        {
            B[i]=a%2;
            a/=2;
        }
        for(i=0; i<32; i++)
            printf("%d",B[i]);
        printf("\n");
    }

}*/
#include <stdio.h>

int main()
{
  int a;
  while(scanf("%d",&a)==1){
  int i=0,j;
  int bin[32];
  if( a==0) printf("0\n");
  while(a>0)
  {
    bin[i]=a%2;
    a/=2;
    i++;
  }
  for(j=i-1;j>=0;j--)
  {

   printf("%d",bin[j]);}
    printf("\n");}
}
