/**
 * Project Name: Summer
 * File Name: 园子有多少水洼.cpp
 * Created on: 2015年7月14日 下午6:13:25
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
//char field[MAX_N][MAX_M + 1]; // 园子
//void dfs(int x, int y) { // 现在位置(x,y)
//	field[x][y] = '.'; // 将现在所在位置替换为.
//	for (int dx = -1; dx <= 1; dx++) { // 循环遍历移动的8个方向
//		for (int dy = -1; dy <= 1; dy++) {
//			int nx = x + dx, ny = y + dy; // 向x方向移动dx,向y方向移动dy,移动的结果为(nx,ny)
//			if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W')
//				dfs(nx, ny); // 判断(nx,ny)是不是在园子内,以及是否有积水
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
//				if (field[i][j] == 'W') { // 从有W的地方开始dfs
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
//有一个大小为 N×M 的园子,雨后积起了水。八连通的积水被认为是连接在一起的。请求出
//园子里总共有多少水洼?(八连通指的是下图中相对 W 的*的部分)
//***
//*W*
//***
//
//限制条件
//N, M ≤ 100
//样例
//输入
//N=10, M=12
//园子如下图('W'表示积水,'.'表示没有积水)
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
//输出
//3
//
//从任意的 W 开始,不停地把邻接的部分用 '.' 代替。1次DFS后与初始的这个 W 连接的所有 W 就都被替
//换成了 '.' ,因此直到图中不再存在 W 为止,总共进行DFS的次数就是答案了。8个方向共对应了8种
//状态转移,每个格子作为DFS的参数至多被调用一次,所以复杂度为O(8×N×M)=O(N×M)。
