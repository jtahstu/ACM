/**
 * Project Name: nyoj
 * File Name: 1045.cpp
 * Created on: 2015年7月17日 上午1:39:13
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
//int a[100005];
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		memset(a, 0, sizeof(a));
//		int n;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		int count = 0;
//		int max1 = a[0], max2 = a[n - 1], f1 = 0;
//		for (int i = 0; i < n; i++) { //从前向后扫描
//			if (a[i] >= max1) {
//				max1 = a[i];
//				count++;
//				f1 = i;
//			}
//		}
//		for (int i = n - 1; i >= 0; i--) { //从后向前扫描
//			if (a[i] >= max2 && i > f1) {
//				max2 = a[i];
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//看美女
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：0
//描述
//	“排排站，赏美女……”
//       Fujun师兄在今年南京赛区人品爆发，怒摘银奖，心情倍好，现组织大家去海边站成一排看美女 ^.^
//       N个人站成一排。不巧，美女们只在队伍的最左边和最右边，你们可以向左看或者向右看。如果第i个人向左看，
//	   当且仅当第i个人的身高h[i]>=h[j] （ j=1...i-1） 时，他能看到美女；如果第i个人向右看，当且仅当第i个人的身高h[i]>=h[j]
//	（j=i+1..N）时，他能看见美女。已知N个人的身高，求最多有多少人能看到美女。
//输入
//先输入一个数T 表T组
//每组数据： 第一行 N。N<=100 000
//第二行 Ｎ个整数， 1<=h<=20000
//
//输出
//输出答案 换行。
//样例输入
//1
//5
//1 4 7 6 2
//样例输出
//5
