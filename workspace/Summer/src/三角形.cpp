/**
 * Project Name: Summer
 * File Name: ������.cpp
 * Created on: 2015��7��22�� ����1:12:19
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//using namespace std;
//const int MAX_N = 105;
//int n, a[MAX_N];
//void solve() {
//	while (cin >> n) {
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		int ans = 0; // ��
//		for (int i = 0; i < n; i++) { // ��i < j < k���������ӾͲ��ᱻ�ظ�ѡ����
//			for (int j = i + 1; j < n; j++) {
//				for (int k = j + 1; k < n; k++) {
//					int len = a[i] + a[j] + a[k]; // �ܳ�
//					int ma = max(a[i], max(a[j], a[k])); // ����ӵĳ���
//					int rest = len - ma; // �����������ӵĳ���֮��
//					if (ma < rest) { // ������������Σ�������Ը��´������
//						ans = max(ans, len);
//					}
//				}
//			}
//		}
//		printf("%d\n", ans); // ���
//	}
//}
//int main() {
//	freopen("A.in", "r", stdin);
//	freopen("A.out", "w", stdout);
//	solve();
//	return 0;
//}
