/**
 * Project Name: akoj
 * File Name: 1038.cpp
 * Created on: 2016年5月20日 上午1:36:53
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
	while (n != 1) {
		if (n & 1) {
			cout << n << "*3+1=" << 3 * n + 1 << endl;
			n = 3 * n + 1;
		} else {
			cout << n << "/2=" << n / 2 << endl;
			n /= 2;
		}
	}
	return 0;
}
