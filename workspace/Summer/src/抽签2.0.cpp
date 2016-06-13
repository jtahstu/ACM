/**
 * Project Name: Summer
 * File Name: 抽签2.0.cpp
 * Created on: 2015年7月23日 下午1:32:21
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
//const int MAX_N = 1005;
//int n, m, k[MAX_N];
//// 保存2个数的和的数列
//int kk[MAX_N * MAX_N];
//bool binary_search(int x) {
//// x的存在范围是kk[l], kk[l+1], …, kk[r-1].
//	int l = 0, r = n * n;
//	while (r - l >= 1) { // 反复操作直到存在范围为空
//		int i = (l + r) / 2;
//		if (kk[i] == x)
//			return true; // 找到x
//		else if (kk[i] < x)
//			l = i + 1;
//		else
//			r = i;
//	}
//	return false; // 没找到x
//}
//void solve() {
//	while (cin >> n >> m) {
//		for (int i = 0; i < n; i++)
//			cin >> k[i];
//		for (int c = 0; c < n; c++) { // 枚举k[c]+k[d]的和
//			for (int d = 0; d < n; d++) {
//				kk[c * n + d] = k[c] + k[d];
//			}
//		}
//		sort(kk, kk + n * n); // 排序以便进行二分搜索
//		bool f = false;
//		for (int a = 0; a < n; a++) {
//			for (int b = 0; b < n; b++) {
//				// 将内侧的两个循环替换成二分搜索
//				if (binary_search(m - k[a] - k[b])) {
//					f = true;
//				}
//			}
//		}
//		if (f)
//			puts("Yes");
//		else
//			puts("No");
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
//// 输入
//int n, m, k[MAX_N];
//// 保存2个数的和的数列
//int kk[MAX_N * MAX_N];
//bool binary_search(int x) {
//// x的存在范围是kk[l], kk[l+1], …, kk[r-1].
//	int l = 0, r = n * n;
//// 反复操作直到存在范围为空
//	while (r - l >= 1) {
//		int i = (l + r) / 2;
//		if (kk[i] == x)
//			return true; // 找到x
//		else if (kk[i] < x)
//			l = i + 1;
//		else
//			r = i;
//	}
//// 没找到x
//	return false;
//}
//void solve() {
//// 枚举k[c]+k[d]的和
//	for (int c = 0; c < n; c++) {
//		for (int d = 0; d < n; d++) {
//			kk[c * n + d] = k[c] + k[d];
//		}
//	}
//// 排序以便进行二分搜索
//	sort(kk, kk + n * n);
//	bool f = false;
//	for (int a = 0; a < n; a++) {
//		for (int b = 0; b < n; b++) {
//// 将内侧的两个循环替换成二分搜索
//			if (binary_search(m - k[a] - k[b])) {
//				f = true;
//			}
//		}
//	}
//	if (f)
//		puts("Yes");
//	else
//		puts("No");
//}
