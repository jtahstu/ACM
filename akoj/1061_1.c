#include <stdio.h>
int cm(int a, int b);
int main()
{
    int i = 0, j = 0, n = 0;
    int a = 0, b = 0;
    while(scanf("%d",&n) != EOF)
    {
        a = 1;
        for(i = 0; i<n; i++)
        {
            scanf("%d",&b);
            a = cm(a,b);
        }
        printf("%d\n",a);
    }
    return 0;
}
int cm(int a, int b)
{
    int t = 0, x = a, y = b;
    if(a<b)
    {
        t = a;
        a = b;
        b = t;
    }
    while(b!=0)
    {
        t = a%b;
        a = b;
        b = t;
    }
    return x/a*y;//ÏÈ³ýÔÚ³Ë±ÜÃâÒç³ö¡£
}
