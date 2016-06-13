/**
 * Project Name: 51NOD
 * File Name: 1003.cpp
 * Created on: 2016年5月16日 下午3:45:59
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
int count(int n) {
	int sum = 0;
	while (n) {
		sum += n / 5;
		n /= 5;
	}
	return sum;
}
int main() {
	int n;
	cin >> n;
	cout << count(n) << endl;
	return 0;
}
