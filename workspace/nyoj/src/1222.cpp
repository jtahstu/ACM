/**
 * Project Name: nyoj
 * File Name: 1222.cpp
 * Created on: 2015年7月25日 下午5:45:52
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>//还是超时，jj思密达
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int number(unsigned long long x) {
//	if (x < 0 || (x & 1))
//		return 0;
//	return number(x >> 1) + 1;
//}
//int main() {
//	char c;
//	unsigned long long x;
//	unsigned long long sum = 0;
//	while (~(c = getchar())) {
//		if (c >= '0' && c <= '9')
//			x = x * 10 + c - '0';
//		else if (c == ' ') {
//			if (x == 0)
//				sum += 64;
//			else {
//				int y = number(x);
//				//cout << y << endl;
//				sum += y;
//			}
//			x = 0;
//		}
//	}
//	printf("%llu\n", sum);
//	return 0;
//}
//0的个数（极速版）
//时间限制：700 ms  |  内存限制：65535 KB
//
//描述
//
//    要在半天内出好题目，没时间了，快用最快速度的告诉我所有整数二进制末尾0的个数的和。
//
//    只有一组大数据。
//
//    Hint：建议使用高效输入方式
//
//        while(~(c=getchar()))
//
//        if(c>='0'&&c<='9')x=x*10+c-'0';
//
//输入
//    40,000,000个正整数（0≤每个整数≤2^64-1)，每个整数后面都有一个空格
//输出
//    只输出一个整数，为所有整数二进制末尾0的个数的和
//样例输入
//
//    8 0 17
//
//样例输出
//
//    67
