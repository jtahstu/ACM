/*
sum of all integer numbers
时间限制：1000 ms  |  内存限制：65535 KB
难度：0

描述
    Your task is to find the sum of all integer numbers lying between 1 and N inclusive.

输入
    There are multiple test cases.
    The input consists of a single integer N that is not greater than 10000 by it's absolute value.
输出
    Write a single integer number that is the sum of all integer numbers lying between 1 and N inclusive.
样例输入

    3

样例输出

    6
 */

#include "stdio.h"
#include "stdlib.h"
int main()
{
    int n;
    freopen("input.txt","r",stdin);
    while(scanf("%d",&n)!=EOF)
    printf("%d\n",(n+1)*(abs(n-1)+1)/2);
    return 0;
}
/*
 
#include <iostream>
#include <stdio.h>
using namespace std;

int Abs(int n)
{
    return n<0?-n:n;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",(n+1)*(Abs(n-1)+1)/2);
    }
    return 0;
}
        最优代码
 */
