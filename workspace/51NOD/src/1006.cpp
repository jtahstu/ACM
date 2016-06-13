/**
 * Project Name: 51NOD
 * File Name: 1006.cpp
 * Created on: 2016��5��15�� ����9:24:51
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
long long erfen(long long n) {
	long long ans = 1, t = n;
	while (t) {
		if (t & 1)
			ans = (ans * n) % 100;
		n = n * n % 100; //��int�����п��ܱ�ը
		t /= 2;
	}
	return ans % 10;
}
int main() {
	long long n;
	cin >> n;
	cout << erfen(n) << endl;
	return 0;
}
