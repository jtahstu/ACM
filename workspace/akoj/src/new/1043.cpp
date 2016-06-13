/**
 * Project Name: akoj
 * File Name: 1043.cpp
 * Created on: 2016年5月20日 上午1:58:58
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include<iostream>
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
using namespace std;
int main() {
	int m;
	double ans = 1;
	cin >> m;
	for (int i = 2; i <= m; i++)
		ans -= 1.0 / (i * i);
	printf("%.6lf", ans);
	return 0;
}
