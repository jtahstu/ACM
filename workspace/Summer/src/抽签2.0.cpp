/**
 * Project Name: Summer
 * File Name: ��ǩ2.0.cpp
 * Created on: 2015��7��23�� ����1:32:21
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
//const int MAX_N = 1005;
//int n, m, k[MAX_N];
//// ����2�����ĺ͵�����
//int kk[MAX_N * MAX_N];
//bool binary_search(int x) {
//// x�Ĵ��ڷ�Χ��kk[l], kk[l+1], ��, kk[r-1].
//	int l = 0, r = n * n;
//	while (r - l >= 1) { // ��������ֱ�����ڷ�ΧΪ��
//		int i = (l + r) / 2;
//		if (kk[i] == x)
//			return true; // �ҵ�x
//		else if (kk[i] < x)
//			l = i + 1;
//		else
//			r = i;
//	}
//	return false; // û�ҵ�x
//}
//void solve() {
//	while (cin >> n >> m) {
//		for (int i = 0; i < n; i++)
//			cin >> k[i];
//		for (int c = 0; c < n; c++) { // ö��k[c]+k[d]�ĺ�
//			for (int d = 0; d < n; d++) {
//				kk[c * n + d] = k[c] + k[d];
//			}
//		}
//		sort(kk, kk + n * n); // �����Ա���ж�������
//		bool f = false;
//		for (int a = 0; a < n; a++) {
//			for (int b = 0; b < n; b++) {
//				// ���ڲ������ѭ���滻�ɶ�������
//				if (binary_search(m - k[a] - k[b])) {
//					f = true;
//				}
//			}
//		}
//		if (f)
//			puts("Yes");
//		else
//			puts("No");
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
//// ����
//int n, m, k[MAX_N];
//// ����2�����ĺ͵�����
//int kk[MAX_N * MAX_N];
//bool binary_search(int x) {
//// x�Ĵ��ڷ�Χ��kk[l], kk[l+1], ��, kk[r-1].
//	int l = 0, r = n * n;
//// ��������ֱ�����ڷ�ΧΪ��
//	while (r - l >= 1) {
//		int i = (l + r) / 2;
//		if (kk[i] == x)
//			return true; // �ҵ�x
//		else if (kk[i] < x)
//			l = i + 1;
//		else
//			r = i;
//	}
//// û�ҵ�x
//	return false;
//}
//void solve() {
//// ö��k[c]+k[d]�ĺ�
//	for (int c = 0; c < n; c++) {
//		for (int d = 0; d < n; d++) {
//			kk[c * n + d] = k[c] + k[d];
//		}
//	}
//// �����Ա���ж�������
//	sort(kk, kk + n * n);
//	bool f = false;
//	for (int a = 0; a < n; a++) {
//		for (int b = 0; b < n; b++) {
//// ���ڲ������ѭ���滻�ɶ�������
//			if (binary_search(m - k[a] - k[b])) {
//				f = true;
//			}
//		}
//	}
//	if (f)
//		puts("Yes");
//	else
//		puts("No");
//}
