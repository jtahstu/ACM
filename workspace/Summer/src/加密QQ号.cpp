/**
 * Project Name: Summer
 * File Name: 加密QQ号.cpp
 * Created on: 2015年9月8日 上午11:02:28
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
void QQ6(string s) { //503142
	cout << s[5] << s[0] << s[3] << s[1] << s[4] << s[2] << endl;

}
void QQ7(string s) { //6031524
	cout << s[6] << s[0] << s[3] << s[1] << s[5] << s[2] << s[4] << endl;

}
void QQ8(string s) { //70416253
	cout << s[7] << s[0] << s[4] << s[1] << s[6] << s[2] << s[5] << s[3]
			<< endl;
}
void QQ9(string s) { //804162537
	cout << s[8] << s[0] << s[4] << s[1] << s[6] << s[2] << s[5] << s[3]
			<< s[7];

}
void QQ10(string s) { //9051726384
	cout << s[9] << s[0] << s[5] << s[1] << s[7] << s[2] << s[6] << s[3] << s[8]
			<< s[4] << endl;
}
int main() {
	freopen("A.in", "r", stdin);
	freopen("A.out", "w", stdout);
	string s;
	while (cin >> s) {
		switch (s.length()) {
		case 6:
			QQ6(s);
			break;
		case 7:
			QQ7(s);
			break;
		case 8:
			QQ8(s);
			break;
		case 9:
			QQ9(s);
			break;
		case 10:
			QQ10(s);
			break;
		}
	}
	return 0;
}
