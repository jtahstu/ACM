/*
 * 28.cpp
 * Created on: 2015年4月3日
 * Author: jtahstu
 */
//28最大公约数和最小公倍数
//求任意两个正整数的最大公约数和(GCD)和最小公倍数(LCM)。
//
//*运行结果
//1.Input a & b: 20 55
//The GCD of 20 and 55 is: 5
//The LCM of them is: 220
//
//2.Input a & b: 17 71
//The GCD of 17 and 71 is: 1
//The LCM of them is: 1207
//
//3.Input a & b: 24 88
//The GCD of 24 and 88 is: 8
//The LCM of them is: 264
//
//4.Input a & b: 35 85
//The GCD of 35 and 85 is: 5
//The LCM of them is: 595

#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b) {
	return a / gcd(a, b) * b;  //先除避免超过int范围
}
int main28() {
	int a, b;
	while (true) {
		cin >> a >> b;
		cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b)
				<< endl;
		cout << "The LCM of them is: " << lcm(a, b) << endl << endl;
	}
	return 0;
}

