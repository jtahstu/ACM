/**
 * Project Name: nyoj 
 * File Name: 1088.cpp
 * Created on: 2015年4月22日 下午9:21:33
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//2
//3
//2 5
//3 7
//4 7
//5
//1 3
//2 7
//4 1
//3 9
//4 3
//样例输出
//2 5
//3 7
//
//4 1
//4 3
//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//struct node {
//	int x, y;
//} p[210];
//int cmp(node a, node b) {
//	if (a.x == b.x)
//		return a.y < b.y;
//	return a.x < b.x;
//}
//double kk(node a, node b) {
//	return (a.y * 1.0 - b.y) / (a.x * 1.0 - b.x);
//}
//int main1088() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++) {
//			scanf("%d%d", &p[i].x, &p[i].y);
//			//cin>>p[i].x>>p[i].y;
//		}
//		sort(p, p + n, cmp);
//		if (p[0].x == p[1].x) {//横坐标相同，为一条竖线，最大
//			if (p[0].y < p[1].y)
//				printf("%d %d\n%d %d\n", p[0].x, p[0].y, p[1].x, p[1].y);
//			//cout<<p[0].x<<" "<<p[0].y<<" "<<p[1].x<<" "<<p[1].y<<endl;
//			else
//				printf("%d %d\n%d %d\n", p[1].x, p[1].y, p[0].x, p[0].y);
//			//cout<<p[1].x<<" "<<p[1].y<<" "<<p[0].x<<" "<<p[0].y<<endl;
//			puts("");
//			continue;
//		}
//		double max = kk(p[0], p[1]);
//		double max1;
//		int flag = 0, flag1 = 0;
//
//		for (int i = 1; i < n - 1; i++) {
//			if (p[i].x == p[i + 1].x) {
//				if (p[i].y < p[i + 1].y) {
//					printf("%d %d\n%d %d\n", p[i].x, p[i].y, p[i + 1].x,
//							p[i + 1].y);
//					//cout<<p[i].x<<" "<<p[i].y<<endl<<p[i+1].x<<" "<<p[i+1].y<<endl;
//				} else {
//					printf("%d %d\n%d %d\n", p[i + 1].x, p[i + 1].y, p[i].x,
//							p[i].y);
//					//cout<<p[i+1].x<<" "<<p[i+1].y<<endl<<p[i].x<<" "<<p[i].y<<endl;
//				}
//				puts("");
//				flag1 = 1;
//				break;
//			}
//			max1 = kk(p[i], p[i + 1]);
//			if (max1 > max) {
//				max = max1;
//				flag = i;
//			}
//		}
//		if (flag1 == 0) {
//			printf("%d %d\n%d %d\n", p[flag].x, p[flag].y, p[flag + 1].x,
//					p[flag + 1].y);
//			puts("");
//		}
//	}
//}

