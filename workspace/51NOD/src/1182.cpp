/**
 * Project Name: 51NOD
 * File Name: 1182.cpp
 * Created on: 2016年5月15日 下午9:47:13
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
	string s;
	cin >> s;
	int a[26] = { 0 };
	for (int i = 0; i < s.size(); i++)
		a[tolower(s[i]) - 'a']++;
	sort(a, a + 26);
	cout << a[0] << a[1] << endl;
	int sum = 0, count = 1;
	for (int i = 25; i >= 0; i--) {
		sum += a[i] * (26 - count);
		count++;
	}
	cout << sum << endl;
	return 0;
}
