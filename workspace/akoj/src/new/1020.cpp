/**
 * Project Name: akoj
 * File Name: 1020.cpp
 * Created on: 2016年5月19日 下午10:02:55
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
	int a[11];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	sort(a, a + 10);
	cout << a[9];
	for (int i = 8; i >= 0; i--)
		cout << " " << a[i];
	cout << endl;
	return 0;
}
