/**
 * Project Name: nyoj
 * File Name: 969.cpp
 * Created on: 2015年7月17日 上午12:49:16
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//2楼   ACM_贺荣伟 回复2014-11-30 21:45:11分析：
//求函数的最小值，首先求导的导函数为：G(x) = 42 * x^6+48*x^5+21*x^2+10*x-y (0 <= x <=100)
//分析导函数的，导函数为一个单调递增的函数。如果导函数的最大值小于0，那么原函数在区间内单调递减。
//即F(100)最小；如果但函数的最小值大于0，那么原函数在区间内单调递增，即F(0)最小。如果导函数既有正又有负
//又由于导函数是单增函数，所以必有先负后正，即原函数必有先减后增的性质。求出导函数的零点就是原函数的最小值点。
//求导函数最小值方法是2分法.
//#include<stdio.h>
//#include<math.h>
//#define eps 1e-10
//double fun(double x, double y) {
//	return 6 * pow(x, 7) + 8 * pow(x, 6) + 7 * pow(x, 3) + 5 * x * x - x * y;
//}
//double fundao(double x, double y) {
//	return 42 * pow(x, 6) + 48 * pow(x, 5) + 21 * x * x + 10 * x - y;
//}
//int main(void) {
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		double y;
//		double a, b, c, d, e;
//		scanf("%lf", &y);
//		if (y <= 0) {
//			printf("%.4lf\n", fun(0, y));
//			continue;
//		}
//		a = 0;
//		b = 100;
//		c = fundao(0, y);
//		d = fundao(100, y);
//		if (c * d >= 0)
//			printf("%.4lf", fun(100, y));
//		while (b - a > eps) {
//			e = (a + b) / 2;
//			if (fabs(fundao(e, y)) < eps)
//				break;
//			else if ((fundao(e, y)) * c < 0) {
//				d = fundao(e, y);
//				b = e;
//			} else {
//				c = fundao(e, y);
//				a = e;
//			}
//		}
//		printf("%.4lf\n", fun(e, y));
//	}
//
//	return 0;
//}
