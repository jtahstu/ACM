/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=102
 * by jtahstu on 2015/2/12 19:00
 */

#include <iostream>
#include <cstdio>
using namespace std;
typedef long long in;
in erfen(in n,in p,in q)
{
    in a=n;
    in b=p;
    in result=1;
    while(b != 0)
    {
        if(b % 2 == 1)
        {
            result=(result * a)%q;  //乘一个a,也就是i
        }
        a =(a*a)%q; //平方
        b /= 2;  //把这个数截一半
    }
    return result;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        in n,p,q;
        in sum=0;
        scanf("%lld %lld %lld",&n,&p,&q);
        sum=erfen(n,p,q)%q;
        printf("%lld\n",sum);
    }
    return 0;
}
