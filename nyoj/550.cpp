/*三位数逆序输出
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
输入一个三位正整数，将其三个数位逆序颠倒后输出。

输入
有多组测试数据，以EOF结束。
每组数据输入一个三位正整数。
输出
每组数据输出一行。
样例输入
789
样例输出
987
来源
2012年C语言上机题
上传者
ACM_赵铭浩*/

#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    while(cin>>n)
    {
        cout<<(n%10)*100+(n/10%10)*10+(n/100)<<endl;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char c[3];
    while (~scanf("%s",c))
        printf("%c%c%c\n",c[2],c[1],c[0]);
}

