/**
 * Project Name: nyoj
 * File Name: 58.cpp
 * Created on: 2015年7月24日 下午8:50:16
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
//typedef pair<int, int> P; // 使用pair表示状态时,使用typedef会更加方便一些
//int maze[9][9] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0,
//		0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0,
//		1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0,
//		0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }; // 表示迷宫的字符串的数组
//int N = 8, M = 8;
//int sx, sy; // 起点坐标
//int gx, gy; // 终点坐标
//int d[MAX_N][MAX_M]; // 到各个位置的最短距离的数组
//int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 }; // 4个方向移动的向量
//// 求从(sx, sy)到(gx, gy)的最短距离
//// 如果无法到达,则是INF
//int bfs() {
//	queue<P> que;
//	for (int i = 0; i < N; i++) // 把所有的位置都初始化为INF
//		for (int j = 0; j < M; j++)
//			d[i][j] = INF;
//	que.push(P(sx, sy)); // 将起点加入队列,并把这一地点的距离设置为0
//	d[sx][sy] = 0;
//	while (que.size()) { // 不断循环直到队列的长度为0
//		P p = que.front(); // 从队列的最前端取出元素
//		que.pop();
//		if (p.first == gx && p.second == gy) // 如果取出的状态已经是终点,则结束搜索
//			break;
//		for (int i = 0; i < 4; i++) { // 四个方向的循环
//			int nx = p.first + dx[i], ny = p.second + dy[i]; // 移动之后的位置记为(nx, ny)
//// 判断是否可以移动以及是否已经访问过(d[nx][ny]!=INF即为已经访问过)
//			if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != 1
//					&& d[nx][ny] == INF) {
//				que.push(P(nx, ny)); // 可以移动的话,则加入到队列,并且到该位置的距离确定为到p的距离+1
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
