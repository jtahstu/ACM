/**
 * Project Name: akoj
 * File Name: 1021.cpp
 * Created on: 2016年5月19日 下午10:05:36
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
	int count = 0;
	for (int i = 0; i < s.size(); i++)
		if (isalpha(s[i]))
			count++;
	cout << count << endl;
	return 0;
}
