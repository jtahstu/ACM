/**
 * Project Name: 51NOD
 * File Name: 1080.cpp
 * Created on: 2016年5月16日 下午4:15:22
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
	bool flag = false;
	for (int i = 0; i <= sqrt(n); i++) {
		int j = sqrt(n - i * i);
		if (j < i)
			break;
		if (i * i + j * j == n) {
			flag = true;
			cout << i << " " << j << endl;
		}
	}
	if (!flag)
		cout << "No Solution" << endl;
	return 0;
}
