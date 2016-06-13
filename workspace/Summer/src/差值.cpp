/**
 * Project Name: Summer
 * File Name: 差值.cpp
 * Created on: 2015年8月8日 下午1:38:16
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
//bool inc(int a, int b) {
//	return a > b;
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		int a[1005], b[1005];
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//			b[i] = a[i];
//		}
//		sort(a, a + n);
//		sort(b, b + n, inc);
//		int c[1005];
//		for (int i = 0; i < n; i++)
//			c[i] = b[i] - a[i];
//		for (int i = n; i > 0; i--)
//			if (c[i] < 0) {
//				c[i] += 10;
//				c[i - 1] -= 1;
//			}
//		int start = 0;
//		for (int i = 0; i < n; i++)
//			if (c[i] != 0)
//				start = i;
//		for (int i = 0; i < n; i++)
//			cout << c[i];
//		cout << endl;
//	}
//	return 0;
//}
