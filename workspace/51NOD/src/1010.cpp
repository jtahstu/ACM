/**
 * Project Name: 51NOD
 * File Name: 1010.cpp
 * Created on: 2016年5月17日 上午11:10:42
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
const long long maxn = 1e18 + 500;
long long a[11000];
int coun = 0;
void init() {
	for (long long i = 1; i < maxn; i *= 2)
		for (long long j = 1; j * i < maxn; j *= 3)
			for (long long k = 1; i * j * k < maxn; k *= 5)
				a[coun++] = i * j * k;
}
int main() {
	init();
	sort(a, a + coun);
	int n;
	cin >> n;
	while (n--) {
		long long x;
		cin >> x;
		long long l = 1, r = coun, mid;
		while (l < r) {
			mid = (l + r) / 2;
			if (x <= a[mid])
				r = mid;
			else
				l = mid + 1;
		}
		cout << a[l] << endl;
	}
	return 0;
}
