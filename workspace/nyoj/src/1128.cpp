/**
 * Project Name: nyoj
 * File Name: 1128.cpp
 * Created on: 2015年7月17日 下午7:55:45
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
//		int n, m, x;
//		bool flag = true; //用flag来标记正反
//		cin >> n;
//		deque<int> d;
//		while (n--) {
//			cin >> m;
//			if (m == 4)
//				flag = !flag;
//			if (d.empty() && (m == 2 || m == 3))//注意加这句话，给了两次SystemError
//				continue;
//			if (flag) { //这些都是正常操作
//				if (m == 0) {
//					cin >> x;
//					d.push_front(x);
//				}
//				if (m == 1) {
//					cin >> x;
//					d.push_back(x);
//				}
//				if (m == 2)
//					d.pop_front();
//				if (m == 3)
//					d.pop_back();
//			} else { //这些就是反过来的操作
//				if (m == 1) {
//					cin >> x;
//					d.push_front(x);
//				}
//				if (m == 0) {
//					cin >> x;
//					d.push_back(x);
//				}
//				if (m == 3)
//					d.pop_front();
//				if (m == 2)
//					d.pop_back();
//			}
//		}
//		if (d.empty())
//			cout << "-1" << endl;
//		else {
//			while (!d.empty()) {
//				cout << d.front() << " ";
//				d.pop_front();
//			}
//			cout << endl;
//		}
//
//	}
//	return 0;
//}
//手速
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：1
//描述
//被学长虐了之后，wyl 认识到了手速的重要性，yy了一道。
//
//初始化序列为空
//
//给 n 个操作：
//
//0 ：    从头部往里放
//
//1 ：    从尾部往里放
//
//2 :      从头部删除
//
//3 :      从尾部删除
//
//4：    改变功能，原来是从头部放的从尾部放，从尾部放的从头部放，删除也是如此
//
//注：如果序列为空，请忽略2,3功能
//
//输入
//Line1:T组数据（T<=10）
//Line2:一个整数n(n<=200)
//Line3:如果是0||1 操作，则后面跟一个m(int范围内)，表示要放的数。
//输出
//如果当前序列为空，输出-1；
//否则输出当前序列，用空格隔开
//样例输入
//2
//3
//0 1
//0 2
//1 3
//0
//样例输出
//2 1 3
//-1
