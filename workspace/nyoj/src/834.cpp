/**
 * Project Name: nyoj
 * File Name: 834.cpp
 * Created on: 2015年7月20日 下午9:47:42
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
//struct acmer {
//	int b; //编号
//	int d; //深度
//} a[55];
//bool inc(acmer a, acmer b) {
//	if (a.d == b.d)
//		return a.b < b.b; //让编号小的在前面，因为这里面会有总和相等，编号要最小
//	return a.d > b.d;
//}
//int main() {
//	int n;
//	while (cin >> n) {
//		for (int i = 1; i <= n; i++) {
//			a[i].b = i;
//			cin >> a[i].d;
//		}
//		sort(a + 1, a + n + 1, inc);
//		int sum = a[1].d + a[2].d + a[3].d;
//		int b[4];
//		b[0] = a[1].b, b[1] = a[2].b, b[2] = a[3].b;
//		sort(b, b + 3);
//		cout << b[0] << " " << b[1] << " " << b[2] << " " << sum << endl;
//	}
//	return 0;
//}
//样例输入
//
//    4
//    1 2 3 4
//    6
//    1 1 4 8 2 1
//
//样例输出
//
//    2 3 4 9
//    3 4 5 14
//
