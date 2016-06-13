/**
 * Project Name: P65 
 * File Name: 52.cpp
 * Created on: 2015年4月6日 下午2:30:26
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//52小明买书
//小明假期同爸爸一起去书店，他选中了六本书，每本书的单价分别为：3.1，1.7，2，5.3，0.9和7.2。
//不巧的是，小明的爸爸只带了十几块钱，为了让小明过一个愉快的假期，爸爸扔然同意买书，但提邮购一个要求，
//要小明从六本书中选出若干本，使得单价相加所得的和同10最接近。你能够帮助小明解决这个问题吗？
//
//*运行结果
//Please enter the prices of 6 books:3.1 1.7 2.0 5.3 0.9 7.2
//10(+ -)0.10=2.00+0.90+7.20
//10(+ -)0.10=1.70+2.00+5.30+0.90
//10(+ -)0.10=3.10+1.70+5.30
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main52() {
	int d[6], m, i, j;
	long b[63], flag;
	float c[6], min, x;
	for (i = 0; i < 6; i++)
		scanf("%f", &c[i]); /*输入六个浮点数*/
	for (i = 0, min = -1, d[0] = 0; d[0] < 2; d[0]++) /*建立六个数的全部组合并处理*/
		for (d[1] = 0; d[1] < 2; d[1]++) /*i:差值具有min组合的数量*/
			for (d[2] = 0; d[2] < 2; d[2]++) /*min:与10的最小差值*/
				for (d[3] = 0; d[3] < 2; d[3]++) /*d[]:组合时是否取该数的标志*/
					for (d[4] = 0; d[4] < 2; d[4]++)
						for (d[5] = 0; d[5] < 2; d[5]++) {
							for (flag = 0, x = 0, j = 5; j >= 0; j--)
							/*flag:将六个数的组合用对应的一个十进制位表示 x:对应六个数组合的和*/
							{
								x += c[j] * d[j];
								flag = flag * 10 + d[j];
							}

							x = ((x - 10 > 0) ? x - 10 : 10 - x); /*x: 组合的和与10的差*/
							if (min < 0) {
								min = x; /*对第一次计算出的差min进行处理*/
								b[i++] = flag; /*b[]:有相同的min的flag的数组 i:b[]数组的下标*/
							} else if (min - x > 1.e-6) /*对新的min的处理*/
							{
								min = x;
								b[0] = flag;
								i = 1;
							} else if (fabs((double) x - min) < 1.e-6)
								b[i++] = flag; /*对相等min的处理*/
						}
	for (m = 0; m < i; m++) /*输出全部i个与10的差值均为min的组合*/
	{
		printf("10(+ -)%.2f=", min);
		for (flag = b[m], j = 0; flag > 0; j++, flag /= 10)
			if (flag % 10) /*将b[]中存的标记flag还原为各个数的组合*/
				if (flag > 1)
					printf("%.2f+", c[j]);
				else
					printf("%.2f\n", c[j]);
	}

	return 0;
}

