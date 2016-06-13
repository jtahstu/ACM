/**
 * Project Name: nyoj_2.0 
 * File Name: 608.cpp
 * Created on: 2015年5月21日 下午7:28:07
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>这个方法一直错也不知道哪个数据出问题了，我们oj都没问题的，无语
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main() {
//	int a[1000 + 10] = { 0 }, n, m, p, q, count;
//	while (cin >> n && n) {
//		memset(a, 0, sizeof(a));
//		count = 1;
//		cin >> m;
//		if (m == 0) {
//			cout << n - 1 << endl;
//			continue;
//		}
//		cin >> p >> q;
//		a[p] = a[q] = count;
//		for (int i = 1; i < m; i++) {
//			cin >> p >> q;
//			if (a[p] != 0)
//				a[q] = a[p];
//			else if (a[q] != 0)
//				a[p] = a[q];
//			else {
//				count++;
//				a[p] = count;
//				a[q] = a[p];
//			}
//		}
//		for (int i = 1; i <= n; i++)
//			if (a[i] == 0)
//				count++;
//		cout << count - 1 << endl;
//	}
//	return 0;
//}
//#include<stdio.h>//并查集
//int father[1002];
//int find(int x) //寻找根节点
//{
//	if(father[x]!=x)
//	father[x]=find(father[x]);
//	return father[x];
//}
//void merge(int a,int b) //合并a和b所在的集合
//{
//	int p=find(a);
//	int q=find(b);
//	father[p]=q;
//}
//int main()
//{
//	int n,m,a,b,i;
//	while(~scanf("%d",&n)&&n)
//	{
//		scanf("%d",&m);
//		for(i=1;i<=n;i++)
//		father[i]=i; //初始化为每个点为一个单独集合
//		for(i=0;i<m;i++)
//		{
//			scanf("%d%d",&a,&b);
//			merge(a,b); //合并a、b
//		}
//		int count=0;
//		for(i=1;i<=n;i++)
//		if(father[i]==i) //查找有几个集合
//		count++;
//		printf("%d\n",count-1);
//	}
//	return 0;
//}
//畅通工程
//时间限制：2000 ms  |  内存限制：65535 KB
//难度：3
//
//描述
//    某省调查城镇交通状况，得到现有城镇道路统计表，表中列出了每条道路直接连通的城镇。省政府“畅通工程”的目标是使全省任何两
//	个城镇间都可以实现交通（但不一定有直接的道路相连，只要互相间接通过道路可达即可）。问最少还需要建设多少条道路？
//
//输入
//    测试输入包含若干测试用例。每个测试用例的第1行给出两个正整数，分别是城镇数目N ( < 1000 )和道路数目M；随后的M行对应M条
//	道路，每行给出一对正整数，分别是该条道路直接连通的两个城镇的编号。为简单起见，城镇从1到N编号。
//    注意:两个城市之间可以有多条道路相通,也就是说
//    3 3
//    1 2
//    1 2
//    2 1
//    这种输入也是合法的
//    当N为0时，输入结束，该用例不被处理。
//输出
//    对每个测试用例，在1行里输出最少还需要建设的道路数目。
//样例输入
//
//    4 2
//    1 3
//    4 3
//    3 3
//    1 2
//    1 3
//    2 3
//    5 2
//    1 2
//    3 5
//    999 0
//    0
//
//样例输出
//
//    1
//    0
//    2
//    998

