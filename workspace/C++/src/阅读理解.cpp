/**
 * Project Name: C++
 * File Name: 阅读理解.cpp
 * Created on: 2015年6月23日 下午3:05:12
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//using namespace std;
//int a[100005], ans[100005];
//int main() {
//	memset(a, 0, sizeof(a));
//	memset(ans, 0, sizeof(ans));
//	int c, b, count = 0, sum = 0;
//	for (int i = 2; i < 100001; i++) { //筛法
//		if (a[i] == 0)
//			for (int j = i + i; j < 100001; j += i)
//				a[j] = 1;
//	}
//	for (int i = 0; i <= 100000; i++) { //打表
//		if (!a[i]) {
//			sum++;
//		}
//		ans[i] = sum;
//	}
//	while (~scanf("%d%d", &c, &b)) {
//		count++;
//		printf("Case %%");
//		printf("%d:%d\n", count, ans[b] - ans[c - 1]);
//	}
//	return 0;
//}
