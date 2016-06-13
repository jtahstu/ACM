/*
 * 1.cpp
 * Created on: 2015年4月1日
 * Author: jtahstu
 */
// 问555555的约数中最大的三位数是多少？
// 运行结果
// 输入：555555
// 输出：The max factor with 3 digits in 555555 is:777

#include<iostream>
#include<cstdio>
using namespace std;
int main1() {
	for (int i = 999; i > 100; i--)
		if (555555 % i == 0) {
			cout << i << endl;
			break;
		}

	return 0;
}

