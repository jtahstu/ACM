/**
 * Project Name: Summer
 * File Name: 三角形.cpp
 * Created on: 2015年7月22日 上午1:12:19
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//using namespace std;
//const int MAX_N = 105;
//int n, a[MAX_N];
//void solve() {
//	while (cin >> n) {
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		int ans = 0; // 答案
//		for (int i = 0; i < n; i++) { // 让i < j < k，这样棍子就不会被重复选中了
//			for (int j = i + 1; j < n; j++) {
//				for (int k = j + 1; k < n; k++) {
//					int len = a[i] + a[j] + a[k]; // 周长
//					int ma = max(a[i], max(a[j], a[k])); // 最长棍子的长度
//					int rest = len - ma; // 其余两根棍子的长度之和
//					if (ma < rest) { // 可以组成三角形，如果可以更新答案则更新
//						ans = max(ans, len);
//					}
//				}
//			}
//		}
//		printf("%d\n", ans); // 输出
//	}
//}
//int main() {
//	freopen("A.in", "r", stdin);
//	freopen("A.out", "w", stdout);
//	solve();
//	return 0;
//}
