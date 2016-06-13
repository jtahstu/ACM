/**
 * Project Name: akoj
 * File Name: 1005.cpp
 * Created on: 2016年5月20日 上午12:17:33
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<set>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		while (n--) {
			int a, b;
			cin >> a >> b;
			int ban = a / 2;
			for (int ll = 1; ll <= b; ll++) {
				if (ll == 1) {
					cout << "X";
					for (int j = 1; j <= (ban) * 2 - 1; j++)
						cout << " ";
					cout << "X" << endl;
				}
				for (int i = 2; i <= a / 2; i++) { //上半部分
					for (int j = 1; j <= i - 1; j++)
						cout << " ";
					cout << "X";
					for (int j = 1; j <= (ban + 1 - i) * 2 - 1; j++)
						cout << " ";
					cout << "X" << endl;
				}
				for (int i = 1; i <= ban; i++) //中间一行
					cout << " ";
				cout << "X" << endl;
				for (int i = ban + 2; i <= a; i++) { //下半部分
					for (int j = 1; j <= a - i; j++)
						cout << " ";
					cout << "X";
					for (int j = 1; j <= (i - (a / 2 + 1)) * 2 - 1; j++)
						cout << " ";
					cout << "X" << endl;
				}
			}
			cout << endl;
		}
	}
	return 0;
}
