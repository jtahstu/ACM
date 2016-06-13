/*#include<stdio.h>
#include<math.h>
int main()
{
    __int64 cas,b,i,d;
    double a,m,n,c;
    scanf("%I64d",&cas);
    for(i=1; i<=cas; i++)
    {
        scanf("%lf",&n);
        a=n*log10(n);
        b=(__int64)(a);
        c=a-b;
         d=(__int64)(pow(10,c));
        printf("%I64d\n",d);
    }
    return 0;
}*/
// hdoj_1060 Leftmost Digit
// 0MS	236K	345 B	GCC

#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i, ncase;
	long long x;
	scanf("%d", &ncase);
    for(i = 0; i < ncase; i ++)
    {
        scanf("%ld", &n);
        double m = n * log10((double)n);
        double g = m - (long long)m;
        g = pow(10.0, g);
        printf("%d\n", (int)g);
    }
	return 0;
}
