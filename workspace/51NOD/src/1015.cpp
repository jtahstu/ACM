/**
 * Project Name: 51NOD
 * File Name: 1015.cpp
 * Created on: 2016年5月16日 下午4:10:46
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
	if (n <= 153)
		cout << 153 << endl;
	else if (n <= 370)
		cout << 370 << endl;
	else if (n <= 371)
		cout << 371 << endl;
	else if (n <= 407)
		cout << 407 << endl;
	else
		cout << 1634 << endl;
	return 0;
}
