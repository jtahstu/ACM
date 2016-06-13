/**
 * Project Name: nyoj
 * File Name: 481.cpp
 * Created on: 2015年7月15日 下午5:19:48
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
//using namespace std;
//void show(string sb) {
//	for (int i = sb.size() - 1; i >= 0; i--)
//		cout << sb[i];
//	cout << endl;
//}
//int main() {
//	string sb;
//	while (cin >> sb) {
//		int s = 0, b = 0;
//		for (unsigned int i = 0; i < sb.size(); i++) {
//			if (sb[i] - 'a' >= 0 && sb[i] - 'a' <= 12)
//				s++;
//			else
//				b++;
//		}
//		if (s == 0) { //前一堆个数为0
//			for (unsigned int i = 0; i < sb.size() / 2; i++) {
//				sb[i] = sb[i] - 13;
//			}
//			show(sb);
//		} else if (b == 0) { //后一堆个数为0
//			for (unsigned int i = 0; i < sb.size() / 2; i++) {
//				sb[i] = sb[i] + 13;
//			}
//			show(sb);
//		} else if (s == b) { //两堆个数相等
//			show(sb);
//		} else { //两堆个数不等
//			while (s != b) { //不等一直执行
//				if (s > b) {
//					for (unsigned int i = 0; i < sb.size(); i++) { //从前往后每次只删除一个字母
//						if (sb[i] - 'a' >= 0 && sb[i] - 'a' <= 12) {
//							sb.erase(i, 1);
//							s--;
//							break;
//						}
//					}
//				}
//				if (b > s) {
//					for (unsigned int i = 0; i < sb.size(); i++) { //同上
//						if (sb[i] - 'a' >= 13 && sb[i] - 'a' <= 25) {
//							sb.erase(i, 1);
//							b--;
//							break;
//						}
//					}
//				}
//			}
//			show(sb);
//		}
//	}
//	return 0;
//}
//平衡字符串
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：2
//描述
//给你一定长度的字符串.字符串中只包含26个小写字母，首先我们把字母a-z分为2堆(a--m)和(n--z),
//判断给定字符串中(a--m)和(n--z)两堆中的字母个数是否相等,相等则颠倒字符串输出,
//不相等则需要从个数多的那堆字母中删去部分字母使两堆字母数相等。删除规则:
//按出现顺序依次删除字母个数多的那堆字母中的字母 ,直到两堆字母个数相等则不再删除，然后颠倒字符串输出。
//若未删除前某一堆字母个数为0，则需要从另外一堆中按顺序取出一半给字母个数为0的一堆,取出的这一半字母需要经过变换，
//变换方法:为按两堆字母对应位置变化(a--n,b--o ... l--y,m--z),最后颠倒字符串输出。
//
//输入
//输入一个长度不超过100的字符串,字符串中没有空格.字符串中字母均为小写字母.
//注意：程序以文件结束符“EOF”结束输入。
//输出
//按要求输出字符串，每个字符串占一行.
//样例输入
//ace
//xyz
//accept
//ko
//样例输出
//ecn
//zyk
//tpec
//ok
