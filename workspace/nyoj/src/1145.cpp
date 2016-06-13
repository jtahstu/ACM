/**
 * Project Name: nyoj
 * File Name: 1145.cpp
 * Created on: 2015年7月19日 下午5:32:43
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//using namespace std;
//int main() {
//	int n, m;
//	while (cin >> n >> m) {
//		if ((m & 1) && (n & 1)) //同为奇数的时候
//			cout << "girl will treasure these gifts" << endl;
//		else
//			cout << "goshawk will treasure these gifts" << endl;
//	}
//	return 0;
//}
//最后的约定
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：1
//
//描述
//
//        goshawk和女朋友girl谈恋爱之前就约定过，如果有一天要分手，就把送彼此的礼物进行下面的操作。
//
//        将所有的礼物放到两个箱子里个数分别为n，m>0。两个人轮流进行如下操作：将一个箱子中的礼物清空，然后将另一个箱子中的礼物分到该箱子
//		中，保证两个箱子中都有礼物，最后一个人实现让两个箱子中都只有一个礼物的能将所有的礼物带走，以做纪念。
//
//        问如果goshawk先进行操作，谁能保存这些礼物？
//
//输入
//    输入两个正整数n,m表示两个箱子中的礼物数量。输入包含多组测试数据，以EOF为文件结束。
//输出
//    如果goshawk能珍存这些礼物，那么输出
//    "goshawk will treasure these gifts"。
//    否则输出
//    "girl will treasure these gifts"。
//样例输入
//
//    1 1
//    2 1
//
//样例输出
//
//    girl will treasure these gifts
//    goshawk will treasure these gifts
