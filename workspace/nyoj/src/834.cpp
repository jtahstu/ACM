/**
 * Project Name: nyoj
 * File Name: 834.cpp
 * Created on: 2015��7��20�� ����9:47:42
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
//struct acmer {
//	int b; //���
//	int d; //���
//} a[55];
//bool inc(acmer a, acmer b) {
//	if (a.d == b.d)
//		return a.b < b.b; //�ñ��С����ǰ�棬��Ϊ����������ܺ���ȣ����Ҫ��С
//	return a.d > b.d;
//}
//int main() {
//	int n;
//	while (cin >> n) {
//		for (int i = 1; i <= n; i++) {
//			a[i].b = i;
//			cin >> a[i].d;
//		}
//		sort(a + 1, a + n + 1, inc);
//		int sum = a[1].d + a[2].d + a[3].d;
//		int b[4];
//		b[0] = a[1].b, b[1] = a[2].b, b[2] = a[3].b;
//		sort(b, b + 3);
//		cout << b[0] << " " << b[1] << " " << b[2] << " " << sum << endl;
//	}
//	return 0;
//}
//��������
//
//    4
//    1 2 3 4
//    6
//    1 1 4 8 2 1
//
//�������
//
//    2 3 4 9
//    3 4 5 14
//
