/**
 * Project Name: hduoj
 * File Name: 2016.cpp
 * Created on: 2015��7��21�� ����3:29:14
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
//int main() {
//	int n;
//	while (cin >> n, n) {
//		int a[105];
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		int min = a[0], m = 0;
//		for (int i = 1; i < n; i++) {
//			if (a[i] < min) {
//				min = a[i];
//				m = i;
//			}
//		}
//		swap(a[0], a[m]);
//		cout << a[0];
//		for (int i = 1; i < n; i++)
//			cout << " " << a[i];
//		cout << endl;
//	}
//	return 0;
//}
//���ݵĽ������
//Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
//Total Submission(s): 68783    Accepted Submission(s): 26165
//
//
//Problem Description
//����n(n<100)�������ҳ�������С��������������ǰ����������������Щ����
//
//
//Input
//���������ж��飬ÿ��ռһ�У�ÿ�еĿ�ʼ��һ������n����ʾ�������ʵ������ֵ�ĸ��������ž���n��������n=0��ʾ����Ľ�������������
//
//
//Output
//����ÿ���������ݣ��������������У�ÿ�����ռһ�С�
//
//
//Sample Input
//
//4 2 1 3 4
//5 5 4 3 2 1
//0
//
//
//
//Sample Output
//
//1 2 3 4
//1 4 3 2 5
