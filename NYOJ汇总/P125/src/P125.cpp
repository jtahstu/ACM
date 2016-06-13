//============================================================================
// Name        : P125.cpp
// Author      : jtahstu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	while (n--) {
		double jt = 0, min, tt = 1;
		cin >> m;
		while (m--) {
			string s;
			cin >> s;
			if (s == "IN") {
				tt *= 20;
				continue;
			}
			if (s == "OUT") {
				tt /= 20;
				continue;
			}
			cin >> min;
			jt += min / tt;
		}
		cout << jt * 60 << endl;
	}
	return 0;
}
