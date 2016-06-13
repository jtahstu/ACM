/**
 * Project Name: hduoj
 * File Name: 2016.cpp
 * Created on: 2015年7月21日 上午3:29:14
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
//int main() {
//	int n;
//	while (cin >> n, n) {
//		int a[105];
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		int min = a[0], m = 0;
//		for (int i = 1; i < n; i++) {
//			if (a[i] < min) {
//				min = a[i];
//				m = i;
//			}
//		}
//		swap(a[0], a[m]);
//		cout << a[0];
//		for (int i = 1; i < n; i++)
//			cout << " " << a[i];
//		cout << endl;
//	}
//	return 0;
//}
//数据的交换输出
//Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
//Total Submission(s): 68783    Accepted Submission(s): 26165
//
//
//Problem Description
//输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。
//
//
//Input
//输入数据有多组，每组占一行，每行的开始是一个整数n，表示这个测试实例的数值的个数，跟着就是n个整数。n=0表示输入的结束，不做处理。
//
//
//Output
//对于每组输入数据，输出交换后的数列，每组输出占一行。
//
//
//Sample Input
//
//4 2 1 3 4
//5 5 4 3 2 1
//0
//
//
//
//Sample Output
//
//1 2 3 4
//1 4 3 2 5
