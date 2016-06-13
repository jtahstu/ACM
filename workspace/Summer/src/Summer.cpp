//============================================================================
// Name        : Summer.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/**
 * Project Name: Summer
 * File Name: 迷宫的最短路径.cpp
 * Created on: 2015年7月14日 下午8:55:50
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<queue>
//using namespace std;
//const int INF = 100000000, MAX_N = 105, MAX_M = 105;
//typedef pair<int, int> P; // 使用pair表示状态时,使用typedef会更加方便一些
//char maze[MAX_N][MAX_M + 1]; // 表示迷宫的字符串的数组
//int N, M;
//int sx, sy; // 起点坐标
//int gx, gy; // 终点坐标
//int d[MAX_N][MAX_M]; // 到各个位置的最短距离的数组
//int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 }; // 4个方向移动的向量
//// 求从(sx, sy)到(gx, gy)的最短距离
//// 如果无法到达,则是INF
//int bfs() {
//	queue<P> que;
//// 把所有的位置都初始化为INF
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			d[i][j] = INF;
//// 将起点加入队列,并把这一地点的距离设置为0
//	que.push(P(sx, sy));
//	d[sx][sy] = 0;
//// 不断循环直到队列的长度为0
//	while (que.size()) {
//// 从队列的最前端取出元素
//		P p = que.front();
//		que.pop();
//// 如果取出的状态已经是终点,则结束搜索
//		if (p.first == gx && p.second == gy)
//			break;
//// 四个方向的循环
//		for (int i = 0; i < 4; i++) {
//// 移动之后的位置记为(nx, ny)
//			int nx = p.first + dx[i], ny = p.second + dy[i];
//// 判断是否可以移动以及是否已经访问过(d[nx][ny]!=INF即为已经访问过)
//			if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#'
//					&& d[nx][ny] == INF) {
//// 可以移动的话,则加入到队列,并且到该位置的距离确定为到p的距离+1
//				que.push(P(nx, ny));
//				d[nx][ny] = d[p.first][p.second] + 1;
//			}
//		}
//	}
//	return d[gx][gy];
//}
//void solve() {
//	cout << "请输入迷宫的大小" << endl;
//	cin >> N >> M;
//	cout << "请继续输入起始位置坐标" << endl;
//	cin >> sx >> sy;
//	cout << "请继续输入终止位置坐标" << endl;
//	cin >> gx >> gy;
//	cout << "下面请输入迷宫状态" << endl;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> maze[i][j];
//	int res = bfs();
//	cout << "迷宫的最短路径为：";
//	printf("%d\n", res);
//}
//int main() {
//	solve();
//	return 0;
//}
//迷宫的最短路径
//给定一个大小为 N×M 的迷宫。迷宫由通道和墙壁组成,每一步可以向邻接的上下左右四格
//的通道移动。请求出从起点到终点所需的最小步数。请注意,本题假定从起点一定可以移动
//到终点。
//
//限制条件
//N, M ≤ 100
//样例
//输入
//N=10, M=10(迷宫如下图所示。'#','.','S','G'分别表示墙壁、通道、起点和终点)
//#S######.#
//......#..#
//.#.##.##.#
//.#........
//##.##.####
//....#....#
//.#######.#
//....#.....
//.####.###.
//....#...G#
//35
//输出
//22
//宽度优先搜索中,只要将已经访问过的状态用标记管理起来,就可以很好地做到由近及远的搜索。
//这个问题中由于要求最短距离,不妨用 d[N][M] 数组把最短距离保存起来。初始时用充分大的常
//数 INF 来初始化它,这样尚未到达的位置就是 INF ,也就同时起到了标记的作用。 3
//虽然到达终点时就会停止搜索,可如果继续下去直到队列为空的话,就可以计算出到各个位置的
//最短距离。此外,如果搜索到最后, d 依然为 INF 的话,便可得知这个位置就是无法从起点到达的
//位置。
