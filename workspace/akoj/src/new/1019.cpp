/**
 * Project Name: akoj
 * File Name: 1019.cpp
 * Created on: 2016年5月19日 下午10:00:51
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
	int a[5];
	for (int i = 0; i < 4; i++)
		cin >> a[i];
	sort(a, a + 4);
	cout << a[0];
	for (int i = 1; i < 4; i++)
		cout << " " << a[i];
	cout << endl;
	return 0;
}
