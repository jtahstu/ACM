/**
 * Project Name: nyoj
 * File Name: 79.cpp
 * Created on: 2015��6��24�� ����8:39:53
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//������ݼ�������
//#include <cstdio>
//#include <cstring>
//const int maxn = 25;
//int a[maxn], dp[maxn], m, Max;
//void LICS() {
//	memset(dp, 0, sizeof(dp));
//	for (int i = 0; i < m; i++) {
//		dp[i] = 1;
//		for (int j = 0; j < i; j++)
//			if (a[i] < a[j] && dp[i] < dp[j] + 1) //a[i]<a[j]���ǵ����ݼ�������У�˼���Ϻ͵�������һ����
//				dp[i] = dp[j] + 1;
//	}
//	Max = 0;
//	for (int i = 0; i < m; i++)
//		if (Max < dp[i])
//			Max = dp[i];
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	while (n--) {
//		scanf("%d", &m);
//		for (int i = 0; i < m; i++)
//			scanf("%d", &a[i]);
//		LICS();
//		printf("%d\n", Max);
//	}
//	return 0;
//}
