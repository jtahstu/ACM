/**
 * Project Name: P65 
 * File Name: 49.cpp
 * Created on: 2015年4月5日 下午5:02:01
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//49约瑟夫问题
//这是17世纪的法国数学家加斯帕在《数目的游戏问题》中讲的一个故事：
//15个教徒和15 个非教徒在深海上遇险，必须将一半的人投入海中，其余的人才能幸免于难，
//于是想了一个办法：30个人围成一圆圈，从第一个人开始依次报数，每数到第九个人就将他扔入大海，如此循环进行直到仅余15个人为止。
//问怎样排法，才能使每次投入大海的都是非教徒。
//
//*运行结果
//The original circle is(+:pagandom, @:christian):
//+++@@ +@+@@ @+@++ +@@+@ @@+++ @+@@+  4 5 7 9 10 11 13 17 18 20 21 22 26 28 29
//(+"表示被扔下海海的非教徒 @：留在船上活命的教徒)
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main49() {				//计算出来的数据和问题不符，但百度结果同我的计算结果，题目给的数据我认为有问题
	vector<int> a;
	for (int i = 1; i <= 30; i++)
		a.push_back(i);
	vector<int>::iterator it;
	vector<int>::iterator jt = a.begin();
	int count = 0;
	cout << "异教徒被扔下海的分别为：";
	while (a.size() != 15) {
		for (it = jt;; it++) {
			if (it == a.end()) {
				jt = a.begin();
				break;
			}
			count++;
			if (count % 9 == 0) {
				cout << *it << " ";
				a.erase(it);
				jt = it;
				break;
			}
		}
	}
	cout << endl << "教徒位置分别为：";
	for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
		cout << *it << " ";
	return 0;
}

