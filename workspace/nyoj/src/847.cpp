/**
 * Project Name: nyoj 
 * File Name: 847.cpp
 * Created on: 2015年4月12日 下午9:50:59
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<vector>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		int m;
//		long long temp, max, min, mx = 1, mi = 1, a, ans;
//		cin >> m >> a;
//		max = a;
//		min = a;
//		for (int i = 2; i <= m; i++) {
//			scanf("%I64d", &temp);
//			if ((max - temp) > ans) {
//				ans = max - temp;
//				mx = xx;
//				mi = i;
//			}
//			if (temp > max) {
//				max = temp;
//				xx = i;
//			}
//		}
//		cout << max - min << " " << mx << " " << mi << endl;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main847(){
//	int t, n, ans, x, y, max, temp, xx, val;
//	scanf("%d", &t);
//	while(t--){
//		scanf("%d", &n);
//		ans = max = -10000000;
//		xx = x = 1; y =  2;
//		for(int i = 1; i <= n; ++i){
//			scanf("%d", &temp);
//			if((val = max - temp) > ans){
//				ans = val;
//				x = xx; y = i;
//			}
//			if(temp > max){
//				max = temp; xx = i;
//			}
//		}
//		printf("%d %d %d\n", ans, x, y);
//	}
//	return 0;
//}
