/**
 * Project Name: akoj
 * File Name: 1036.cpp
 * Created on: 2016年5月20日 上午1:26:54
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

int main() {
	int n;
	cin >> n;
	double sum = 100, l = 100;
	for (int i = 2; i <= n; i++) {
		l /= 2;
		sum += 2 * l;
	}
	printf("%.4lf\n", sum);
	return 0;
}
