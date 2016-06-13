/*
ACM之路
时间限制：1000 ms  |  内存限制：65535 KB
难度：0

描述

    转眼间，12级新生已经学习C语言一个多月，又要有很多人踏上 AC 之路了。

    就让下面这道题为大家开启 ACM 的大门吧。

输入
    只有一组测试数据。
    输入一个整数N。
输出
    输出N行。
    每行输出"I Love Acm."。（不输出引号）
样例输入

    2

样例输出

    I Love Acm.
    I Love Acm.
 */
#include "stdio.h"
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        puts("I Love Acm.");
    }
    return 0;
}
/*
#include<stdio.h>
main()
{
    int n;
    for(scanf("%d",&n); n--; printf("I Love Acm.\n"));
}
最优代码
*/
