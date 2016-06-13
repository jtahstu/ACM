/**
 * Project Name: nyoj
 * File Name: 58.cpp
 * Created on: 2015��7��24�� ����8:50:16
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int INF = 100000000, MAX_N = 100, MAX_M = 100;
//typedef pair<int, int> P; // ʹ��pair��ʾ״̬ʱ,ʹ��typedef����ӷ���һЩ
//int maze[9][9] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0,
//		0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0,
//		1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0,
//		0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }; // ��ʾ�Թ����ַ���������
//int N = 8, M = 8;
//int sx, sy; // �������
//int gx, gy; // �յ�����
//int d[MAX_N][MAX_M]; // ������λ�õ���̾��������
//int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 }; // 4�������ƶ�������
//// ���(sx, sy)��(gx, gy)����̾���
//// ����޷�����,����INF
//int bfs() {
//	queue<P> que;
//	for (int i = 0; i < N; i++) // �����е�λ�ö���ʼ��ΪINF
//		for (int j = 0; j < M; j++)
//			d[i][j] = INF;
//	que.push(P(sx, sy)); // �����������,������һ�ص�ľ�������Ϊ0
//	d[sx][sy] = 0;
//	while (que.size()) { // ����ѭ��ֱ�����еĳ���Ϊ0
//		P p = que.front(); // �Ӷ��е���ǰ��ȡ��Ԫ��
//		que.pop();
//		if (p.first == gx && p.second == gy) // ���ȡ����״̬�Ѿ����յ�,���������
//			break;
//		for (int i = 0; i < 4; i++) { // �ĸ������ѭ��
//			int nx = p.first + dx[i], ny = p.second + dy[i]; // �ƶ�֮���λ�ü�Ϊ(nx, ny)
//// �ж��Ƿ�����ƶ��Լ��Ƿ��Ѿ����ʹ�(d[nx][ny]!=INF��Ϊ�Ѿ����ʹ�)
//			if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != 1
//					&& d[nx][ny] == INF) {
//				que.push(P(nx, ny)); // �����ƶ��Ļ�,����뵽����,���ҵ���λ�õľ���ȷ��Ϊ��p�ľ���+1
//				d[nx][ny] = d[p.first][p.second] + 1;
//			}
//		}
//	}
//	return d[gx][gy];
//}
//void solve() {
//	int n;
//	cin >> n;
//	while (n--) {
//		cin >> sx >> sy >> gx >> gy;
//		memset(d, 0, sizeof(d));
//		int res = bfs();
//		printf("%d\n", res);
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
