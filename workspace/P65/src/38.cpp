/*
 * 38.cpp
 * Created on: 2015年4月4日
 * Author: jtahstu
 */
//38邮票组合
//某人有四张3分的邮票和三张5分的邮票，用这些邮票中的一张或若干张可以得到多少种不同的邮资？
//
//*运行结果
//19 kinds: 5 10 15 3 8 13 18 6 11 16 21 9 14 19 24 12 17 22 27

#include<iostream>
#include<cstdio>
using namespace std;
int main38()
{
	for(int i=0;i<=4;i++)
		for(int j=0;j<=3;j++)
			if(i+j!=0)
			cout<<3*i+5*j<<" ";
	return 0;
}
