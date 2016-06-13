/**
 * Project Name: nyoj 
 * File Name: 873.cpp
 * Created on: 2015年6月10日 上午12:59:44
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main() {
//	int n, m;
//	while (cin >> m >> n) {
//		int a[1005 + 1005];
//		for (int i = 0; i < m; i++)
//			cin >> a[i];
//		for (int i = m; i < m + n; i++)
//			a[i] = a[i - m];
//		long long max = -1000000000, maxi, maxj, maxj2;
//		for (int i = 0; i < m; i++) {
//			long long sum = 0;
//			for (int j = i; j < i + n; j++) {
//				sum += a[j];
//			}
//			if (sum > max) {
//				max = sum;
//				maxi = i + 1;
//				(i + n) % m == 0 ? maxj = i + n : maxj = (i + n) % m;
//			}
//			if (sum == max) {
//				(i + n) % m == 0 ? maxj2 = i + n : maxj2 = (i + n) % m;
//				if (maxj2 < maxj) {
//					maxi = i + 1;
//					maxj = maxj2;
//				}
//			}
//		}
//		cout << max << " " << maxi << " " << maxj << endl;
//	}
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//#define ma -922337203
//int main() {
//	int m, n, b, e;
//	long long sum, maxsum;
//	int a[1000];
//	while (cin >> m >> n && !cin.eof()) {
//		maxsum = ma;
//		for (int i = 0; i < m; i++) {
//			cin >> a[i];
//		}
//		for (int i = 0; i < m; i++) {
//			sum = 0;
//			for (int j = i; j < i + n; j++) {
//				if (j >= m)
//					sum = sum + a[j % m];
//				else
//					sum = sum + a[j];
//			}
//			if (sum > maxsum) {
//				maxsum = sum;
//				b = i;
//				e = (b + n - 1) % m;
//			}
//		}
//		cout << maxsum << " " << b + 1 << " " << e + 1 << endl;
//	}
//	return 0;
//}
//样例输入
//
//    5 3
//    4 2 3 1 5
//    4 2
//    2 3 4 5
//
//样例输出
//
//    11 5 2
//    9 3 4

