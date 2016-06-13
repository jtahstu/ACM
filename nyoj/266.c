#include <stdio.h>
#include <string.h>
int main(void)
{
    int n,k,i;
    char a[100];
    //freopen("input.txt", "r", stdin);
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
        k=strlen(a);

        for(i=k-1; i>=0; i--)
            if(a[i]>='a'&&a[i]<='z')
                printf("%c",a[i]);
        printf("\n");
    }
    return 0;
}
