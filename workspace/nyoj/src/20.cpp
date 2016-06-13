/**
 * Project Name: nyoj
 * File Name: 20.cpp
 * Created on: 2015年6月24日 下午8:01:32
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//借用vector STL容器
//用map[i][0--最大下标]来记录与城市i 有连接路的城市
//对照题给的数据来理解map[1][0]=9，map[1][1]=8,
//含义：与城市1有连接路的第0个城市为城市9，第1个城市为城市8
//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#include<vector>
//using namespace std;
//int res[100005];       //记录终点的前一个城市
//vector<int> v[100005];  //相当于开了一个二维的数组，共有100005行，v[x].push_back(y)即在第x行尾部添加元素y
//void DFS(int cur) {
//	for (unsigned int i = 0; i < v[cur].size(); ++i) { //v[cur].size()表示第cur行所存元素的个数，即有几个城市和cur连通
//		if (res[v[cur][i]])  //如果该res已经记录了终点的前一个城市，继续循环
//			continue;
//		res[v[cur][i]] = cur;  //记录到城市v[cur][i]的前一个城市
//		DFS(v[cur][i]);      //继续<strong>搜索</strong>，直到把所有的路走完
//	}
//}
//
//int main() {
//	int ncase, num, cur, i, x, y;
//	scanf("%d", &ncase);
//	while (ncase--) {
//		memset(v, 0, sizeof(v));
//		memset(res, 0, sizeof(res));
//		scanf("%d%d", &num, &cur);
//		res[cur] = -1;
//		for (i = 0; i < num - 1; ++i) {
//			scanf("%d%d", &x, &y);
//			v[x].push_back(y);      //两个城市能连通的标记一下，从1-n城市，记住这个城市和哪个连通
//			v[y].push_back(x);		//比如：1和8之间连通，记作v[1][x]=8,v[8][x]=1
//		}
//		DFS(cur);
//		for (i = 1; i <= num; ++i)
//			printf("%d ", res[i]);
//	}
//	return 0;
//}
