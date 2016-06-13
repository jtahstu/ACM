//============================================================================
// Name        : 大数乘法.cpp
// Author      : jtahstu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int i, j;
	int sum, carry;
	string a, b;
	char c[1000];
	cin >> a >> b;
	int an = a.size() - 1;
	int bn = b.size() - 1;
	for (i = an; i >= 0; i--)
		a[i] -= '0';
	for (i = bn; i >= 0; i--)
		b[i] -= '0';
	c[an + bn + 2] = '\0'; //把最后一个元素设为空以便遇到空时停止输出
	carry = 0;
	for (i = an + bn; i >= 0; i--) {
		sum = carry;
		if ((j = i - an) < 0)
			j = 0;
		for (; j <= i && j <= bn; j++) {
			sum += a[i - j] * b[j];
			c[i + 1] = sum % 10 + '0';
			carry = sum / 10;
		}
		if ((c[0] = carry + '0') == '0')
			c[0] = '\040';
	}
	if (c[0] < 0 || c[0] > 9) {
		for (int i = 1; i <= an + bn+2; i++)
			cout << c[i];
		cout << endl;
	} else cout << c << endl;
	return 0;
}
