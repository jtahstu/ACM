/**
 * Project Name: nyoj
 * File Name: 1162.cpp
 * Created on: 2015��7��24�� ����8:03:59
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//int main() {
//	int test, i, j, len, k, ans, t, c, a[1000], b[1000];
//	char s[1000];
//	scanf("%d", &test);
//	while (test--) {
//		memset(a, 0, sizeof(a));
//		memset(b, 0, sizeof(b));
//		scanf("%s", s);
//		len = strlen(s);
//		for (i = 0; i < len; i++)
//			b[i] = s[i] - '0';
//		for (i = 0, t = 10, j = 0; i < len;) {
//			k = 1;
//			ans = 0;
//			c = i;
//			while (b[c] != 0) { //����������飬��ÿ������������
//				ans = b[c] + ans * t;
//				k++; //������ans�ı��ˣ�������0�ˣ���ʾĿǰ�������kλ
//				c++;
//			}
//			if (k != 1) {
//				a[j] = ans; //������ans��Ϊ0�������a������
//				j++;
//			}
//			i += k; //��ʾ����kλ�ˣ�i����k��������������
//		}
//		sort(a, a + j + 1);
//		if (a[j] == 0) //������һλΪ0
//			printf("0\n");
//		else {
//			for (i = 1; i < j; i++) {
//				printf("%d ", a[i]);
//			}
//			printf("%d\n", a[j]);
//		}
//	}
//	return 0;
//}
