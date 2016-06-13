/*
 * 1078.cpp
 *
 *  Created on: 2015Äê3ÔÂ28ÈÕ
 *      Author: Administrator
 */
#include<iostream>
#include<string>
using namespace std;
int main1078() {
	int n;
	cin >> n;
	while (n--) {
		int s;
		cin >> s;
		s.erase(0, 1);
		int m = s.size() - 1;
		for (int i = 0; i < m; i++) {
			if (s[0] == '0') {
				s.erase(0, 1);
				continue;
			} else
				break;
		}
		cout << s << endl;
	}
	return 0;
}

