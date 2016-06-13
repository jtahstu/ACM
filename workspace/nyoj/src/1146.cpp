/**
 * Project Name: nyoj
 * File Name: 1146.cpp
 * Created on: 2015年7月24日 下午8:16:31
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//string jt[] = { "._", "_...", "_._.", "_..", ".", ".._.", "__.", "....", "..",
//		".___", "_._", "._..", "__", "_.", "___", ".__.", "__._", "._.", "...",
//		"_", ".._", "..._", ".__", "_.._", "_.__", "__.." };
//string tt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//int main() {
//	string s;
//	while (cin >> s) {
//		for (unsigned int i = 0; i < s.length();) {
//			int k = 0; //表示目前这个字符的长度
//			string b;
//			for (unsigned int j = i; j < s.length(); j++) {
//				if (s[j] == '/') {
//					k = j - i;
//					b = s.substr(i, k);//这句话要写在i改变之前，要是写在for循环之外，i的值就改变了
//					i = j + 1;
//					break;
//				}
//			}
//			for (unsigned int l = 0; l < 26; l++) {
//				if (b == jt[l])
//					cout << tt[l];
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
//Morse code
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：3
//
//描述
//
//         前些时间看过一些TVB的电视剧，goshawk感觉 Morse code很神奇，它能够在懂这种规则的人之间进行信息传递。现在给你电码与字符对应的表格，
//		 让你将电码翻译成要进行传递的信息。
//
//输入
//    每组测试数据一行，每行表示消息对应的电码，每个字母对应的电码用"/"隔开，文件以EOF结束。
//输出
//    输出该段电码对应的信息，每组测试数据结果占一行。
//样例输入
//
//    ../._/__/._/.__./___/._../../_._././__/._/__/
//    ../._/__/.._./_.../../
//
//样例输出
//
//    IAMAPOLICEMAM
//    IAMFBI
