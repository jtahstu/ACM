/*哥德巴赫猜想

Time Limit:3000MS  Memory Limit:655366K
Total Submit:116 Accepted:55

Description

著名的哥德巴赫猜想可以陈述为：任何一个不小于6的偶数一定可以拆成两个质数的和。如6=3+3,8=5+3等，你的任务是将一个大于6的偶数n拆成两个最接近的质数p,q,满足p+q=n.

Input

输入包含多组测试数据。每组数据包含1个偶数n（n在6到1000000之间包含边界）。

Output

对于每组测试数据，输出两个质数p,q(p<=q)满足p+q=n。

Sample Input


6
8
10
200000
Sample Output


3 3
3 5
5 5
99871 100129
Source

ahstu@ICPC03*/

#include<iostream>
#include<limits.h>
using namespace std;
int judge(int n)
{
    for(int i=2; i*i<=n; i++)
        if(n%i==0)return 0;
    return 1;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int x=0,y=0;
        bool flag=false;
        for(int i=n/2; i>2; i--)
        {
            if(judge(i)&&judge(n-i))
                {
                    x=i,y=n-i;flag=true;break;
                }
        }
        if(flag)cout<<x<<" "<<y<<endl;
    }
    return 0;
}

