/**
 * Project Name: nyoj
 * File Name: 17.cpp
 * Created on: 2015��6��24�� ����8:38:42
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//���������������
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
//		dp[i] = 1; //����һ���������ʱ�򣬳�ʼֵ����1��һ�������������п϶�����һ���ַ���
//		for (int j = 0; j < i; j++) {
//			if (s[i] > s[j] && dp[i] < 1 + dp[j]) // ���ƹ�ʽ��������λ�ñ�ǰ����ַ����󣬾ͼ��뵽������������
//				dp[i] = 1 + dp[j];
//		}
//	}
//	Max = 0;
//	for (int i = 0; i < len; i++) //������ֵ
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
