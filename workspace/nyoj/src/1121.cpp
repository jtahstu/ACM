/**
 * Project Name: nyoj
 * File Name: 1121.cpp
 * Created on: 2015年7月17日 上午3:16:30
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
//	string s;
//	while (cin >> s) {
//		for (unsigned int i = 1; i <= s.length(); i++)
//			if (s.length() % i == 0) {
//				bool flag = true;
//				for (unsigned int j = i; j < s.length(); j++)
//					if (s[j] != s[j % i]) {
//						flag = false;
//						break;
//					}
//				if (flag) {
//					cout << i << endl;
//					break;
//				}
//			}
//	}
//	return 0;
//}
//周期串
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：1
//描述
//一个字符串可以由长度为k的字符串重复多次得到，我们说该串以k为周期，例如abcabcabcabc  以3为最小周期（注意它也可以以6和12为周期）
//
//我们输入一个不超过200的串，输出它的最小周期（字符串区分大小写）
//
//输入
//有多组测试数据，每组输入一个字符串
//输出
//输出相应字符串的最小周期
//样例输入
//abcabcabcabc
//abcd
//样例输出
//3
//4
