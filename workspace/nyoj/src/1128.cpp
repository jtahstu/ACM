/**
 * Project Name: nyoj
 * File Name: 1128.cpp
 * Created on: 2015��7��17�� ����7:55:45
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
//#include<queue>
//using namespace std;
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, m, x;
//		bool flag = true; //��flag���������
//		cin >> n;
//		deque<int> d;
//		while (n--) {
//			cin >> m;
//			if (m == 4)
//				flag = !flag;
//			if (d.empty() && (m == 2 || m == 3))//ע�����仰����������SystemError
//				continue;
//			if (flag) { //��Щ������������
//				if (m == 0) {
//					cin >> x;
//					d.push_front(x);
//				}
//				if (m == 1) {
//					cin >> x;
//					d.push_back(x);
//				}
//				if (m == 2)
//					d.pop_front();
//				if (m == 3)
//					d.pop_back();
//			} else { //��Щ���Ƿ������Ĳ���
//				if (m == 1) {
//					cin >> x;
//					d.push_front(x);
//				}
//				if (m == 0) {
//					cin >> x;
//					d.push_back(x);
//				}
//				if (m == 3)
//					d.pop_front();
//				if (m == 2)
//					d.pop_back();
//			}
//		}
//		if (d.empty())
//			cout << "-1" << endl;
//		else {
//			while (!d.empty()) {
//				cout << d.front() << " ";
//				d.pop_front();
//			}
//			cout << endl;
//		}
//
//	}
//	return 0;
//}
//����
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�1
//����
//��ѧ��Ű��֮��wyl ��ʶ�������ٵ���Ҫ�ԣ�yy��һ����
//
//��ʼ������Ϊ��
//
//�� n ��������
//
//0 ��    ��ͷ�������
//
//1 ��    ��β�������
//
//2 :      ��ͷ��ɾ��
//
//3 :      ��β��ɾ��
//
//4��    �ı书�ܣ�ԭ���Ǵ�ͷ���ŵĴ�β���ţ���β���ŵĴ�ͷ���ţ�ɾ��Ҳ�����
//
//ע���������Ϊ�գ������2,3����
//
//����
//Line1:T�����ݣ�T<=10��
//Line2:һ������n(n<=200)
//Line3:�����0||1 ������������һ��m(int��Χ��)����ʾҪ�ŵ�����
//���
//�����ǰ����Ϊ�գ����-1��
//���������ǰ���У��ÿո����
//��������
//2
//3
//0 1
//0 2
//1 3
//0
//�������
//2 1 3
//-1
