/**
 * Project Name: akoj
 * File Name: 1018.cpp
 * Created on: 2016年5月19日 下午10:22:53
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
	cout << n << "*" << n << "*" << n << "=" << n * n * n << "=";
	cout << n * n - n + 1;
	for (int i = n * n - n + 3; i < n; i += 2)
		cout << "+" << i;
	return 0;
}
