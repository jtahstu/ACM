/**
 * Project Name: C++ 
 * File Name: nyoj26.cpp
 * Created on: 2015��4��6�� ����9:13:06
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//������������
//����
//    дһ�������ҳ�����������Χ�ڵ���������������������һ����˵��������������ָ������������Ϊ2�����Ĳ����ٽ�������������
//��ЩͯЬһ������Ϳ�ʼд���򣬲���ϸ���⣬����Ϊ�˶���һ�¶��ⲻ������ϸ��ͯЬ���涨��������������Ϊ1��Ҳ��Ϊ����������
//
//����
//    ��һ�и���N(0<N<100)��ʾ��������������
//    ��������������ݸ���m����ʾ�ҳ�m֮ǰ����������������
//    (0<m<1000000)
//���
//    ÿ������������ռһ�У�����Ϊm��Χ��������������������
//��������
//    1
//    14
//�������
//    4
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//using namespace std;
//bool prime(int n) {
//	for (int i = 2; i * i <= n; i++)
//		if (n % i == 0)
//			return false;
//	return true;
//}
//int main26() {
//	int a[300000] = { 0 };
//	a[0] = 2;
//	int count = 1;
//	for (int i = 3; i <= 1000000; i++)
//		if (prime(i))
//			a[count++] = i;
//	int n, m;
//	cin >> n;
//	while (n--) {
//		cin >> m;
//		int res = 0;
//		for (int i = 0; i < count; i++) {
//			if (a[i + 1] > m)
//				break;
//			if (a[i + 1] - a[i] == 2 || a[i + 1] - a[i] == 1)
//				res++;
//		}
//		cout << res << endl;
//	}
//	return 0;
//}
