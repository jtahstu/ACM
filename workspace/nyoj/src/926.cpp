/**
 * Project Name: nyoj
 * File Name: 926.cpp
 * Created on: 2015年7月14日 下午11:45:07
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//这题就是假设只有两道题，一方的赢概率为a%*(1-b%),一方为1-a%,然后比较分子即可
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<cctype>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<map>
//#include<set>
//using namespace std;
//int gcd(int a, int b) {
//	return a == 0 ? b : gcd(b % a, a);
//}
//void solve() {
//	int a, b;
//	cin >> a >> b;
//	int x1 = a * (100 - b);
//	int x2 = (100 - a) * 100;
//	int gcd1 = gcd(x1, x2);
//	int x = x1 / gcd1;
//	int xx = x2 / gcd1;
//	int y = (x1 + x2) / gcd1;
//	cout << x << "/" << y << " " << xx << "/" << y << endl;
//}
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		solve();
//	}
//	return 0;
//}
