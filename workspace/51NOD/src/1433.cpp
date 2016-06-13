/**
 * Project Name: 51NOD
 * File Name: 1433.cpp
 * Created on: 2016年5月16日 下午9:55:20
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

int n, cnt5, cnt0, temp;

int main() {
	int i;
	cin >> n;
	cnt5 = 0;
	cnt0 = 0;
	for (i = 1; i <= n; i++) {
		cin >> temp;
		if (temp == 5) {
			cnt5++;
		} else {
			cnt0++;
		}
	}
	if (cnt0 > 0) {
		cnt5 = cnt5 / 9;
		for (i = 1; i <= cnt5; i++) {
			cout << 555555555;
		}
		if (cnt5 == 0) {
			cout << 0 << endl;
			return 0;
		}
		for (i = 1; i <= cnt0; i++) {
			cout << 0;
		}
		cout << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
}
