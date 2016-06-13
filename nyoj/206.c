/*矩形的个数
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
在一个3*2的矩形中，可以找到6个1*1的矩形，4个2*1的矩形3个1*2的矩形，2个2*2的矩形，2个3*1的矩形和1个3*2的矩形，总共18个矩形。

给出A，B,计算可以从中找到多少个矩形。
输入
本题有多组输入数据（<10000），你必须处理到EOF为止

输入2个整数A,B(1<=A,B<=1000)

输出
输出找到的矩形数。
样例输入
1 2
3 2
样例输出
3
18*/
//水题
#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		printf("%lld\n",(long long)a*(a+1)*b*(b+1)/4 );//一开始没有这样写，long long s不知为啥就是WA
	}
	return 0;
}

#include "stdio.h"
int main(int argc, char const *argv[])
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        printf("%.0lf\n",(double)a*(a+1)*b*(b+1)/4);//第一就是想用double的，结果不知道怎么去小数点后六位，汗
    }
    return 0;
}
//最佳代码，just so so啦
#include <stdio.h>
main()
{
    float a,b;
    while(scanf("%f%f",&a,&b)+1)printf("%.0f\n",(a+1)*a*(b+1)*b/4);
}
