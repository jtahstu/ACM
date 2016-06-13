/**
 * Project Name: nyoj
 * File Name: 329.cpp
 * Created on: 2015年4月23日 下午9:35:06 last modify by 2015/7/18
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		string s;
//		cin >> s;
//		s.erase(0, 2);
//		//cout << s << endl;
//		for (unsigned int i = 1; i <= s.length(); i++)
//			if (s.length() % i == 0) {
//				bool flag = true;
//				for (unsigned int j = i; j < s.length(); j++)
//					if (s[j] != s[j % i]) {
//						flag = false;
//						break;
//					}
//				if (flag) {
//					cout << i << " " << s.substr(0, i) << " " << s.length() / i
//							<< endl;
//					break;
//				}
//			}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	while (n--) {
//		char s[100000];
//		int i, len, t = 0, j, w = 0, m;
//		scanf("%s", s);
//		len = strlen(s);
//		for (i = 3; i < len; i++) {
//			if (s[i] == s[2]) {
//				for (j = 3; j < i; j++)
//					if (s[j] != s[j + (i - 2)])
//						break;
//				if (j == i) {
//					w = 1;
//					m = i;
//				}
//				if (w)
//					break;
//			}
//		}
//		t = i - 2;
//		printf("%d ", t);
//		for (j = 2; j < i; j++)
//			printf("%c", s[j]);
//		printf(" %d\n", (len - 2) / t);
//	}
//}
