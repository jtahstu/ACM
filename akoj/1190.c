#include <stdio.h>
int main()
{
    int n,i;
    while (scanf("%d",&n)!=EOF)
    {
        int x,a[200],fla=0;
        for (i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&x);
        for (i=0; i<n; i++)
        {
            if (a[i]==x)
            {
                printf("%d\n",i);
                fla=1;
                break;
            }
        }
        if (fla==0)
        {
            printf("-1\n");
        }
    }
    return 0;
}
