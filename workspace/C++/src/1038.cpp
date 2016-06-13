/*
 * 1038.cpp
 * Created on: 2015Äê4ÔÂ4ÈÕ
 * Author: jtahstu
 */
//Sample Input
//
//11
//9
//21
//10
//
//Sample Output
//
//10
//9
//19
//Unlucky
#include<iostream>
#include<cstdio>
using namespace std;
int main1038() {
	int n;
	while (cin >> n) {
		bool flag = true;
		int a[10] = { 0 }, i = 0;
		while (n) {
			a[i] = n % 10;
			if (a[i] == 0) {
				cout << "Unlucky" << endl;
				flag = false;
				break;
			}
			n /= 10;
			i++;
		}
		int bei = 1, sum = 0;
		if (flag) {
			for (int j = 0; j < i; j++) {
				sum += a[j] * bei;
				bei *= 9;
			}
			cout << sum << endl;
		}
	}
	return 0;
}

