/**
 * Project Name: nyoj 
 * File Name: 864.cpp
 * Created on: 2015年6月9日 下午10:36:54
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//void jtahstu( long long m) {
//	long long temp = m, i = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, a;
//	bool flag = true, flag2 = true;
//	while (temp) {
//		a = temp % 2;
//		if (flag && (a & 1)) {
//			count1 = i + 1; //坐标从0开始，所以要+1
//			flag = false;
//		}
//		if (flag2 && a == 0) {
//			count3++;
//		} else {
//			flag2 = false;
//		}
//		if (a & 1)
//			count4++;
//		temp /= 2;
//		i++;
//	}
//	count2 = 32 - i;
//	cout << count1 << " " << count2 << " " << count3 << " " << count4 << endl;
//}
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		long long m;//要用long long 或 unsigned int，我也是醉了
//		cin >> m;
//		jtahstu(m);
//	}
//	return 0;
//}

//给出一个十进制正整数n，将它化为32位的二进制(32-bit binary)
//  求出它低位上第一次出现1的位置
//  求出它高位连续0的个数
//  求出它低位连续0的个数
//  求出它所有1的个数
//
//输入
//第一行一个正整数T表示测试数据的组数
//接下来T行，每行一个正整数表示n (1 <= n <= 2^32 - 1)
//输出
//一行四个整数，按照题目描述依次输出，参照output
//样例输入
//
//3
//1
//100
//123456
//
//样例输出
//
//1 31 0 1
//3 25 2 3
//7 15 6 6
