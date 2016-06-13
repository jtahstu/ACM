/**
 * Project Name: nyoj 
 * File Name: 892.cpp
 * Created on: 2015年6月10日 下午2:44:59
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
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
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		string name;
//		int n;
//		double price, capacity, sum = 0;
//		bool flag = true;
//		cin >> n;
//		for (int i = 0; i < n; i++) {
//			cin >> name >> price >> capacity;
//			if (capacity <= 300 && price <= 5 && price >= 1.5) {
//				sum += price;
//				cout << name << endl;
//				flag = false;
//			}
//		}
//		if (!flag)
//			printf("%.1lf\n",sum);
//		else
//			cout << "-1" << endl;
//
//	}
//	return 0;
//}
//样例输入
//
//    3
//    3
//    mengniu  2 120
//    yili 3 300
//    telunsu 6 200
//    5
//    yili 1.6 150
//    mengniu 3 200
//    Telunsu 8 100
//    Mengniu 2.3 103
//    Yili 3 200
//    1
//    Yili 6 120
//
//样例输出
//
//    mengniu
//    yili
//    5.0
//    yili
//    mengniu
//    Mengniu
//    Yili
//    9.9
//    -1
