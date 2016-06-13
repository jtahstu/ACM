/**
 * Project Name: akoj
 * File Name: 1029.cpp
 * Created on: 2016年5月20日 上午12:58:41
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
	int sum = 0, x;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			cin >> x;
			if (i == j || i + j == n + 1)
				sum += x;
		}
	cout << sum << endl;
	return 0;
}
