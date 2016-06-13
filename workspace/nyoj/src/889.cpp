/**
 * Project Name: nyoj 
 * File Name: 889.cpp
 * Created on: 2015年6月16日 下午8:09:40
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
/*
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
	string a[4], b[4];
	while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
		for (int i = 0; i < 4; i++)
			cin >> b[i];
		int i = 0, j = 0, k = 0, l = 0;
		for (int c = 0; c < 4; c++) {
			if (a[c] == "W")
				i--;
			if (a[c] == "E")
				j++;
			if (a[c] == "S")
				k--;
			if (a[c] == "N")
				l++;
		}
		int a1 = i +j, a2 = k + l;
		i = 0, j = 0, k = 0, l = 0;
		for (int c = 0; c < 4; c++) {
			if (b[c] == "W")
				i--;
			if (b[c] == "E")
				j++;
			if (b[c] == "S")
				k--;
			if (b[c] == "N")
				l++;
		}
		int b1 = i +j, b2 = k +l;
		double s = sqrt(1.0*(b1 - a1) * (b1 - a1) + 1.0*(b2 - a2) * (b2 - a2));
		printf("%.2lf\n", s);
	}
	return 0;
}
*/
//样例输入
//
//    W W W W
//    E E E E
//    W E S N
//    S W N E
//
//样例输出
//
//    8.00
//    0.00
