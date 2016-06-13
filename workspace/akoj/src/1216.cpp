/**
 * Project Name: akoj 
 * File Name: 1216.cpp
 * Created on: 2015年4月9日 下午6:46:25
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main1216() {
//	int n, *a, i, j, k, f;
//	while (scanf("%d", &n) == 1) {
//		a = (int *) malloc(n * n * sizeof(int));
//		if (a) {
//			for (i = j = k = 0; i < n; i++, j++) {
//				k += (i + 1);
//				a[i * n] = (j % 2) ? k : k - i;
//			} //输出第1列
//			for (i = 1; i < n; i++, j++) {
//				k += (n - i);
//				a[(n - 1) * n + i] = (j % 2) ? k : k - (n - i - 1);
//			} //输出最后1行
//			for (i = f = 1; i < n; i++, f = (-f)) //其他输出项
//				for (j = 0; j < n - 1; j++)
//					a[j * n + i] =
//							(j % 2) ?
//									(a[(j + 1) * n + (i - 1)] + f) :
//									(a[(j + 1) * n + (i - 1)] - f);
//			for (i = 0; i < n; i++) {
//				for (j = 0; j < n; j++)
//					printf("%d ",a[i * n + j]);
//				printf("\n");
//			}
//			free(a);
//		}
//	}
//	return 0;
//}
//
