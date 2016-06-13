/**
 * Project Name: nyoj
 * File Name: 1127.cpp
 * Created on: 2015年7月17日 下午8:29:02 last modify by 2015/7/20 3:12
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
//using namespace std;
//int a[315];
//int main() {
//	int t, count = 0;
//	cin >> t;
//	while (t--) {
//		memset(a, 0, sizeof(a));
//		int n;
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//			cin >> a[i];
//		n++; //这里需要+1，因为多一个队伍
//		sort(a + 1, a + n);
//		int x = (int) ceil(0.1 * n);
//		int y = (int) ceil(0.2 * n);
//		int z = (int) ceil(0.3 * n);
//		cout << "Case #" << ++count << ": " << a[x] - 1 << " " << a[x + y] - 1
//				<< " " << a[x + y + z] - 1 << endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <cstdio>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//int main2() {
//	int penalty[320];
//	int n, icase = 1, t;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d", &n);
//		for (int i = 1; i <= n; ++i) {
//			scanf("%d", &penalty[i]);
//		}
//		n++;
//		sort(penalty + 1, penalty + n);
//		int p1 = (int) ceil(n * 0.1), p2 = p1 + (int) ceil(n * 0.2), p3 = p2
//				+ (int) ceil(n * 0.3);
//		printf("Case #%d: %d %d %d\n", icase++, penalty[p1] - 1,
//				penalty[p2] - 1, penalty[p3] - 1);
//	}
//	return 0;
//}
//Penalty
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：2
//描述
//    As is known to us, the penalty is vitally important to competitors in the programming contest! After participating in the 2014 ACM-ICPC Asia Xian Regional Contest, LYH have a deep understanding about the importance of penalty. If some teams have solved same problem, the less penalty, the top rank.
//    According to the rules of the competition, among all the teams, 10% will win a gold medal, 20% will win a silver medal, 30% will win a bronze medal. If it is not an integer, we will take the integer which not less than the real number as the number of the corresponding medal. For example, if the number of gold medal is 2.3, then we consider the number of gold medal is 3.
//    For the sake of simpleness, suppose that the number of problems each team have solved is equal in the end of the programming contest, and we have known the penalty of each team. As a competitor , LYH want to know what is the maximum penalty will be if he wants to win a gold medal、a silver medal、a bronze medal.
//输入
//The first line of the input gives the number of test cases, T. T test cases follow.
//For each test case, the first line contains an integer n(5≤n≤310), the number of the team except LYH'team, the second line contains n distinct integers a(500≤a≤5500), the ith integer represents the penalty of the ith team except his team.
//输出
//For each test case, output one line “Case #x: G S B”, where x is the case number(starting from 1), G is the maximum penalty if he wants to win a gold medal, S is the maximum penalty if he wants to win a silver medal, B is the maximum penalty if he wants to win a bronze medal.
//样例输入
//2
//9
//500 550 600 650 700 750 800 850 900
//10
//500 511 522 533 544 555 566 577 588 599
//样例输出
//Case #1: 499 599 749
//Case #2: 510 543 587
