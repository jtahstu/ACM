/**
 * Project Name: nyoj
 * File Name: 1143.cpp
 * Created on: 2015��7��19�� ����5:10:17
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int a[35][35];
//int main() {
//	int n;
//	while (cin >> n) {
//		memset(a, 0, sizeof(a));
//		int count = 0;
//		for (int i = 1; i <= n; i++) {
//			for (int j = i; j <= n; j++) //��������
//				a[i][j] = ++count;
//			for (int l = i + 1; l <= n; l++) //��������
//				a[l][i] = ++count;
//		}
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++)
//				cout << a[i][j] << " ";
//			cout << endl;
//		}
//	}
//	return 0;
//}
//������Ϸ
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�1
//
//����
//    peterϲ����������Ϸ����������������Ϸ������˵̫���ˣ�������׼����һ���ѵ���Ϸ����Ϸ��������һ��N*N�ı�������������򣺶���ÿ
//	�������N�������Ͻǿ�ʼ�������ԶԽ���Ϊ��㣬�Ⱥ������������������һЩ�����������������ҵ����ɲ������N*N�ı���ӡ�����ɡ�
//
//����
//    ����������ݣ���������100�����ڣ���ÿ���������ֻ��һ��Ϊһ������N��1<=N<=30������ʾ���Ĵ�С��
//���
//    ����ÿ���������ݣ����N�У�Ϊ����ı��N�У�ÿ��N��������ÿ������֮���ÿո������
//��������
//
//    3
//    5
//
//�������
//
//    1 2 3
//    4 6 7
//    5 8 9
//    1 2 3 4 5
//    6 10 11 12 13
//    7 14 17 18 19
//    8 15 20 22 23
//    9 16 21 24 25
