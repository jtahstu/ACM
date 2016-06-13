/**
 * Project Name: akoj
 * File Name: 1033.cpp
 * Created on: 2016年5月20日 上午1:18:37
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
	int sum = 0, m;

	for (m = 1; sum <= n; m++)
		sum += m * m * m;

	cout << m << endl;
	return 0;
}
