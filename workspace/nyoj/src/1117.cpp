/**
 * Project Name: nyoj
 * File Name: 1117.cpp
 * Created on: 2015年7月17日 下午7:29:26
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<queue>
//using namespace std;
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		queue<int> q;
//		while (n--) {
//			string action;
//			int number;
//			cin >> action;
//			if (action == "push") {
//				cin >> number;
//				q.push(number);
//			} else if (action == "pop") {
//				q.pop();
//			}
//		}
//		if (q.empty())
//			cout << "no eggs!" << endl;
//		else {
//			while (!q.empty()) {
//				cout << q.front() << " ";
//				q.pop();
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}
//输入
//第一行输入一个数T，表示有T组数据
//第二行输入一个数N，表示有N(N<=10)种操作
//接下来N行，每行一种操作，push表示将编号为x的鸡蛋放入队列中，pop表示拿走队列头部的一个鸡蛋。
//数据输入保证合法,队列中没有鸡蛋时不会有出队操作！
//输出
//输出N种操作完之后，队列中蛋蛋的编号，如果没蛋了，就输出"no eggs!"(不包括引号)每组输出占一行。
//样例输入
//2
//3
//push 1
//push 2
//push 3
//2
//push 1
//pop
//样例输出
//1 2 3
//no eggs!
