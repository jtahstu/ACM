/*
 * 15.cpp
 * Created on: 2015年4月2日
 * Author: jtahstu
 */
//15姆斯特朗数
//如果一个正整数等于其各个数字的立方和，则称该数为阿姆斯特朗数(亦称为自恋性数)。
//如 407=4^3+0^3+7^3就是一个阿姆斯特朗数。试编程求1000以内的所有阿姆斯特朗数。
//
//*运行结果
//There are following Armstrong number smaller than 1000:
//153 370 371 407

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main15()
{
	for(int i=100;i<1000;i++)
	{
		if((pow(i%10*1.0,3)+pow(i/10%10*1.0,3)+pow(i/100*1.0,3))==i)
			cout<<i<<" ";
	}
	return 0;
}



