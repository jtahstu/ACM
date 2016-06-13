/**
 * Project Name: akoj
 * File Name: 1034.cpp
 * Created on: 2016年5月20日 上午1:23:50
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
bool is(int n) {
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
int main() {
	int n;
	cin >> n;
	if (is(n))
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}
