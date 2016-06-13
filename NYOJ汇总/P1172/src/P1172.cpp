/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=1172
 * by jtahstu on 2015/2/10 10:00
 */

#include<stdio.h>
long long n,m,sum;
void dfs(long long x)
{
    if(x>n) return ;
    if(x>=m&&x<=n) sum++;
    dfs(x*10+7);
    dfs(x*10+1);
}
int main()
{
    while(~scanf("%lld %lld",&m,&n))
    {
        sum=0;
        dfs(1);
        dfs(7);
        printf("%lld\n",sum);
    }
}
