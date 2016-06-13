/*
成绩转换
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述
    输入一个百分制的成绩M，将其转换成对应的等级，具体转换规则如下：
    90~100为A;
    80~89为B;
    70~79为C;
    60~69为D;
    0~59为E;

输入
    第一行是一个整数N，表示测试数据的组数(N<10)
    每组测试数据占一行，由一个整数M组成(0<=M<=100)。
输出
    对于每组输入数据，输出一行。
样例输入

    2
    97
    80

样例输出

    A
    B
 */
#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n,a;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(90<=a&&a<=100) printf("A\n");
		if(80<=a&&a<=89) printf("B\n");
		if(70<=a&&a<=79) printf("C\n");
		if(60<=a&&a<=69) printf("D\n");
		if(0<=a&&a<=59) printf("E\n");
	}
	return 0;
}
/*

#include<iostream>
using namespace std;
int main()
{
int n,s;
cin>>n;
while(n--)
{
cin>>s;
switch(s/10)
{
case 10:
case 9:cout<<"A"<<endl;break;
case 8:cout<<"B"<<endl;break;
case 7:cout<<"C"<<endl;break;
case 6:cout<<"D"<<endl;break;
default:cout<<"E"<<endl;break;
}
}
}        最优代码
 */
