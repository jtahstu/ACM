/**
 * Project Name: Summer
 * File Name: ��¸����.cpp
 * Created on: 2015��9��6�� ����5:02:37
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
//int P, Q, A[MAX_Q + 2]; // A�б����������ݣ��±��1��ʼ
//// dp[i][j] := �ͷ�(i, j)����Ľ�Ң�
//int dp[MAX_Q + 1][MAX_Q + 2];
//void solve() {
//	while (cin >> P >> Q) {
//		for (int i = 1; i <= Q; i++)
//			cin >> A[i];
//		// Ϊ�˴����㣬�����˼���A�Т�
//		A[0] = 0;
//		A[Q + 1] = P + 1;
//		// ��ʼ��
//		for (int q = 0; q <= Q; q++) {
//			dp[q][q + 1] = 0;
//		}
//		// �Ӷ̵����俪ʼ���dp
//		for (int w = 2; w <= Q + 1; w++) {
//			for (int i = 0; i + w <= Q + 1; i++) {
//				// ����dp[i][j]
//				int j = i + w, t = INT_MAX;
//				// ö������ͷŵ�������������С�ķ���
//				for (int k = i + 1; k < j; k++) {
//					t = min(t, dp[i][k] + dp[k][j]);
//				}
//				// ������ͷŻ���Ҫ�����ͷ������޹ص�A[j]-A[i]-2ö���
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
