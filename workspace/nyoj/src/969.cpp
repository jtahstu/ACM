/**
 * Project Name: nyoj
 * File Name: 969.cpp
 * Created on: 2015��7��17�� ����12:49:16
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//2¥   ACM_����ΰ �ظ�2014-11-30 21:45:11������
//��������Сֵ�������󵼵ĵ�����Ϊ��G(x) = 42 * x^6+48*x^5+21*x^2+10*x-y (0 <= x <=100)
//�����������ģ�������Ϊһ�����������ĺ�������������������ֵС��0����ôԭ�����������ڵ����ݼ���
//��F(100)��С���������������Сֵ����0����ôԭ�����������ڵ�����������F(0)��С��������������������и�
//�����ڵ������ǵ������������Ա����ȸ���������ԭ���������ȼ����������ʡ������������������ԭ��������Сֵ�㡣
//�󵼺�����Сֵ������2�ַ�.
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
