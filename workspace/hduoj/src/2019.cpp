/**
 * Project Name: hduoj
 * File Name: 2019.cpp
 * Created on: 2015年7月21日 上午3:44:52
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
//	int n, m;
//	while (cin >> n >> m) {
//		if (m == 0 && n == 0)
//			break;
//		int a[105];
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		a[n] = m;
//		sort(a, a + n + 1);
//		cout << a[0];
//		for (int i = 1; i <= n; i++)
//			cout << " " << a[i];
//		cout << endl;
//	}
//	return 0;
//}
//数列有序!
//Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
//Total Submission(s): 58341    Accepted Submission(s): 25162
//
//
//Problem Description
//有n(n<=100)个整数，已经按照从小到大顺序排列好，现在另外给一个整数x，请将该数插入到序列中，并使新的序列仍然有序。
//
//
//Input
//输入数据包含多个测试实例，每组数据由两行组成，第一行是n和m，第二行是已经有序的n个数的数列。n和m同时为0标示输入数据的结束，本行不做处理。
//
//
//Output
//对于每个测试实例，输出插入新的元素后的数列。
//
//
//Sample Input
//
//3 3
//1 2 4
//0 0
//
//
//
//Sample Output
//
//1 2 3 4
