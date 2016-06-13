/**
 * Project Name: P65 
 * File Name: 64.cpp
 * Created on: 2015年4月6日 下午5:22:49
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//64选美比赛
//在选美大奖赛的半决胜赛现场，有一批选手参加比赛，比赛的规则是最后得分越高，名次越低。
//当半决决赛结束时，要在现场按照选手的出场顺序宣布最后得分和最后名次，获得相同分数的选手具有相同的名次，名次连续编号，不用考虑同名次的选手人数。
//例如：
//选手序号： 1，2，3，4，5，6，7
//选手得分： 5，3，4，7，3，5，6
//则输出名次为： 3，1，2，5，1，3，4
//请编程帮助大奖赛组委会完成半决赛的评分和排名工作。
//
//*运行结果
//Player-No Score Rank
//1 5 3
//2 3 1
//3 4 2
//5 7 5
//5 3 1
//3 5 3
//7 6 4
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main() {

	int a[100] = { 0 }, b[100] = { 0 }, c[100] = { 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a + n);
	int count = 0;
	for (int i = 0; i < n - 1; i++)
		if (a[i] != a[i + 1])
			c[count++] = a[i];
	c[count] = a[n - 1];
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= count; j++)
			if (b[i] == c[j])
				cout << j+1 << " ";
	cout << endl;
	return 0;
}

