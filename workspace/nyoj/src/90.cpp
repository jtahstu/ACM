/**
 * Project Name: nyoj
 * File Name: 90.cpp
 * Created on: 2015年7月20日 下午10:10:55
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<stdio.h>//这个6，but我看不懂啊
//int a[22] = { 1 }, n, i, j;
//int main() {
//	for (i = 1; i <= 10; i++)
//		for (j = 0; j <= 10; j++)
//			if (i + j <= 10)
//				a[i + j] += a[j];
//	scanf("%d", &i);
//	while (i--) {
//		scanf("%d", &j);
//		printf("%d\n", a[j]);
//	}
//}
//#include<iostream>
//using namespace std;
//int f(int n, int m) {+
//	if (!n || m == 1) { //从return的形式，判断出来的
//		return 1;
//	}
//	return n < m ? f(n, n) : f(n - m, m) + f(n, m - 1);
//}
//int main() {
//	int nCase, n, m;
//	cin >> nCase;
//	while (nCase--) {
//		cin >> n;
//		cout << f(n, n) << endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main() {
//	int t;
//	cin >> t;
//	int a[11];
//	a[1] = 1, a[2] = 2, a[3] = 3;
//	for (int i = 4; i < 11; i++)
//		a[i] = a[i - 1] + (a[i - 1] - a[i - 2] + 1);
//	while (t--) {
//		int n;
//		cin >> n;
//		cout << a[n] << endl;
//	}
//	return 0;
//}
//整数划分
//时间限制：3000 ms  |  内存限制：65535 KB
//难度：3
//
//描述
//    将正整数n表示成一系列正整数之和：n=n1+n2+…+nk，
//    其中n1≥n2≥…≥nk≥1，k≥1。
//    正整数n的这种表示称为正整数n的划分。求正整数n的不
//    同划分个数。
//    例如正整数6有如下11种不同的划分：
//    6；
//    5+1；
//    4+2，4+1+1；
//    3+3，3+2+1，3+1+1+1；
//    2+2+2，2+2+1+1，2+1+1+1+1；
//    1+1+1+1+1+1。
//
//输入
//    第一行是测试数据的数目M（1<=M<=10）。以下每行均包含一个整数n（1<=n<=10）。
//输出
//    输出每组测试数据有多少种分法。
//样例输入
//
//    1
//    6
//
//样例输出
//
//    11
