//============================================================================
// Name        : C++.cpp
// Author      : jtahstu
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/* 这个不太清楚哪里有问题
#include <iostream>
using namespace std;

int main() {
	int n;
	long long a[10] = { 1, 3, 9, 33, 153, 873, 5913, 46233, 409113 };
	cin >> n;
	while (n--) {
		long long m;
		cin >> m;
		bool flag = false;
		for (int i = 0; i < 10; i++) {
			if (a[i] == m) {
				flag = true;
				break;
			}
		}
		if (flag)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}*/
//#include<cstdio>
//int nn[10] = { 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
//int main1() {
//	int m, i, n;
//	scanf("%d", &m);
//	while (m--) {
//		scanf("%d", &n);
//		for (i = 8; i >= 0; i--)
//			if (n >= nn[i])
//				n -= nn[i];
//		if (n == 0)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	return 0;
//}
