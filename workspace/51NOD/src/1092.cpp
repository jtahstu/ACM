/**
 * Project Name: 51NOD
 * File Name: 1092.cpp
 * Created on: 2016年5月17日 上午10:57:24
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int main() {
	string x, y;
	cin >> x;
	y = x;
	reverse(y.begin(), y.end());
	for (int i = 0; i < x.length(); ++i) {
		for (int j = 0; j < y.length(); ++j) {
			int p = 0;
			if (x[i] == y[j])
				p = 1;
			dp[i + 1][j + 1] = max(dp[i][j] + p,
					max(dp[i + 1][j], dp[i][j + 1]));
		}
	}
	cout << x.length() - dp[x.length()][y.length()] << endl;
	return 0;
}
