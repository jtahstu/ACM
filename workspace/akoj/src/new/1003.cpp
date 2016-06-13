/**
 * Project Name: akoj
 * File Name: 1003.cpp
 * Created on: 2016年5月19日 下午9:42:42
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
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i]))
			cout << s[i];
	}
	cout << endl;
	return 0;
}
