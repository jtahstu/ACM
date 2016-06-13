/**
 * Project Name: nyoj_2.0 
 * File Name: 628.cpp
 * Created on: 2015年5月19日 下午9:41:50
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//运行号		用户 	题目 		结果 		时间 	内存 	语言 	提交时间
//1278400 	jtahstu	小媛在努力	Accepted 	244 	40076 	C/C++	05-19 21:53:02
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int a[10000005];
//struct jt {
//	int geshu; //个数
//	int shuzi; //数字
//} b[100000];
//int main() {
//	int n, m;
//	cin >> n;
//	while (n--) {
//		memset(a,0,sizeof(a));
//		memset(b,0,sizeof(b));
//		int count = 0;
//		cin >> m >> a[0];
//		b[0].shuzi = a[0];
//		b[0].geshu++;
//		for (int i = 1; i < m; i++) {
//			cin >> a[i];
//			if (a[i] == a[i - 1])
//				b[count].geshu++;
//			else {
//				count++;
//				b[count].shuzi = a[i];
//				b[count].geshu++;
//			}
//		}
//		for (int i = 0; i <= count; i++)
//			cout << b[i].geshu << " " << b[i].shuzi << " ";
//		cout << endl;
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//
//	int N;
//	int a, n, i, count, b;
//	scanf("%d", &N);
//	while (N--) {
//		scanf("%d", &n);
//		scanf("%d", &a);
//		count = 1;
//		for (i = 1; i < n; i++) {
//			scanf("%d", &b);
//			if (b == a)
//				count++;
//			else {
//				printf("%d %d ", count, a);//输出，重置
//				a = b;
//				count = 1;
//			}
//		}
//		printf("%d %d\n", count, a);
//	}
//	return 0;
//}

//小媛在努力
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：2
//
//描述
//    在多媒体数据处理中，数据压缩算法尤为重要。小媛上完课后就想自己发明一个数据压缩算法。她想呀想，终于想到一个方法。
//	在多媒体数据中有很多数据都是重复的，所以她想把连续相同的数据用数据出现的次数和数据本身表示。例如：1 1 1 2 3 3 3 3 3
//	压缩后及为3 1 1 2 5 3（表示3个1，1个2和5个3）。有想法后小媛就希望把它用代码实现了。但是大家都知道小媛现在整天都忙着苦B
//	的复习考研，连电脑都摸不到。所以她希望作为ACMer的你帮她写一下。
//
//输入
//    输入包含多组数据，第一行一个数字T代表输入样例数。
//
//    每组样例开始一个数M < 10^7表示这组数据中数字的个数，接下来M个数表示要被压缩的数字（数字都不超过int表示的范围）。
//输出
//    每组测试数据输出一行数字对，如上面描述的一样。两个数字之间用一个空格隔开。
//样例输入
//
//    1
//    9 1 1 1 2 3 3 3 3 3
//
//样例输出
//
//    3 1 1 2 5 3
//
//来源
//    郑大第六届校赛
//上传者
//    ACM_赵铭浩
