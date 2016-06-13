/**
 * 4.cpp
 * Created on: 2015年4月1日
 * Author: jtahstu
 *
 */
//4数制转换
// 将任一整数转换为二进制形式
// *运行结果
// 输入：8
// 输出：
// number of decimal form:8
// it's bunary form:0000000000001000
// 输入：-8
// 输出：number of decimal form:-8
// it's binary form:1111111111111000
// 输入：32767
// 输出：number of decimal form:32767
// it's binary form:0111 1111 1111 1111
// 输入：-32768
// 输出：number of decimal form:-32768
// it's binary form:1000000000000000
// 输入：128
// 输出：number of decimal form:128
// it's binary form:0000000010000000

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
void jt(int n) //正数
		{
	int a[17] = { 0 }, i = 0;
	while (n) {
		n % 2 == 0 ? a[i] = 0 : a[i] = 1;
		n /= 2;
		i++;
	}
	for (int j = 15; j >= 0; j--)
		cout << a[j];
	cout << endl;
}
void tt(int n) //负数  取绝对值-1，然后求其反码
		{
	int m = (-n) - 1;
	int a[17] = { 0 }, i = 0;
	while (m) {
		m % 2 == 0 ? a[i] = 0 : a[i] = 1;
		m /= 2;
		i++;
	}
	for (int j = 15; j >= 0; j--)
		a[j] == 1 ? cout << "0" : cout << "1";
	cout << endl;
}
int main4() {
	int n;
	while (cin >> n) {
		if (n > 0)
			jt(n);
		else
			tt(n);
	}
	return 0;
}

