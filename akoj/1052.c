#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,l,count,n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
        count=0;
        l=strlen(a);
        for(i=0; i<l; i++)
            if(a[i]<='9'&&a[i]>='0')
                count++;
        printf("%d\n",count);
    }
    return 0;
}
