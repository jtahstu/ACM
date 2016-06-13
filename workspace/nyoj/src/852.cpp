/**
 * Project Name: nyoj 
 * File Name: 852.cpp
 * Created on: 2015年6月16日 下午7:45:46
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
/*#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<set>
#include <stdio.h>
#include <string.h>
#define MAX 1001
int a[MAX][MAX];

int main() {
	int t, n, max, count, i, j;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		max = (1 + n) * n / 2;
		count = 0;
		a[i = 1][j = 1] = ++count;
		while (count < max) {
			//向右
			while (j < n - i + 1) {
				if (a[i][j + 1] == 0)
					a[i][++j] = ++count;
				else
					break;
			}
			//向左下
			while (j > 1) {
				if (a[i + 1][j - 1] == 0)
					a[++i][--j] = ++count;
				else
					break;
			}
			//向上
			while (i > 1) {
				if (a[i - 1][j] == 0)
					a[--i][j] = ++count;
				else
					break;
			}
		}
		for (i = 1; i <= n; ++i) {
			for (j = 1; j <= n - i + 1; ++j)
				printf("%d ", a[i][j]);
			printf("\n");
		}
		if (t)
			printf("\n");
		memset(a, 0, sizeof(a));
	}
	return 0;
}*/
//样例输入
//
//    2
//    5
//    4
//
//样例输出
//
//    1  2  3  4  5
//    12 13 14 6
//    11 15 7
//    10 8
//    9
//
//    1  2  3  4
//    9  10 5
//    8  6
//    7
