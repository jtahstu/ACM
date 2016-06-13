/*Description

小胖最喜欢的数字是2！所以他经常会使用一些手段，把一些非2的数字变成2，并为此得意不已。他会且仅会的两种手段是：
1.把某个数m除以2，即m=m/2
2.把某个数m加上2，即m=m+2
有一天他突发奇想，想把[a,b]区间中所有的数一个一个地变成2，这是一个巨大的无聊的工程，所以他想知道他最少得花多少操作才能达到目的。

Input

输入包含多组数据（100组数据），EOF结束。
每组数据以两个整数开头：a，b(0<=a<=b<=10000)，意义如题意描述。

Output

每组数据输出一行，最少操作数。

Sample Input
2 3
3 5

Sample Output
2
4
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,m,i;
    int s[10001];
    s[0]=1;s[1]=2;s[2]=0;s[3]=2;
    for(int i=4; i<=10000; i++)
        s[i]=s[i/2]+1;
    while(cin>>a>>b)
    {
        int sum=0;
        for(int i=a; i<=b; i++)
        {
            sum+=s[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
