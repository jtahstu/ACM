/**
 * Project Name: nyoj
 * File Name: 17.cpp
 * Created on: 2015年6月24日 下午8:38:42
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//单调递增最长子序列
//#include <cstdio>
//#include <cstring>
//const int maxn = 10001;
//char s[maxn];
//int dp[maxn], Max;
//void LICS() {
//	int len;
//	memset(dp, 0, sizeof(dp));
//	len = strlen(s);
//	for (int i = 0; i < len; i++) {
//		dp[i] = 1; //给定一个数组求的时候，初始值就是1，一个数组的最大序列肯定会有一个字符；
//		for (int j = 0; j < i; j++) {
//			if (s[i] > s[j] && dp[i] < 1 + dp[j]) // 递推公式，如果这个位置比前面的字符都大，就加入到递增序列中来
//				dp[i] = 1 + dp[j];
//		}
//	}
//	Max = 0;
//	for (int i = 0; i < len; i++) //求出最大值
//		if (Max < dp[i])
//			Max = dp[i];
//}
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%s", s);
//		LICS();
//		printf("%d\n", Max);
//	}
//	return 0;
//}
