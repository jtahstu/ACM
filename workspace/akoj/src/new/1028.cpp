/**
 * Project Name: akoj
 * File Name: 1028.cpp
 * Created on: 2016年5月20日 上午12:56:23
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
long long f(int x) {
	if (x == 1)
		return 10;
	return f(x - 1) + 2;
}
int main() {
	int x;
	cin >> x;
	cout << f(x) << endl;
	return 0;
}
