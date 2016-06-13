/**
 * Project Name: Summer
 * File Name: 部分和问题.cpp
 * Created on: 2015年7月23日 下午5:12:01
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
//const int MAX_N = 25;
//int a[MAX_N];
//int n, k;
//bool dfs(int i, int sum) { // 已经从前i项得到了和sum，然后对于i项之后的进行分支
//	if (i == n) // 如果前n项都计算过了，则返回sum是否与k相等
//		return sum == k;
//	if (dfs(i + 1, sum)) // 不加上a[i]的情况
//		return true;
//	if (dfs(i + 1, sum + a[i])) // 加上a[i]的情况
//		return true;
//	return false; // 无论是否加上a[i]都不能凑成k就返回false
//}
//void solve() {
//	while (cin >> n >> k) {
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		if (dfs(0, 0))
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
