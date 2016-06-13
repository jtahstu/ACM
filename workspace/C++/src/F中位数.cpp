/**
 * Project Name: 省赛 
 * File Name: F中位数.cpp
 * Created on: 2015年4月26日 下午2:16:00
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//Sample Input
//4
//1 2 3 4
//3
//1 2 3
//Sample Output
//2.50
//2.00
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int mainsajdhasjhda() {
	int a[10005] = { 0 }, n;
	while (cin >> n) {
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		double ans;
		if (n % 2)
			ans = a[n / 2];
		else
			ans = (a[n / 2] + a[n / 2 - 1]) * 1.0 / 2;
		printf("%.2f\n", ans);
	}
	return 0;
}

