/**
 * Project Name: nyoj_2.0 
 * File Name: 590.cpp
 * Created on: 2015��5��17�� ����7:26:04
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main590() {
//	int n, m, a[1005] = { 0 };
//	while (cin >> n >> m) {
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		int sum, count = 0;
//		for (int i = 0; i < n; i++) {
//			sum=0;
//				for (int j = i; j < n; j++) {
//					sum += a[j];
//					if (sum == m) {
//						count++;
//						break;
//					}
//					if(sum>m)break;
//				}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}
//��ͬ�ĺ�
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�1
//����
//����һЩ��a1,a2,a3,a4.....,an,���һ���������ִ��ĺ͵��ڳ���m����ô����Ӵ�����������Ҫ�ģ���ô����ܼ򵥣�����������ִ��ĸ�����
//
//���磺����Ϊ��3��4��1��6��2��5��m ��ֵΪ7ʱ�������ִ�{3,4},{1,6},{2,5}����Ҫ��
//
//����
//ÿ���������һ��2����n��m��n��ʾ�ж��ٸ�����m�ǳ���
//�ڶ�����n������ֵ �����е���С��1000��
//���
//ÿ���������
//��������
//6 7
//3 4 1 6 2 5
//3 1
//2 3 4
//�������
//3
//0

