/**
 * Project Name: nyoj
 * File Name: 495.cpp
 * Created on: 2015年7月15日 下午4:15:58
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
//bool judge(char sb[]) { //判断字符串是否为回文串
//	int lenn = strlen(sb);
//	for (int i = 0; i < lenn / 2; i++) {
//		if (sb[i] != sb[lenn - i - 1])
//			return false;
//	}
//	return true;
//}
//void solve() {
//	int n;
//	cin >> n;
//	getchar();
//	while (n--) {
//		char s[110];
//		memset(s, 0, sizeof(s));
//		gets(s);
//		int len = strlen(s), k;
//		if (judge(s)) {
//			puts(s);
//		} else {
//			for (int i = 0; i < len; i++) { //依次把前i个字母从0~len-1倒过来加到后面，判断是否可行
//				k = len;
//				for (int j = i; j >= 0; j--)
//					s[k++] = s[j];
//				if (judge(s)) {
//					puts(s);
//					break;
//				}
//			}
//		}
//	}
//}
//int main() {
//	solve();
//	return 0;
//}
//少年 DXH
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：2
//描述
//大家都知道,DXH 幼时性格怪癖,小朋友都不喜欢和他玩,这种情况一直到 DXH 的少年时期也没有改变。
//少年时期的 DXH 迷上了"回文串",“回文串”是指正着读倒着读都一样的字符串。DXH一个人的时候喜欢在地上随便写一个字符串 S,
//然后在这个字符串的右边添加尽量少的字符(可以不添加,就是 0 个),使得这个字符串变成“回文串”。但玩的时间长了,DXH 的手也酸了,
//聪明的你能帮他写一个程序,算出这个添加最少字符形成的回文串吗?
//一个字符串 S[1..L]被称为回文串,当且仅当 S[i] = S[L - i + 1] (1 <= i <= L)。
//输入
//第一行,一个 T (T <= 100),表示有 T 个字符串需要你判断
//之后 T 行,每行一个字符串 S。
//S 的长度|S|满足 1 <= |S| <= 50,且 S 只由小写字母'a' -'z'组成。
//输出
//对于每个字符串,输出一行,每行一个字符串 S', 是在 S 右侧添加最少的字符形成的回文串。
//样例输入
//5
//add
//cigartragic
//dxhisgirl
//acaba
//abczyxyz
//样例输出
//adda
//cigartragic
//dxhisgirlrigsihxd
//acabaca
//abczyxyzcba
