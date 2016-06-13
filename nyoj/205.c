/*求余数
时间限制：1000 ms  |  内存限制：65535 KB
难度：3
描述
现在给你一个自然数n，它的位数小于等于一百万，现在你要做的就是求出这个数除10003之后的余数
输入
第一行有一个整数m(1<=m<=8),表示有m组测试数据；
随后m行每行有一个自然数n。
输出
输出n整除10003之后的余数，每次输出占一行。
样例输入
3
4
5
465456541
样例输出
4
5
6948*/

#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char a[1000001];
        int s=0,i=0,len;
        scanf("%s",a);
        len=strlen(a);
        for(i=0; i<len; i++)
            {
            s=(s*10+a[i]-'0')%10003;
            }
        printf("%d\n", s%10003);
    }
    return 0;
}


