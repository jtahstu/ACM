/**
 * Project Name: nyoj_2.0
 * File Name: 1058.cpp
 * Created on: 2015年5月18日 下午8:12:24
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include <cstdio>
//#include <cstring>
//using namespace std;
//int a[30], n, k, sum;
//bool visit[30], flag;
//void dfs(int pos) {
//	if (flag == true)
//		return;
//	if (sum >= k) {
//		if (sum == k) {
//			flag = true;
//			printf("YES\n");
//			for (int i = 0; i < n; i++)
//				if (visit[i]) //标记
//					printf("%d ", a[i]);
//		}
//		return; //这里就是递归结束的条件，在这里加一个结束条件，时间花销就减少了不少
//	}
//	for (int i = pos; i < n; i++) //搜索的过程
//			{
//		sum += a[i];
//		visit[i] = 1;
//		dfs(i + 1);
//		sum -= a[i];
//		visit[i] = 0;
//	}
//}
//int main() {
//	int i;
//	while (scanf("%d%d", &n, &k) != EOF) {
//		for (i = 0; i < n; i++)
//			scanf("%d", &a[i]);
//		memset(visit, 0, sizeof(visit));
//		flag = false;
//		dfs(0);
//		if (!flag)
//			printf("NO\n");
//	}
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int jt[25],n,k;
//bool dfs(int i,int sum){
//	if(i==n)return sum==k;
//	if(dfs(i+1,sum))return true;
//	if(dfs(i+1,sum+jt[i]))return true;
//	return false;
//}
//int main()
//{
//	cin>>n>>k;
//	for(int i=0;i<n;i++)
//		cin>>jt[i];
//	 if(dfs(0,0))cout<<"YES"<<endl;
//	 else cout<<"NO"<<endl;
//	return 0;
//}
//部分和问题
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：2
//描述
//给定整数a1、a2、.......an，判断是否可以从中选出若干数，使它们的和恰好为K。
//输入
//首先，n和k，n表示数的个数，k表示数的和。
//接着一行n个数。
//（1<=n<=20,保证不超int范围）
//输出
//如果和恰好可以为k，输出“YES”，并按输入顺序依次输出是由哪几个数的和组成，否则“NO”
//样例输入
//4 13
//1 2 4 7
//样例输出
//YES
//2 4 7
