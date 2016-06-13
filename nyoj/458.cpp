/*小光棍数
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
最近Topcoder的XD遇到了一个难题，倘若一个数的三次方的后三位是111，他把这样的数称为小光棍数。他已经知道了第一个小光棍数是471,471的三次方是104487111，现在他想知道第m（m<=10000000000）个小光棍数是多少？
输入
有多组测试数据。第一行一个整数n，表示有n组测试数据。接下来的每行有一个整数m。
输出
输出第m个小光棍数。
样例输入
1
1
样例输出
471
来源
原创
上传者
wmnwmn*/

#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while(n--)
    {
        long long m;
        cin>>m;
        cout<<(m-1)*1000+471<<endl;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while(k--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",n);
    }
    return 0;
}
