/**
 * 6.cpp
 * Created on: 2015年4月1日
 * Author: jtahstu
 */
//6该存多少钱
//假设银行一年整存零取的月息为0.63%。现在某人手中有一笔钱，他打算在今后的五年中的年底取出1000元，
//到第五年时刚好取完，请算出他存钱时应存入多少。
//运行结果
//He must save 4039.44 at first
//题目有错误，实际取了6000元

#include<iostream>
#include<cstdio>
using namespace std;
int main6()
{
	double a[6];
	a[5]=1000.0;
	for(int i=4;i>=0;i--)
		a[i]=a[i+1]/(1+12*0.0063)+1000.0;
	cout<<a[0]<<endl;
	return 0;
}



