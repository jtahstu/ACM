/**
 * Project Name: 51NOD
 * File Name: 1432.cpp
 * Created on: 2016年5月16日 下午6:41:12
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
const int N = 10005;
int a[N];
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int count = 0;
	for (int i = 0, j = n - 1; i <= j;) {
		if (a[i] + a[j] <= m) {
			i++;
			j--;
			count++;
		} else if (i == j) {
			count++;
		} else {
			j--;
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
