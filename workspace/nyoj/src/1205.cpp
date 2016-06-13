/**
 * Project Name: nyoj_2.0
 * File Name: 1205.cpp
 * Created on: 2015年5月18日 下午7:54:03 the end 2015/7/15 2:00
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//int a[1005][1005];
//void search(int sb, int n, int m) {
//	int i = 1, j = m;
//	bool f = false;
//	while (i <= n && j > 0) {
//		if (a[i][j] == sb) {
//			f = true;
//			cout << i << " " << j << endl;
//			break;
//		} else if (a[i][j] < sb)
//			i++;
//		else
//			j--;
//	}
//	if (!f)
//		cout << "NO" << endl;
//}
//void solve() {
//	int n, m, t, sb;
//	while (~scanf("%d%d", &n, &m)) {
//		memset(a, 0, sizeof(a));
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//				scanf("%d", &a[i][j]);
//		scanf("%d", &t);
//		while (t--) {
//			scanf("%d", &sb);
//			search(sb, n, m);
//		}
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
/**
 * Project Name: nyoj_2.0
 * File Name: 1205.cpp
 * Created on: 2015年5月18日 下午7:54:03 the end 2015/7/15 2:00
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
//#include<map>
//using namespace std;
//void solve() {
//	int n, m, x, t, sb;
//	while (~scanf("%d%d", &n, &m)) {
//		map<int, int> a;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++) {
//				scanf("%d", &x);
//				if (a[x] == 0 || (a[x] != 0 && a[x] % 10000 < j))
//					a[x] = i * 10000 + j;
//			}
//		scanf("%d", &t);
//		while (t--) {
//			scanf("%d", &sb);
//			a[sb] == 0 ?
//					printf("NO\n") :
//					printf("%d %d\n", a[sb] / 10000, a[sb] % 10000);
//		}
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
//简单问题
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：2
//描述
//给你一个n*m的矩阵，其中的元素每一行从左到右按递增顺序排序，每一列从上到下按递增顺序排序，然后给你一些数x，问这些书在不在这个矩阵中，
//若在，输出其列号最大的元素坐标。
//输入
//多组测试样例，首先两个数n，m（0<n,m<=1000）
//然后n行m列的一个矩阵，其中的元素保证在32位整型范围
//然后一个数cnt，表示询问数的个数（0<cnt<=100）
//然后是cnt个要询问的元素
//输出
//如果存在，输出其列号最大的元素坐标
//否则，输出“NO”
//样例输入
//4 4
//1 2 8 9
//2 4 9 12
//4 7 10 13
//6 8 11 15
//3
//7 8 14
//样例输出
//3 2
//1 3
//NO
