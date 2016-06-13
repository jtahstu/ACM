#include "stdio.h"
int main(int argc, char const *argv[])
{
    int n=0;
    //freopen("input.txt","r",stdin);
    while(scanf("%d",&n)==1)
    {
        if(n!=0)
        {
            if (n==153||n==370||n==371||n==407) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
