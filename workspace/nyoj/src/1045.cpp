/**
 * Project Name: nyoj
 * File Name: 1045.cpp
 * Created on: 2015��7��17�� ����1:39:13
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
//int a[100005];
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		memset(a, 0, sizeof(a));
//		int n;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		int count = 0;
//		int max1 = a[0], max2 = a[n - 1], f1 = 0;
//		for (int i = 0; i < n; i++) { //��ǰ���ɨ��
//			if (a[i] >= max1) {
//				max1 = a[i];
//				count++;
//				f1 = i;
//			}
//		}
//		for (int i = n - 1; i >= 0; i--) { //�Ӻ���ǰɨ��
//			if (a[i] >= max2 && i > f1) {
//				max2 = a[i];
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//����Ů
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�0
//����
//	������վ������Ů������
//       Fujunʦ���ڽ����Ͼ�������Ʒ������ŭժ���������鱶�ã�����֯���ȥ����վ��һ�ſ���Ů ^.^
//       N����վ��һ�š����ɣ���Ů��ֻ�ڶ��������ߺ����ұߣ����ǿ������󿴻������ҿ��������i�������󿴣�
//	   ���ҽ�����i���˵����h[i]>=h[j] �� j=1...i-1�� ʱ�����ܿ�����Ů�������i�������ҿ������ҽ�����i���˵����h[i]>=h[j]
//	��j=i+1..N��ʱ�����ܿ�����Ů����֪N���˵���ߣ�������ж������ܿ�����Ů��
//����
//������һ����T ��T��
//ÿ�����ݣ� ��һ�� N��N<=100 000
//�ڶ��� �θ������� 1<=h<=20000
//
//���
//����� ���С�
//��������
//1
//5
//1 4 7 6 2
//�������
//5
