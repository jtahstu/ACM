/**
 * Project Name: Summer
 * File Name: ԰���ж���ˮ��.cpp
 * Created on: 2015��7��14�� ����6:13:25
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//using namespace std;
//const int MAX_N = 100, MAX_M = 100;
//int N, M;
//char field[MAX_N][MAX_M + 1]; // ԰��
//void dfs(int x, int y) { // ����λ��(x,y)
//	field[x][y] = '.'; // ����������λ���滻Ϊ.
//	for (int dx = -1; dx <= 1; dx++) { // ѭ�������ƶ���8������
//		for (int dy = -1; dy <= 1; dy++) {
//			int nx = x + dx, ny = y + dy; // ��x�����ƶ�dx,��y�����ƶ�dy,�ƶ��Ľ��Ϊ(nx,ny)
//			if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W')
//				dfs(nx, ny); // �ж�(nx,ny)�ǲ�����԰����,�Լ��Ƿ��л�ˮ
//		}
//	}
//	return;
//}
//void solve() {
//	while (cin >> N >> M) {
//		memset(field, 0, sizeof(field));
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < M; j++)
//				cin >> field[i][j];
//		int res = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (field[i][j] == 'W') { // ����W�ĵط���ʼdfs
//					dfs(i, j);
//					res++;
//				}
//			}
//		}
//		printf("%d\n", res);
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
//Lake Counting (POJ No.2386)
//��һ����СΪ N��M ��԰��,��������ˮ������ͨ�Ļ�ˮ����Ϊ��������һ��ġ������
//԰�����ܹ��ж���ˮ��?(����ָͨ������ͼ����� W ��*�Ĳ���)
//***
//*W*
//***
//
//��������
//N, M �� 100
//����
//����
//N=10, M=12
//԰������ͼ('W'��ʾ��ˮ,'.'��ʾû�л�ˮ)
//W........WW.
//.WWW.....WWW
//....WW...WW.
//.........WW.
//.........W..
//..W......W..
//.W.W.....WW.
//W.W.W.....W.
//.W.W......W.
//..W.......W.
//���
//3
//
//������� W ��ʼ,��ͣ�ذ��ڽӵĲ����� '.' ���档1��DFS�����ʼ����� W ���ӵ����� W �Ͷ�����
//������ '.' ,���ֱ��ͼ�в��ٴ��� W Ϊֹ,�ܹ�����DFS�Ĵ������Ǵ��ˡ�8�����򹲶�Ӧ��8��
//״̬ת��,ÿ��������ΪDFS�Ĳ������౻����һ��,���Ը��Ӷ�ΪO(8��N��M)=O(N��M)��
