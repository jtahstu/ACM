/**
 * Project Name: nyoj_2.0 
 * File Name: 915.cpp
 * Created on: 2015年4月27日 下午7:55:24
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//样例输入
//++-+--+
//-++--++
//样例输出
//4
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main915() {
//	string a, b;
//	while (cin >> a >> b) {
//		int count1 = 0, count2 = 0;
//		for (unsigned int i = 0; i < a.length(); i++) {
//			if (a[i] == '+')
//				count1++;
//			if (b[i] == '+')
//				count2++;
//		}
//		if (count1 != count2) {
//			cout << "-1" << endl;
//			continue;
//		}
//		int sum = 0;
//		for (unsigned int i = 0; i < a.length(); i++) {
//			if (a[i] != b[i]) {
//				for (unsigned int j = i + 1; j < a.length(); j++) {
//					if (a[j] == b[i]) {
//						swap(a[i], a[j]);
//						sum += j - i;
//						break;
//					}
//				}
//			}
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}

