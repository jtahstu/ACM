/**
 * Project Name: nyoj
 * File Name: 1052.cpp
 * Created on: 2015��7��17�� ����2:35:52
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
//int a[20005];
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, m;
//		cin >> n;
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < n; i++) {
//			cin >> m;
//			a[m]++;
//		}
//		int count = n;
//		for (int i = 0; i < 20001; i++)
//			if (a[i] > 2) //��������ͬ������2�����ϣ�ֻ�����������������Ķ�����
//				count = count - (a[i] - 2);
//		cout << count << endl;
//	}
//	return 0;
//}
//����Ů������
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�2
//����
//������վ������Ů������
//       N����վ��һ�š����ɣ���Ů��ֻ�ڶ��������ߺ����ұߣ����ǿ������󿴻������ҿ��������i�������󿴣�
//	   ���ҽ�����i���˵����h[i]>h[j] �� j=1...i-1�� ʱ�����ܿ�����Ů�������i�������ҿ������ҽ�����i���˵����h[i]>h[j] ��j=i+1..N��
//	   ʱ�����ܿ�����Ů����֪N���˵���ߣ�Ϊ�����ø�����˿�����Ů������������ҳ���õ�վ�ӷ��������������ܿ�����Ů��
//	   �������ж����˿��Կ�����Ů��
//����
//������һ����T ��T��
//ÿ�����ݣ� ��һ�� N��N<=100 000
//�ڶ��� �θ������� 1<=h<=20000
//���
//����� ���С�
//��������
//1
//5
//1 4 7 6 2
//�������
//5
