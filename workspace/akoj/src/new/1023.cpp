/**
 * Project Name: akoj
 * File Name: 1023.cpp
 * Created on: 2016年5月19日 下午10:11:51
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
	int n, max = -9999999;
	while (cin >> n && n != -1) {
		if (n >= max)
			max = n;
	}
	cout << max;
	return 0;
}
