/**
 * Project Name: akoj
 * File Name: 1050.cpp
 * Created on: 2016年5月20日 上午2:14:22
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<set>
using namespace std;
int a[105];
int main() {
	a[0] = 0, a[1] = 2;
	for (int i = 2; i <= 100; i++)
		a[i] = a[i - 1] + 2 * i;
	int n, m;
	while (cin >> n >> m) {
		for (int i = m; i <= n; i += m) {
			cout << (a[i] - a[i - m]) / m << " ";
		}
		if (n % m != 0) {
			cout << (a[n] - a[n - n % m]) / (n % m) << endl;
		}
	}
	return 0;
}
