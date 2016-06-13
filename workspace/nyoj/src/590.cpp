/**
 * Project Name: nyoj_2.0 
 * File Name: 590.cpp
 * Created on: 2015年5月17日 下午7:26:04
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main590() {
//	int n, m, a[1005] = { 0 };
//	while (cin >> n >> m) {
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		int sum, count = 0;
//		for (int i = 0; i < n; i++) {
//			sum=0;
//				for (int j = i; j < n; j++) {
//					sum += a[j];
//					if (sum == m) {
//						count++;
//						break;
//					}
//					if(sum>m)break;
//				}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//相同的和
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：1
//描述
//给出一些数a1,a2,a3,a4.....,an,如果一个连续的字串的和等于常数m，那么这个子串就是我们想要的，那么问题很简单，请求出这样字串的个数？
//
//例如：数列为：3，4，1，6，2，5。m 的值为7时，连续字串{3,4},{1,6},{2,5}满足要求。
//
//输入
//每种情况，第一行2个数n，m，n表示有多少个数，m是常数
//第二行是n个数的值 （所有的数小于1000）
//输出
//每种情况个数
//样例输入
//6 7
//3 4 1 6 2 5
//3 1
//2 3 4
//样例输出
//3
//0

