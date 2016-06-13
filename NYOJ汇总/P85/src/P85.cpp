//============================================================================
// Name        : P85.cpp
// Author      : jtahstu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int v;
	int a, b;
	bool ac;
	while (cin >> v) {
		ac = false;
		n = 0;
		for (int i = 2; i < 1000; i++) {
			for (int j = 1; j < i; j++) {
				if (i % 2 == 0) {
					a = (i - j);
					b = j;
				}
				else {
					a = j;
					b = i - j;
				}
				n++;
				if (n == v) {
					cout << a << "/" << b << endl;
					ac = true;
					break;
				}
			}
			if (ac)
				break;
		}
	}
	return 0;
}
