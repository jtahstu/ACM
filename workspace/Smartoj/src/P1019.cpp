/**
 * Project Name: Smartoj 
 * File Name: P1019.cpp
 * Created on: 2015年4月20日 上午12:47:21
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
using namespace std;
int main1019() {
	int n, m;
	cin >> n;
	map<int, int> count;
	for (int i = 0; i < n; i++) {
		cin >> m;
		count[m]++;
	}
	map<int, int>::iterator it = count.begin();
	for (it = count.begin(); it != count.end(); it++)
		cout << it->first << " " << it->second << endl;
	return 0;
}

