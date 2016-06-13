/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1010
 * by jtahstu on 2015/2/9 13:00
 * 扩展欧几里得
 * poj 1061
 */
#include<cstdio>

long long ect_gcd ( long long a, long long b, long long &x, long long &y )
{
    long long tmp, ret;
    if ( b == 0 )
    {
        x = 1, y = 0;
        return a;
    }
    ret = ect_gcd ( b, a%b, x, y );
    tmp = x; x = y; y = tmp - a / b * y;
    return ret;
}

int main()
{
    long long x, y, m, n, l;
    while ( scanf("%lld%lld%lld%lld%lld",&x,&y,&m,&n,&l) != EOF )
    {
        long long a = n - m, b = l, c = x - y;
        long long d = ect_gcd ( a, b, x, y );
        if ( c % d != 0 )
        {
            printf("Impossible\n");
            continue;
        }
        x = ( x * c / d ) % ( b / d );
        if ( x < 0 ) x += b / d;
        printf("%lld\n",x);
    }
    return 0;
}
