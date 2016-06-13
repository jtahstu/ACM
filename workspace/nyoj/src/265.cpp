/**
 * Project Name: nyoj
 * File Name: 265.cpp
 * Created on: 2015年7月18日 下午12:40:46
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

//#include<stdio.h>
//struct jm {
//	int w;
//	int h;
//} w[21];
//int main() {
//	int s, n, i, j, b, min;
//	int a[21];
//	scanf("%d", &s);
//	while (s--) {
//		scanf("%d", &n);
//		for (i = 0; i < n; i++) {
//			scanf("%d %d", &w[i].w, &w[i].h);
//			a[i] = w[i].w;
//		}
//		scanf("%d", &b);
//		for (min = 1001, i = 0; i < n; i++) {
//			if (w[i].h >= min)
//				continue;
//			for (j = 1; i >= j && w[i].h >= w[i - j].h; j++) //**求到左边高于自己积木的距离**//
//					{
//				a[i] = a[i] + w[i - j].w;
//			}
//			for (j = 1; i + j < n && w[i].h >= w[i + j].h; j++) //**求到右边高于自己积木的距离**//
//					{
//				a[i] = a[i] + w[i + j].w;
//			}
//			if (a[i] >= b)
//				min = w[i].h;
//		}
//		printf("%d\n", min + b);
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
//struct Juxin {
//	int w;
//	int h;
//} a[25];
//bool inc(Juxin a, Juxin b) {
//	return a.h <= b.h;
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, l;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			cin >> a[i].w >> a[i].h;
//		cin >> l;
//		sort(a, a + n, inc);
////		for (int i = 0; i < n; i++)
////			cout << a[i].h << a[i].w << " ";
////		cout << endl;
//		int sum = 0;
//		for (int i = 0; i < n; i++) {
//			sum += a[i].w;
//			if (sum >= l) {
//				cout << a[i].h + l << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}
//积木
//时间限制：3000 ms  |  内存限制：65535 KB
//难度：1
//描述
//在一个矩形的坑的底部，无缝地铺了一层积木（为简单起见，本题中，用矩形表示积木），如下图所示（阴影部分表示地，中空的部分表示坑，
//所有的白色矩形都表示坑底的积木）：
//
//现在，我们要在这个坑中再放入一块正方形积木，但我们希望这块积木的位置最低。如下图所示，左图中的灰色积木的位置就比右图中
//灰色积木的位置更好（本题不考虑重力因素，假定新放入的积木不会倾倒，它的边永远平行于坑壁）。而且，可以看出，左图中灰色方块的位
//置是所有可能的位置中最低的位置（本题中，假定坑足够宽也足够深，后加的那块积木不会放不进去）。
//
//如果事先给定所有事先铺好的积木的信息和后加的积木的信息，请编写程序寻找一下它的最低位置。
//输入
//第一行是一个整数N(N<=10)表示测试数据的组数）
//每组测试数据 第一行为一个整数m（<=20），表示坑底积木的数量
//
//之后m行，每行两个整数，依次表示从左至右的每块积木的宽度和高度（以厘米为单位）。
//每组测试数据最后一行中还有一个整数 ，表示后加的积木的边长（以厘米为单位）(<1000)
//输出
//每组测试数据输出只有一个整数，表示将后加的积木放入坑中最低位置之后，它的上沿距离坑底地面的高度，每个输出占一行。
//样例输入
//1
//2
//10 40
//15 60
//20
//样例输出
//80
