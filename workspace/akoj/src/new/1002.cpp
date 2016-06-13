/**
 * Project Name: akoj
 * File Name: 1002.cpp
 * Created on: 2016年5月19日 下午9:36:43
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
	double a, b, c;
	cin >> a >> b >> c;
	double delt = b * b - 4 * a * c;
	double res1 = (-b + sqrt(delt)) / (2 * a), res2 = (-b - sqrt(delt))
			/ (2 * a);
	printf("%.2lf %.2lf\n", res1, res2);
	return 0;
}
