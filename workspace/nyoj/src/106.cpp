/**
 * Project Name: nyoj 
 * File Name: 106.cpp
 * Created on: 2015年4月10日 上午12:42:13
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main106() {
//	int n;
//	cin >> n;
//	while (n--) {
//		int a[15] = { 0 }, s, m, v, w, res = 0;
//		cin >> s >> m;
//		for (int i = 0; i < s; i++) {
//			cin >> v >> w;
//			a[v] += w;  // a[i]数组元素代表其价值，a[i]的值代表其重量
//		}
//		for (int i = 10; i > 0; i--) {
//			if (m > a[i]) { //如果还有容量来装下全部，全装
//				res += i * a[i];
//				m -= a[i];
//			} else { //否则加剩余重量*价值，退出
//				res += i * m;
//				break;
//			}
//		}
//		cout << res << endl;
//	}
//	return 0;
//}
/*
 * 背包问题
 时间限制：3000 ms  |  内存限制：65535 KB
 难度：3
 描述
 现在有很多物品（它们是可以分割的），我们知道它们每个物品的单位重量的价值v和重量w（1<=v,w<=10）；
 如果给你一个背包它能容纳的重量为m（10<=m<=20）,你所要做的就是把物品装到背包里，使背包里的物品的价值总和最大。
 输入
 第一行输入一个正整数n（1<=n<=5）,表示有n组测试数据；
 随后有n测试数据，每组测试数据的第一行有两个正整数s，m（1<=s<=10）;s表示有s个物品。接下来的s行每行有两个正整数v，w。
 输出
 输出每组测试数据中背包内的物品的价值和，每次输出占一行。
 样例输入
 1
 3 15
 5 10
 2 8
 3 9
 样例输出
 65
 */

