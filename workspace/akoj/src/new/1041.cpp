/**
 * Project Name: akoj
 * File Name: 1041.cpp
 * Created on: 2016年5月20日 上午1:54:22
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
	double sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		sum = sum + 1.0 / i;
	printf("%.6lf", sum);
	return 0;
}
