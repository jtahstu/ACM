/**
 * Project Name: 51NOD
 * File Name: 1007.cpp
 * Created on: 2016年5月16日 下午4:52:31
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include<stdio.h>
#include<climits>
#include<algorithm>
#include<stack>
#include<iostream>
#include<cmath>
#include<set>
#include<vector>
#include<map>
#include<queue>
#include<string.h>
using namespace std;
#define N 10010
int a[N];
int n;
int dp[N];
int main(void) {
	while (scanf("%d", &n) != EOF) {
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			sum += a[i]; //挑选出一些数字，是的越靠近sum/2,那么就是背包问题了
		}
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= n; i++) {
			for (int j = sum / 2; j >= a[i]; j--) {
				dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
			}
		}
		cout << abs((sum - dp[sum / 2]) - dp[sum / 2]) << endl;
	}
	return 0;
}
