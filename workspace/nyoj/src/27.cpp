/**
 * Project Name: nyoj
 * File Name: 27.cpp
 * Created on: 2015��7��14�� ����8:17:59
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//������4��ͨ�ģ�������8��ͨ��ʵ�ʾ��Ǹ�dfs
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<cctype>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//const int MAX_N = 100, MAX_M = 100;
//int N, M;
//int field[MAX_N][MAX_M + 1]; // ԰��
//void dfs(int x, int y) { // ����λ��(x,y)
//	field[x][y] = 0; // ����������λ���滻Ϊ0
//	for (int dx = -1; dx <= 1; dx++) {
//		for (int dy = -1; dy <= 1; dy++) {
//			int nx = x + dx, ny = y + dy; // ��x�����ƶ�dx,��y�����ƶ�dy,�ƶ��Ľ��Ϊ(nx,ny)
//			if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 1 // �ж�(nx,ny)�ǲ�����԰����,�Լ��Ƿ��л�ˮ
//			&& dx * dy == 0) //���ﲻ�ܱ����˸������ˣ��������������ĸ�����
//				dfs(nx, ny);
//		}
//	}
//	return;
//}
//void solve() {
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> field[i][j];
//	int res = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (field[i][j] == 1) { // ����ˮ�ݵĵط���ʼdfs
//				dfs(i, j);
//				res++;
//			}
//		}
//	}
//	printf("%d\n", res);
//
//}
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		memset(field, 0, sizeof(field));
//		solve();
//	}
//	return 0;
//}
