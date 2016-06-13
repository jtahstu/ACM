/**
 * Project Name: Summer
 * File Name: test.cpp
 * Created on: 2015年9月6日 下午4:52:47
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//typedef long long ll;
//const int MAX_M = 15;
//int M, X;
//double P;
//double dp[2][(1 << MAX_M) + 1];
//void solve() {
//	while (cin >> M >> P >> X) {
//		int n = 1 << M;
//		double *prv = dp[0], *nxt = dp[1];
//		memset(prv, 0, sizeof(double) * (n + 1));
//		prv[n] = 1.0;
//		for (int r = 0; r < M; r++) {
//			for (int i = 0; i <= n; i++) {
//				int jub = min(i, n - i);
//				double t = 0.0;
//				for (int j = 0; j <= jub; j++) {
//					t = max(t, P * prv[i + j] + (1 - P) * prv[i - j]);
//				}
//				nxt[i] = t;
//			}
//			swap(prv, nxt);
//		}
//		int i = (ll) X * n / 1000000;
//		printf("%.6f\n", prv[i]);
//	}
//}
//int main() {
//	freopen("A.in", "r", stdin);
//	freopen("A.out", "w", stdout);
//	solve();
//	return 0;
//}
