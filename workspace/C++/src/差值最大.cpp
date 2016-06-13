/**
 * Project Name: C++
 * File Name: 差值最大.cpp
 * Created on: 2015年6月23日 下午8:15:39
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int main() {
//	int m, n;
//	while (cin >> m >> n) {
//		if (m == 0 && n == 0)
//			break;
//		int a[55][55] = { 0 }, max = -1, min = 10000000;
//		for (int i = 0; i < m; i++)
//			for (int j = 0; j < n; j++)
//				cin >> a[i][j];
//		for (int i = 0; i < m; i++) { //计算每行累加和的最大最小值
//			int sum = 0;
//			for (int j = 0; j < n; j++) {
//				sum += a[i][j];
//			}
//			if (sum > max)
//				max = sum;
//			if (sum < min)
//				min = sum;
//		}
//		for (int j = 0; j < n; j++) { //计算每列累加和的最大最小值
//			int summ = 0;
//			for (int i = 0; i < m; i++) {
//				summ += a[i][j];
//			}
//			if (summ > max)
//				max = summ;
//			if (summ < min)
//				min = summ;
//		}
//		cout << max - min << endl;
//	}
//	return 0;
//}
