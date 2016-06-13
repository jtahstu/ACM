/**
 * Project Name: 51NOD
 * File Name: 1050.cpp
 * Created on: 2016年5月16日 下午5:33:39
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
const int N = 50005;
int a[N];
int n;
long long solve() {
	long long temp = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		if (temp < 0)
			temp = a[i];
		else
			temp += a[i];
		ans = max(ans, temp);
	}
	return ans;
}
int main() {
	cin >> n;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	long long ans1 = solve();
	for (int i = 0; i < n; i++)
		a[i] = -a[i];
	long long ans2 = solve();
//	cout<<ans1<<endl;
//	cout<<ans2<<endl;
	cout << max(sum + ans2, ans1) << endl;
	return 0;
}
