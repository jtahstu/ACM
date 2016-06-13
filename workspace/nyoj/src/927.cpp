/**
 * Project Name: nyoj 
 * File Name: 927.cpp
 * Created on: 2015年6月12日 下午4:21:27
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<cctype>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<map>
//#include<set>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//bool P;
//int n, sum, t, a[200];
//
//void dfs(int x) {
//	if (t > sum)
//		return;
//	if (t == sum)
//		P = true;
//	for (int i = x; i <= n; i++) {
//		t += a[i];
//		dfs(i + 1);
//		t -= a[i];
//	}
//}
//int main() {
//	while (scanf("%d", &n) != EOF) {
//		t = 0;
//		P = false;
//		for (int i = 1; i <= n; i++)
//			scanf("%d", &a[i]);
//		scanf("%d", &sum);
//		dfs(1);
//		if (P)
//			printf("Of course,I can!\n");
//		else
//			printf("Sorry,I can't!\n");
//	}
//}
