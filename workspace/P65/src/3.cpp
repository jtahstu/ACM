/*
 * 3.cpp
 * Created on: 2015年4月1日
 * Author: jtahstu
 */
// 3杨辉三角形
// 在屏幕上显示杨辉三角形
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// ..................

#include<iostream>
#include<cstdio>
using namespace std;
int main3() {
	int a[200][200],n;
	memset(a, 0, sizeof(a));
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a[i][i] = 1;
		a[i][1] = 1;
	}
	for (int i = 3; i <= n; i++)
		for (int j = 2; j < i; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

