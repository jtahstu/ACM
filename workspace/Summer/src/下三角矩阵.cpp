/**
 * Project Name: Summer
 * File Name: 下三角矩阵.cpp
 * Created on: 2015年9月6日 下午5:24:02
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
//const int MAX_N = 20 + 5;
//int N;
//int M[MAX_N][MAX_N]; // 矩阵
//int a[MAX_N]; // a[i]表示第i行最后出现的1的位置——1~n-1
//void solve() {
//	while (cin >> N) {
//		memset(M, 0, sizeof(M));
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < N; i++) {
//			string s;
//			cin >> s;
//			for (int j = 0; j < N; j++)
//				M[i][j] = s[j] - '0';
//		}
//		int res = 0;
//		for (int i = 0; i < N; i++) {
//			a[i] = -1; // 如果第i行不含1的话，就当作-1
//			for (int j = 0; j < N; j++) {
//				if (M[i][j] == 1)
//					a[i] = j;
//			}
//		}
//		for (int i = 0; i < N; i++) {
//			int pos = -1; // 要移动到第i行的行
//			for (int j = i; j < N; j++) {
//				if (a[j] <= i) {
//					pos = j;
//					break;
//				}
//			}
//			// 完成交换
//			for (int j = pos; j > i; j--) {
//				swap(a[j], a[j - 1]);
//				res++;
//			}
//		}
//		printf("%d\n", res);
//	}
//
//}
//int main() {
//	freopen("A.in", "r", stdin);
//	freopen("A.out", "w", stdout);
//	solve();
//	return 0;
//}
