/**
 * Project Name: nyoj
 * File Name: 1052.cpp
 * Created on: 2015年7月17日 上午2:35:52
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
//int a[20005];
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, m;
//		cin >> n;
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < n; i++) {
//			cin >> m;
//			a[m]++;
//		}
//		int count = n;
//		for (int i = 0; i < 20001; i++)
//			if (a[i] > 2) //如果身高相同的人有2个以上，只能留下两个，其他的都可以
//				count = count - (a[i] - 2);
//		cout << count << endl;
//	}
//	return 0;
//}
//看美女（二）
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：2
//描述
//“排排站，赏美女……”
//       N个人站成一排。不巧，美女们只在队伍的最左边和最右边，你们可以向左看或者向右看。如果第i个人向左看，
//	   当且仅当第i个人的身高h[i]>h[j] （ j=1...i-1） 时，他能看到美女；如果第i个人向右看，当且仅当第i个人的身高h[i]>h[j] （j=i+1..N）
//	   时，他能看见美女。已知N个人的身高，为了能让更多的人看到美女，你的任务是找出最好的站队方法，让最多的人能看到美女，
//	   输出最多有多少人可以看到美女。
//输入
//先输入一个数T 表T组
//每组数据： 第一行 N。N<=100 000
//第二行 Ｎ个整数， 1<=h<=20000
//输出
//输出答案 换行。
//样例输入
//1
//5
//1 4 7 6 2
//样例输出
//5
