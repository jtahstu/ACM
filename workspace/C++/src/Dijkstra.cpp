///**
// * Project Name: C++
// * File Name: Dijkstra.cpp
// * Created on: 2016年3月30日 下午8:36:13
// * Author: jtahstu
// * Email: root@jtahstu.com
// * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
// */
//#include <iostream>
//using namespace std;
//
//const int N = 110;
//const int INF = 999999999;
//int w[N][N]; //邻接矩阵
//bool done[N]; //若d[i]不再更新，则done[i]=true, 也即结点纳入了解集
//int d[N]; //d[i]记录从起点到结点i的最短路径长度
//int par[N]; //par[i]保存记录i的父亲结点
//
////创建图
//void createGraph(int n) {
//	int i, j;
//
//	for (i = 0; i != n; i++)
//		for (j = 0; j != n; j++)
//			scanf("%d", &w[i][j]);
//}
//
////star:单源起点
////n:结点数目
//void dijkstra(int star, int n) {
//	int i, j, min, x, y;
//
//	//初始化d[], v[]
//	memset(done, false, sizeof(done));
//	for (i = 0; i != n; i++)
//		d[i] = INF;
//
//	//设置起点
//	d[star] = 0;
//	//规定起点的父母也是自己
//	par[star] = star;
//
//	//循环n次
//	for (j = 0; j != n; j++) {
//		//选择d值最小的点作为起点x（d[x]已经确定了）
//		min = INF;
//		for (i = 0; i != n; i++) {
//			if (done[i] == false && d[i] < min) {
//				min = d[i];
//				x = i;
//			}
//		}
//		//x的d[i]已经确定了
//		done[x] = 1;
//		//对所有x的边(x, y)
//		for (y = 0; y != n; y++) {
//			if (w[x][y] != 0 && d[y] > d[x] + w[x][y]) {
//				d[y] = d[x] + w[x][y];
//				par[y] = x;
//			}
//		}
//	} //循环n次
//}
//
////star:单源起点
////i:当前结点
//void printPath(int star, int i) {
//	//到祖先了
//	if (star == i) {
//		cout << i << " ";
//		return;
//	}
//	printPath(star, par[i]);
//	cout << i << " ";
//}
//
//int main() {
//	int n, star, end;
//	cout << "输入结点个数n:" << endl;
//	cin >> n;
//	cout << "请输入起点[0, n-1]:" << endl;
//	cin >> star;
//	cout << "请输入该图的邻接矩阵:" << endl;
//	createGraph(n);
//	dijkstra(star, n);
//
//	cout << "依次打印n个结点其父母结点:" << endl;
//	for (int i = 0; i != n; i++) {
//		cout << par[i] << " ";
//	}
//	cout << endl;
//	cout << "依次打印从起点" << star << "到n个结点的最短距离:" << endl;
//	for (int i = 0; i != n; i++) {
//		cout << d[i] << " ";
//	}
//	cout << endl;
//	cout << "请输出结点编号[0, n-1]，以打印其最短路径经过的结点:" << endl;
//	cin >> end; //0 ~ n-1
//	printPath(star, end);
//	cout << endl;
//	return 0;
//}
