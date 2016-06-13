#include<stdio.h>
#include<string.h>
int main()
{
    int n,b,k,l,i,j;
    char a[100],c[100],max;
    scanf("%d",&n);
    while(n--)
    {
        max=0;
        memset(a,0,sizeof(a));
        memset(c,0,sizeof(c));
        scanf("%s %d",a,&b);
        k=strlen(a);
        for(j=0,i=0;j<k-b;j++)
        {   for(;i<=b+j;i++)
            {  if(max<a[i])
              {
                  max=a[i];
                  l=i;
                  c[j]=max;
                }
            }
         i=l+1;
         max=0;
        }
            for(i=0;i<k-b;i++)
                printf("%c",c[i]);
            printf("\n");
    }
    return 0;
}
