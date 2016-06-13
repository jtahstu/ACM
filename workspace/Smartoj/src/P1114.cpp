/**
 * Project Name: Smartoj 
 * File Name: P1114.cpp
 * Created on: 2015年4月23日 下午7:55:03
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main1114() {
	int max = -10000000, n, res, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > max) {
			max = a;
			res = i;
		}
	}
	cout << max << " " << res + 1 << endl;
	return 0;
}

