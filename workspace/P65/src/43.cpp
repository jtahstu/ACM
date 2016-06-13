/*
 * 43.cpp
 * Created on: 2015年4月4日
 * Author: jtahstu
 */
//43  1~9分成1：2：3的三个3位数
//将1到9 这九个数字分成三个3位数，分求第一个3位数，正好是第二个3位数的二倍，是第三个3位数的三倍。问应当怎样分法。
//
//*运行结果
//No.1:192 384 576
//No.2:219 438 657
//No.3:273 546 819
//No.4:327 654 981
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main43() {
	int count = 1;
	for (int i = 123; i <= 333; i++) {
		bool flag = true;
		int a = 2 * i, b = 3 * i;
		int s[10] = { i % 10, i / 10 % 10, i / 100, a % 10, a / 10 % 10, a
				/ 100, b % 10, b / 10 % 10, b / 100 };
		sort(s, s + 9);
		for (int j = 1; j < 10; j++)
			if (j != s[j - 1]) {
				flag = false;
				break;
			}
		if (flag)
			cout << "No." << count++ << ": " << i << " " << a << " " << b
					<< endl;
	}
	return 0;
}

