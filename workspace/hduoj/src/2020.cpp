/**
 * Project Name: hduoj
 * File Name: 2020.cpp
 * Created on: 2015年7月21日 上午3:51:18
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
//	a = abs(a);
//	b = abs(b);
//	return a >= b;
//}
//int main() {
//	int n;
//	while (cin >> n, n) {
//		int a[105];
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		sort(a, a + n, inc);
//		cout << a[0];
//		for (int i = 1; i < n; i++)
//			cout << " " << a[i];
//		cout << endl;
//	}
//	return 0;
//}
//绝对值排序
//Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
//Total Submission(s): 52532    Accepted Submission(s): 25395
//
//
//Problem Description
//输入n(n<=100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。
//
//
//Input
//输入数据有多组，每组占一行，每行的第一个数字为n,接着是n个整数，n=0表示输入数据的结束，不做处理。
//
//
//Output
//对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行。
//
//
//Sample Input
//
//3 3 -4 2
//4 0 1 2 -3
//0
//
//
//
//Sample Output
//
//-4 3 2
//-3 2 1 0
