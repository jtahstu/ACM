/**
 * Project Name: P65 
 * File Name: 52.cpp
 * Created on: 2015��4��6�� ����2:30:26
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//52С������
//С������ͬ�ְ�һ��ȥ��꣬��ѡ���������飬ÿ����ĵ��۷ֱ�Ϊ��3.1��1.7��2��5.3��0.9��7.2��
//���ɵ��ǣ�С���İְ�ֻ����ʮ����Ǯ��Ϊ����С����һ�����ļ��ڣ��ְ���Ȼͬ�����飬�����ʹ�һ��Ҫ��
//ҪС������������ѡ�����ɱ���ʹ�õ���������õĺ�ͬ10��ӽ������ܹ�����С��������������
//
//*���н��
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
		scanf("%f", &c[i]); /*��������������*/
	for (i = 0, min = -1, d[0] = 0; d[0] < 2; d[0]++) /*������������ȫ����ϲ�����*/
		for (d[1] = 0; d[1] < 2; d[1]++) /*i:��ֵ����min��ϵ�����*/
			for (d[2] = 0; d[2] < 2; d[2]++) /*min:��10����С��ֵ*/
				for (d[3] = 0; d[3] < 2; d[3]++) /*d[]:���ʱ�Ƿ�ȡ�����ı�־*/
					for (d[4] = 0; d[4] < 2; d[4]++)
						for (d[5] = 0; d[5] < 2; d[5]++) {
							for (flag = 0, x = 0, j = 5; j >= 0; j--)
							/*flag:��������������ö�Ӧ��һ��ʮ����λ��ʾ x:��Ӧ��������ϵĺ�*/
							{
								x += c[j] * d[j];
								flag = flag * 10 + d[j];
							}

							x = ((x - 10 > 0) ? x - 10 : 10 - x); /*x: ��ϵĺ���10�Ĳ�*/
							if (min < 0) {
								min = x; /*�Ե�һ�μ�����Ĳ�min���д���*/
								b[i++] = flag; /*b[]:����ͬ��min��flag������ i:b[]������±�*/
							} else if (min - x > 1.e-6) /*���µ�min�Ĵ���*/
							{
								min = x;
								b[0] = flag;
								i = 1;
							} else if (fabs((double) x - min) < 1.e-6)
								b[i++] = flag; /*�����min�Ĵ���*/
						}
	for (m = 0; m < i; m++) /*���ȫ��i����10�Ĳ�ֵ��Ϊmin�����*/
	{
		printf("10(+ -)%.2f=", min);
		for (flag = b[m], j = 0; flag > 0; j++, flag /= 10)
			if (flag % 10) /*��b[]�д�ı��flag��ԭΪ�����������*/
				if (flag > 1)
					printf("%.2f+", c[j]);
				else
					printf("%.2f\n", c[j]);
	}

	return 0;
}

