/**
 * Project Name: nyoj
 * File Name: 1103.cpp
 * Created on: 2015��7��17�� ����2:59:24
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
//int a[20];
//void solve() {
//	a[2] = 1, a[3] = 1, a[4] = 2, a[5] = 5;
//	for (int i = 5; i <= 18; i++)
//		a[i + 1] = a[i] * (4 * i - 6) / i;
//}
//int main() {
//	int t, count = 0, n;
//	solve();
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		cout << "Case #" << ++count << " : " << a[n] << endl;
//	}
//	return 0;
//}
//������ϵ��һ����λ���
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�2
//����
//Give you a convex��͹���Σ�, diagonal n-3 disjoint divided into n-2 triangles(ֱ��), for different number of methods,
//such as n=5, there are 5 kinds of partition method, as shown in Figure
//����
//The first line of the input is a n (1<=n<=1000), expressed n data set.
//The next n lines each behavior an integer m (3<=m<=18), namely the convex edges.
//���
//For each give m,, output how many classification methods.
//example output: Case #a : b
//��������
//3
//3
//4
//5
//�������
//Case #1 : 1
//Case #2 : 2
//Case #3 : 5
//��ʾ
//Catalan number
