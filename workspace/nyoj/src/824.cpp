/**
 * Project Name: nyoj_2.0 
 * File Name: 824.cpp
 * Created on: 2015��6��9�� ����1:01:55
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include <algorithm>
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//typedef struct Food {
//	double C;
//	double M;
//} Food;
//
//bool operator <(const Food& lhs, const Food& rhs) {
//	return lhs.M * rhs.C < lhs.C * rhs.M;
//}
//
//Food fd[1000];
//double M;
//int N;
//
//int main() {
//	while (cin >> M >> N) {
//		if (M + N == -2) {
//			break;
//		}
//		for (int i = 0; i < N; ++i) {
//			cin >> fd[i].M >> fd[i].C;
//		}
//		sort(fd, fd + N);
//		reverse(fd, fd + N);
//		double Get = 0;
//		for (int i = 0; i < N; ++i) {
//			if (M >= fd[i].C) {
//				Get += fd[i].M;
//				M -= fd[i].C;
//			} else {
//				Get += fd[i].M / fd[i].C * M;
//				break;
//			}
//		}
//		printf("%.3f\n", Get);
//	}
//}
//�������⣬Ӧ���ǿɷֽ����ȫ������Ӧ�ò���
