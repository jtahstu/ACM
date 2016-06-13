/*
 * nyoj84.cpp
 * Created on: 2015年4月1日
 * Author: jtahstu
 */
//描述
//    计算n!的十进制表示最后有多少个0
//
//输入
//    第一行输入一个整数N表示测试数据的组数(1<=N<=100)
//    每组测试数据占一行，都只有一个整数M(0<=M<=10000000)
//输出
//    输出M的阶乘的十进制表示中最后0的个数
//    比如5!=120则最后的0的个数为1
//样例输入
//
//    6
//    3
//    60
//    100
//    1024
//    23456
//    8735373
//
//样例输出
//
//    0
//    14
//    24
//    253
//    5861
//    2183837
//#include<iostream>
//#include<cstdio>
//long long jt(long long a)
//{
//	long long sum=0;
//	for(int i=5;i<=a;i*=5)//这里有一定技巧
//		sum+=a/i;
//	return sum;
//}
//using namespace std;
//int main84()
//{
//	int n;
//	cin>>n;
//	while(n--)
//	{
//		long long a;
//		cin>>a;
//		cout<<jt(a)<<endl;
//	}
//	return 0;
//}



