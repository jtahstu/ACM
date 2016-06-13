/**
 * Project Name: akoj
 * File Name: 1017.cpp
 * Created on: 2016年5月19日 下午10:17:48
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
	cout << s;
	for (int i = s.size() - 1; i >= 0; i--)
		cout << s[i];
	return 0;
}
