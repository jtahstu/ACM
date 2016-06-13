/*
 * 16.cpp
 * Created on: 2015年4月2日
 * Author: jtahstu
 */
//16完全数
//如果一个数恰好等于它的因子之和，则称该数为“完全数”。
//
//*运行结果
//TThere are following perfect numbers smaller than 1000:
//6 28 496

#include<iostream>
#include<cstdio>
using namespace std;
int sum(int i)
{
	int sum=0;
	for(int j=1;j<=i/2;j++)
		if(i%j==0)
			sum+=j;
	return sum;
}
int main16()
{
	for(int i=2;i<1000;i++)
		if(sum(i)==i)
			cout<<i<<" ";
	cout<<endl;
	return 0;
}



