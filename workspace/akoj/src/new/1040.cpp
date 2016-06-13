/**
 * Project Name: akoj
 * File Name: 1040.cpp
 * Created on: 2016年5月20日 上午1:50:03
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
	int sum = 0, n;
	cin >> n;
	if (n & 1)
		cout << (1 + n) * (n / 2 + 1) / 2 << endl;
	else
		cout << (1 + n - 1) * (n / 2) / 2 << endl;
	return 0;
}
