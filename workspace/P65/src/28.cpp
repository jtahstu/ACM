/*
 * 28.cpp
 * Created on: 2015��4��3��
 * Author: jtahstu
 */
//28���Լ������С������
//���������������������Լ����(GCD)����С������(LCM)��
//
//*���н��
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
	return a / gcd(a, b) * b;  //�ȳ����ⳬ��int��Χ
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

