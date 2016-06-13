#include<stdio.h>
int main()
{
    int x,y;
    char s[1];
    while(scanf("%s%d%d",s,&x,&y)==3)
    {
        if(s[0]=='L')
        {
            if(x>y) printf("%d\n",x);
            else printf("%d\n",y);
        }
        else if(s[0]=='S')
        {
            if(x>y) printf("%d\n",y);
            else printf("%d\n",x);
        }
        else printf("Input error!\n");
    }
    return 0;
}
