/**
 * Project Name: Summer
 * File Name: 抽签.cpp
 * Created on: 2015年7月14日 上午12:04:25
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<cctype>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<map>
//#include<set>
//using namespace std;
//int n, k[55], m;
//bool erfen(int x) {
//	int l = 0, r = n;
//	while (r > l) {
//		int i = (l + r) / 2;
//		if (k[i] == x)
//			return true;
//		else if (k[i] > x)
//			r = i - 1;
//		else
//			l = i + 1;
//	}
//	return false;
//}
//
//int solve() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		cin >> k[i];
//	sort(k, k + n);
//	bool flag = false;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			for (int kk = 0; kk < n; kk++)
//				if (erfen(m - k[i] - k[j] - k[kk])) {
//					flag = true;
//				}
//	if (!flag)
//		puts("No");
//	else
//		puts("Yes");
//	return 0;
//}
//int main() {
//	solve();
//	return 0;
//}
//抽 签
//你的朋友提议玩一个游戏：将写有数字的n 个纸片放入口袋中，你可以从口袋中抽取4 次纸
//片，每次记下纸片上的数字后都将其放回口袋中。如果这4 个数字的和是m，就是你赢，否
//则就是你的朋友赢。你挑战了好几回，结果一次也没赢过，于是怒而撕破口袋，取出所有纸
//片，检查自己是否真的有赢的可能性。请你编写一个程序，判断当纸片上所写的数字是k1,
//k2, …, kn 时，是否存在抽取4 次和为m 的方案。如果存在，输出Yes；否则，输出No。
//限制条件
// 1 ≤ n ≤ 50
// 1 ≤ m ≤ 108
// 1 ≤ ki ≤ 108
//输入
//n = 3
//m = 10
//k = {1, 3, 5}
//输出
//Yes（例如4次抽取的结果是1、1、3、5，和就是10）
//输入
//n = 3
//m = 9
//k = {1, 3, 5}
//输出
//No（不存在和为9的抽取方案）
//让我们着眼于内侧的两个循环。
//同刚才一样的思路，内侧的两个循环是在
//检查是否有c和d使得kc+kd=m-ka-kb。
//这种情况并不能直接使用二分搜索。但是，如果预先枚举出kc+kd所得的n^2个数字并排好序，便可以利用二分搜索了。
// 输入
//const int MAX_N = 1000;
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
//	// 排序以便进行二分搜索
//	sort(kk, kk + n * n);
//	bool f = false;
//	for (int a = 0; a < n; a++) {
//		for (int b = 0; b < n; b++) {
//			// 将内侧的两个循环替换成二分搜索
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
