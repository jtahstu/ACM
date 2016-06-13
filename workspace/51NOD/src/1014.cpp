/**
 * Project Name: 51NOD
 * File Name: 1014.cpp
 * Created on: 2016年5月16日 下午7:43:54
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
	long long p, a;
	cin >> p >> a;
	bool flag = false;
	for (int i = 1; i <= p; i++) {
		if (i * i % p == a && !flag) {
			flag = true;
			cout << i;
		} else if (i * i % p == a && flag) {
			cout << " " << i;
		}
	}
	if (!flag)
		cout << "No Solution" << endl;
	else
		cout << endl;
	return 0;
}
