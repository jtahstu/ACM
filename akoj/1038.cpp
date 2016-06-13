/*不吉利的数字

Time Limit:1000MS  Memory Limit:65536K
Total Submit:62 Accepted:39

Description

一些普通的数字在很多人眼里是不吉利。如数字4，谐音“死”，所以很多地方都没有带4的数字：比如新校区澡堂衣柜编号及没有4；再如数字13，在西方人眼中代表着坏运气，也是不吉利的数字，13不出远门，楼层不设第13层等等。

假如某些人认为0是不吉利的数字，并且在他们以后的生活中，记录数据都在不在使用含有0的自然数。

他们记录数的序列是1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19,21,22.......n，由于不使用数字0，他们记录的数和我们实际使用的自然数有一定的差别，如他们的11，实际就是第10个数，21就是第19个数，以此类推。。。

现在给你一个数n,请判断在不不含0的序列中的，如果在，求n是第几个数，不在，输出Unlucky。

Input

有多组测试数据<5000
每组数据占一行，每行有一个数n（0<=n<=1000000）。
以EOF结尾

Output

每组输出占一行，如果n在不含0的序列中，输出是第几个。如果不在不含0的序列中，输出Unlucky；

Sample Input


11
9
21
10
Sample Output


10
9
19
Unlucky
Hint

105,10523等等，都是含有0的

Source*/

#include<iostream>
using namespace std;
int res;
int sum(int x,int y)
{
    int i,k=1;
    for(i=0; i<y; i++)
        k*=9;
    return k*x;
}
bool flag(int y)
{
    int x,z=0;
    while(y)
    {
        x=y%10;
        y=y/10;
        if(x==0)
            return false;
        res+=sum(x,z);
        z++;
    }
    return true;
}
int main()
{
    int n;
    while(cin>>n)
    {
        res=0;
        if(n==0||!flag(n))
            cout<<"Unlucky"<<endl;
        else
            cout<<res<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int judge(int n)//判断数字中是否包含0
{
    if (n == 0) return true;
    while (n)
    {
        if (n % 10 == 0)
            return 1;
        n /= 10;
    }
    return 0;
}
int main(void)
{
    int n, i, s;
    while (cin>>n)
    {
        if (judge(n))
           cout<<"Unlucky"<<endl;
        else
        {
            i = 1;
            s = 0;
            while (n > 0)//将10进制转换为9进制
            {
                s += n % 10 * i;
                n /= 10;
                i *= 9;
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
#define N 1000001
int a[N];
int main()
{
    int n,i,count=1;
    for(i=0; i<N; i++)
    {
        int j=i,bz=1;
        while(true)
        {
            if(j%10==0)
            {
                bz=0;
                a[i]=-1;
                break;
            }
            j/=10;
            if(j==0) break;
        }
        if(bz) a[i]=count++;//不是则自加，YES!
    }
    while(cin>>n)
    {
        if(a[n]==-1)cout<<"Unlucky"<<endl;
        else cout<<a[n]<<endl;
    }
    return 0;
}
