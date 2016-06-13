/**
 * Project Name: akoj
 * File Name: 1042.cpp
 * Created on: 2016年5月20日 上午1:57:04
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
	long long n, sum = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
		sum *= i;
	cout << sum;
	return 0;
}
