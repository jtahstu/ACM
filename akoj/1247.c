#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,a,b,k,l,r;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==1) printf("1\n");
        if(n==2) printf("1\n");
        if(n>2)
        {
            a=1,b=1,k=n-2;
            while(k--)
            {
                l=a+b;
                r=a;
                a=b;
                b=r;
                b=l;
            }
            printf("%d\n",l);
        }
    }
    return 0;
}

/*分解整数

Time Limit:1000MS  Memory Limit:65536K
Total Submit:1 Accepted:1

Description

作为Acmer的你现在接到任务，需要将整数n写成n=x1+x2+…..xk这种形式，其中xi(i>=1&&i<=k)要为奇数。例如n=5,可以写成
5=1+1+1+1+1,5=1+1+3,5=1+3+1,5=3+1+1,5=5这5中形式，求出n有多少种分解方法

Input

有多组输入，输入以文件结尾，每组输入一个整数n

Output

输出分解方案的种数

Sample Input

3
4

Sample Output

2
3*/
#include "stdio.h"
int f(int n)
{
    if(n==1||n==2) return 1;
    if(n>=3) return f(n-1)+f(n-2);
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",f(n) );
    }
    return 0;
}
