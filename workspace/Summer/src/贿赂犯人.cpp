/**
 * Project Name: Summer
 * File Name: 贿赂犯人.cpp
 * Created on: 2015年9月6日 下午5:02:37
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
//const int MAX_Q = 100;
//int P, Q, A[MAX_Q + 2]; // A中保存输入数据，下标从1开始
//// dp[i][j] := 释放(i, j)所需的金币①
//int dp[MAX_Q + 1][MAX_Q + 2];
//void solve() {
//	while (cin >> P >> Q) {
//		for (int i = 1; i <= Q; i++)
//			cin >> A[i];
//		// 为了处理方便，将两端加入A中②
//		A[0] = 0;
//		A[Q + 1] = P + 1;
//		// 初始化
//		for (int q = 0; q <= Q; q++) {
//			dp[q][q + 1] = 0;
//		}
//		// 从短的区间开始填充dp
//		for (int w = 2; w <= Q + 1; w++) {
//			for (int i = 0; i + w <= Q + 1; i++) {
//				// 计算dp[i][j]
//				int j = i + w, t = INT_MAX;
//				// 枚举最初释放的囚犯，计算最小的费用
//				for (int k = i + 1; k < j; k++) {
//					t = min(t, dp[i][k] + dp[k][j]);
//				}
//				// 最初的释放还需要与所释放囚犯无关的A[j]-A[i]-2枚金币
//				dp[i][j] = t + A[j] - A[i] - 2;
//			}
//		}
//		printf("%d\n", dp[0][Q + 1]);
//	}
//}
//int main() {
//	freopen("A.in", "r", stdin);
//	freopen("A.out", "w", stdout);
//	solve();
//	return 0;
//}
