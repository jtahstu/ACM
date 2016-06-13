/**
 * Project Name: 省赛 
 * File Name: G国王的战争.cpp
 * Created on: 2015年4月26日 下午2:30:38
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//Sample Input
//3 3 2
//1 1
//3 3
//Sample Output
//NO
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int mainGG() {
	int a[105][105], n, m, k, x, y;
	while (cin >> n >> m >> k) {
		memset(a, 0, sizeof(a));
		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			a[x][y] = 1;
		}
		bool flag = true;
		for (int i = 1; i <= n; i++)
			if (flag)
				for (int j = 1; j <= m; j++) {
					if (a[i][j] == 1) {
						if (a[i - 1][j] == 1 || a[i - 1][j - 1] == 1
								|| a[i - 1][j + 1] == 1 || a[i + 1][j] == 1
								|| a[i + 1][j + 1] == 1 || a[i + 1][j - 1] == 1
								|| a[i][j - 1] == 1 || a[i][j + 1] == 1) {
							flag = false;
							break;
						}
					}
				}
		if (!flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

