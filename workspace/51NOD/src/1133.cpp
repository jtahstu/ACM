/**
 * Project Name: 51NOD
 * File Name: 1133.cpp
 * Created on: 2016年5月16日 下午6:58:28
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
struct P {
	int s;
	int e;
} a[10005];
bool cmp(P a, P b) {
	return b.e > a.e;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i].s >> a[i].e;
	sort(a, a + n, cmp);
//	for(int i=0;i<n;i++)
//        cout<<a[i].s<<" "<<a[i].e<<endl;
	int count = 1;
	P s = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i].s >= s.e) {
			count++;
			s = a[i];
		} else if (a[i].e <= s.e) {
			s = a[i];
		}
	}
	cout << count << endl;
	return 0;
}
