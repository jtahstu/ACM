/*算菜价
时间限制：3000 ms  |  内存限制：65535 KB
难度：0

描述
    妈妈每天都要出去买菜，但是回来后，兜里的钱也懒得数一数，到底花了多少钱真是一笔糊涂帐。现在好了，作为好儿子（女儿）的你可以给她用程序算一下了，呵呵。

输入
    输入含有一些数据组，每组数据包括菜种（字串），数量（计量单位不论，一律为double型数）和单价（double型数，表示人民币元数），因此，每组数据的菜价就是数量乘上单价啊。菜种、数量和单价之间都有空格隔开的。
    注意：程序以文件结束符“EOF”结束输入。
输出
    支付菜价的时候，由于最小支付单位是角，所以总是在支付的时候采用四舍五入的方法把分头去掉。最后，请输出一个精度为角的菜价总量。
样例输入

    青菜 1  2
    罗卜 2  1.5
    鸡腿 2  4.2

样例输出

    13.4*/
#include "stdio.h"
int main()
{
	double num,p,s=0;
	char a[20];
	while(scanf("%s%lf%lf",a,&num,&p)!=EOF)
	s+=num*p;
    printf("%.1lf\n",s);
	return 0;
}
/* 
#include<stdio.h>
#include<math.h>
int main(){
    char name[1000];
    double number,price,total;
    total=0;
    while(scanf("%s%lf%lf",name,&number,&price)!=EOF)
	{
         total+=number*price; 
    }
    printf("%.1lf\n",floor(total*10+0.5)/10); 
    return 0;
}        最优程序
*/