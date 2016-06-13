/*
 * 20.cpp
 * Created on: 2015年4月2日
 * Author: jtahstu
 */
//20求具有abcd=(ab+cd)^2性质的四位数
//3025这个数具有一种独特的性质：将它平分为二段，即30和25，使之相加后求平方，
//即(30+25)^2，恰好等于3025本身。请求出具有这样性质的全部四位数。
//
//*运行结果
//There are following numbers with 4 digits satisfied condition:
//2025 3025 9801

#include<iostream>
#include<cstdio>
using namespace std;
int main20()
{
	int count=0,a[100]={0};
	for(int i=1000;i<10000;i++)
	{
		if(((i%100)+(i/100))*((i%100)+(i/100))==i)
		{
			count++;
			a[count]=i;
		}
	}
	cout<<"There are following numbers with "<<count<<" digits satisfied condition:"<<endl;
	for(int i=1;i<=count;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}



