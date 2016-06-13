/**
 * Project Name: nyoj_2.0 
 * File Name: 1167.cpp
 * Created on: 2015年5月16日 下午3:14:26
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

/**
 * Project Name: C++
 * File Name: nyoj1167.cpp
 * Created on: 2015年4月7日 下午9:14:33
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int a[100005], ans[100005];
//int main1167() {
//	memset(a, 0, sizeof(a));
//	memset(ans, 0, sizeof(ans));
//	int c, b, count = 0, sum = 0;
//	for (int i = 2; i < 100001; i++) { //筛法确实是可以大大缩短时间，但还是超时
//		if (a[i] == 0)
//			for (int j = i + i; j < 100001; j += i)
//				a[j] = 1;
//	}
//	for (int i = 0; i <= 100000; i++) { //筛法后还要打表以节约时间
//		if (!a[i]) {
//			sum++;
//		}
//		ans[i] = sum;
//	}
//	while (scanf("%d%d", &c, &b) != EOF) {
//		count++;
//		printf("Case %%");
//		printf("%d:%d\n", count, ans[b] - ans[c - 1]); //减去a的前一个数
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//#define num 100005
//int main2() {
//	int flag[num], rec[num], sum = 0, cnt = 0, m, n;
//	flag[0] = 1;
//	for (int i = 2; i <= num / 2; i++)
//		if (!flag[i] && i <= sqrt(num))
//			for (int j = i * i; j <= num; j += i)
//				flag[j] = 1;
//	for (int i = 0; i <= num - 5; i++) {
//		if (!flag[i])
//			sum++;
//		rec[i] = sum;
//	}
//	while (scanf("%d %d", &m, &n) != EOF)
//		printf("Case %%%d:%d\n", ++cnt, rec[n] - rec[m - 1]);
//	return 0;
//}

