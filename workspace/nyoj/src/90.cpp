/**
 * Project Name: nyoj
 * File Name: 90.cpp
 * Created on: 2015��7��20�� ����10:10:55
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<stdio.h>//���6��but�ҿ�������
//int a[22] = { 1 }, n, i, j;
//int main() {
//	for (i = 1; i <= 10; i++)
//		for (j = 0; j <= 10; j++)
//			if (i + j <= 10)
//				a[i + j] += a[j];
//	scanf("%d", &i);
//	while (i--) {
//		scanf("%d", &j);
//		printf("%d\n", a[j]);
//	}
//}
//#include<iostream>
//using namespace std;
//int f(int n, int m) {+
//	if (!n || m == 1) { //��return����ʽ���жϳ�����
//		return 1;
//	}
//	return n < m ? f(n, n) : f(n - m, m) + f(n, m - 1);
//}
//int main() {
//	int nCase, n, m;
//	cin >> nCase;
//	while (nCase--) {
//		cin >> n;
//		cout << f(n, n) << endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main() {
//	int t;
//	cin >> t;
//	int a[11];
//	a[1] = 1, a[2] = 2, a[3] = 3;
//	for (int i = 4; i < 11; i++)
//		a[i] = a[i - 1] + (a[i - 1] - a[i - 2] + 1);
//	while (t--) {
//		int n;
//		cin >> n;
//		cout << a[n] << endl;
//	}
//	return 0;
//}
//��������
//ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�3
//
//����
//    ��������n��ʾ��һϵ��������֮�ͣ�n=n1+n2+��+nk��
//    ����n1��n2�ݡ���nk��1��k��1��
//    ������n�����ֱ�ʾ��Ϊ������n�Ļ��֡���������n�Ĳ�
//    ͬ���ָ�����
//    ����������6������11�ֲ�ͬ�Ļ��֣�
//    6��
//    5+1��
//    4+2��4+1+1��
//    3+3��3+2+1��3+1+1+1��
//    2+2+2��2+2+1+1��2+1+1+1+1��
//    1+1+1+1+1+1��
//
//����
//    ��һ���ǲ������ݵ���ĿM��1<=M<=10��������ÿ�о�����һ������n��1<=n<=10����
//���
//    ���ÿ����������ж����ַַ���
//��������
//
//    1
//    6
//
//�������
//
//    11
