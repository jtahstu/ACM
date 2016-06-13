/**
 * Project Name: 51NOD
 * File Name: 1031.cpp
 * Created on: 2016年5月16日 下午9:23:06
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int mod = 1e9 + 7;
const int maxn = 1000 + 100;
int f[maxn];
void init() {
	int i, j;
	f[1] = 1;
	f[2] = 2;
	for (i = 3; i <= 1000; i++)
		f[i] = (f[i - 1] + f[i - 2]) % mod;
}
int main() {
	int i, j, n;
	init();
	cin >> n;
	cout << f[n] << endl;
	return 0;
}
