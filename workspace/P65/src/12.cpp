/*
 * 12.cpp
 * Created on: 2015年4月2日
 * Author: jtahstu
 */
//12 一个奇异的三位数
//一个自然数的七进制表达式是一个三位数，而这个自然数的九进制表示也是一个三位数，且这两个三位数的数码正好相反，求这个三位数。
//
//*运行结果
//The special number with 3 digits is:503(7)=305(9)=248(10)
#include<iostream>
#include<cstdio>
using namespace std;
long long n_Binary_conversion(int n, int m) //10转m进制
		{
	int x = n, y = m;
	int a[100] = { 0 }, i = 0;
	while (x) {
		a[i] = x % y;
		i++;
		x /= y;
	}
	long long count = 0, beishu = 1;
	for (int j = 0; j < i; j++) {
		count += a[j] * beishu;
		beishu *= 10;
	}
	return count;
}
bool test(int i)
{
	int a,b;
	a=n_Binary_conversion(i,7);
	b=n_Binary_conversion(i,9);
	if(100<=a&&a<=999&&100<=b&&b<=999&&(a%10==b/100)&&(a/10%10==b/10%10)&&(a/100==b%10))
		return true;
	return false;
}
int main12() {
//	cout<<n_Binary_conversion(8,3)<<endl;
//	cout<<n_Binary_conversion(248,9)<<endl;
//	cout<<n_Binary_conversion(248,7)<<endl;
	for (int i = 100; i <= 999; i++) {
		if(test(i))
			cout<<"("<<n_Binary_conversion(i,7)<<")7="<<"("<<n_Binary_conversion(i,9)<<")9="<<"("<<i<<")10"<<endl;

	}
	return 0;
}

