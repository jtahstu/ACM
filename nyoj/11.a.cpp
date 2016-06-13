#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char a[1001],len;
    int i,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",a);
        len=strlen(a);
        for(i=0; i<len; i++)
        {
            if(islower(a[i])) printf("%c",a[i]-32);
            if(isupper(a[i])) printf("%c",a[i]+32);
        }
        printf("\n");
    }
    return 0;
}
