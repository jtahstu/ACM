/**
 * Project Name: nyoj
 * File Name: 27.cpp
 * Created on: 2015年7月14日 下午8:17:59
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//这题是4连通的，书上是8连通，实际就是个dfs
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
//int field[MAX_N][MAX_M + 1]; // 园子
//void dfs(int x, int y) { // 现在位置(x,y)
//	field[x][y] = 0; // 将现在所在位置替换为0
//	for (int dx = -1; dx <= 1; dx++) {
//		for (int dy = -1; dy <= 1; dy++) {
//			int nx = x + dx, ny = y + dy; // 向x方向移动dx,向y方向移动dy,移动的结果为(nx,ny)
//			if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 1 // 判断(nx,ny)是不是在园子内,以及是否有积水
//			&& dx * dy == 0) //这里不能遍历八个方向了，而是上下左右四个方向
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
//			if (field[i][j] == 1) { // 从有水洼的地方开始dfs
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
