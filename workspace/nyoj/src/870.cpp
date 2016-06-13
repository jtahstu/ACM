/**
 * Project Name: nyoj 
 * File Name: 870.cpp
 * Created on: 2015年6月9日 下午11:31:49
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//根本不会出现none输出嘛，至少都有个a的好吧，出题目的是怎么想的
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main() {
//	int n;
//	while (cin >> n) {
//		if (n == -1)
//			break;
//		string s;
//		int a[27] = { 0 };
//		a[0] = 1;
//		bool flag = false;
//		for (int i = 0; i < n; i++) {
//			cin >> s;
//			a[s[0] - 'a'] = a[s[2] - 'a'];
//		}
//		for (int i = 0; i < 26; i++)
//			if (a[i] == 1) {
//				flag = true;
//				cout << char(i + 'a') << " ";
//			}
//		if (!flag)
//			cout << "none";
//		cout << endl;
//	}
//	return 0;
//}
//样例输入
//
//    4
//    b=a
//    c=d
//    d=b
//    e=f
//    -1
//
//样例输出
//
//    a b d
//#include <iostream>
//#include<stdio.h>
//using namespace std;
//int main() {
//	int n, i;
//	char c, b[210];
//	cin >> n;
//	while (n != -1) {
//		int a[26] = { 1 }, f = 1;
//		for (i = 0; i < 2 * n; i += 2)
//			cin >> b[i] >> c >> b[i + 1];
//		for (i = 0; i < 2 * n; i += 2)
//			a[b[i] - 'a'] = a[b[i + 1] - 'a'];
//		for (i = 0; i < 26; i++)
//			if (a[i]) {
//				f = 0;
//				cout << (char) (i + 97) << " ";
//			}
//		if (f)
//			cout << "none";
//		cout << endl;
//		cin >> n;
//	}
//	return 0;
//}
