/**
 * Project Name: nyoj
 * File Name: 1117.cpp
 * Created on: 2015��7��17�� ����7:29:26
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
//		int n;
//		cin >> n;
//		queue<int> q;
//		while (n--) {
//			string action;
//			int number;
//			cin >> action;
//			if (action == "push") {
//				cin >> number;
//				q.push(number);
//			} else if (action == "pop") {
//				q.pop();
//			}
//		}
//		if (q.empty())
//			cout << "no eggs!" << endl;
//		else {
//			while (!q.empty()) {
//				cout << q.front() << " ";
//				q.pop();
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}
//����
//��һ������һ����T����ʾ��T������
//�ڶ�������һ����N����ʾ��N(N<=10)�ֲ���
//������N�У�ÿ��һ�ֲ�����push��ʾ�����Ϊx�ļ�����������У�pop��ʾ���߶���ͷ����һ��������
//�������뱣֤�Ϸ�,������û�м���ʱ�����г��Ӳ�����
//���
//���N�ֲ�����֮�󣬶����е����ı�ţ����û���ˣ������"no eggs!"(����������)ÿ�����ռһ�С�
//��������
//2
//3
//push 1
//push 2
//push 3
//2
//push 1
//pop
//�������
//1 2 3
//no eggs!
