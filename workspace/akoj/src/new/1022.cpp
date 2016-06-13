/**
 * Project Name: akoj
 * File Name: 1022.cpp
 * Created on: 2016年5月19日 下午10:07:43
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
long long ans[45];
int main() {
	ans[1] = 1, ans[2] = 1;
	for (int i = 3; i <= 40; i++)
		ans[i] = ans[i - 1] + ans[i - 2];
	int n;
	cin >> n;
	cout << ans[1];
	for (int i = 2; i <= n; i++)
		cout << " " << ans[i];
	cout << endl;
	return 0;
}
