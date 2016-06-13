/*A+B Problem III
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
求A+B是否与C相等。
输入
T组测试数据。
每组数据中有三个实数A,B,C(-10000.0<=A,B<=10000.0,-20000.0<=C<=20000.0)
数据保证小数点后不超过4位。

输出
如果相等则输出Yes
不相等则输出No
样例输入
3
-11.1 +11.1 0
11 -11.25 -0.25
1 2 +4
样例输出
Yes
Yes
No
上传者
李文鑫*/

#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while(n--)
    {
        double a,b,c;
        cin>>a>>b>>c;
        if((a+b-c>-0.0001)&&(a+b-c<0.0001))
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

#include <cstdio>
#include <math.h>
double a,b,c;
main()
{
    for(scanf("%lf",&a);
    ~scanf("%lf%lf%lf",&a,&b,&c);
    puts(fabs(c-(a+b))<1e-6?"Yes":"No"));
}

