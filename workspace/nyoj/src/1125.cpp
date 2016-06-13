/**
 * Project Name: nyoj
 * File Name: 1125.cpp
 * Created on: 2015年7月17日 上午3:41:43
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include <stdio.h>
//void toRoman(int num) {
//	//这个二维数组把每一位表示出来，这个可以用string数组来表示，那样感觉会更加易懂
//	static char *roman[][10] = { "", "I", "II", "III", "IV", "V", "VI", "VII",
//			"VIII", "IX", " ", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX",
//			"XC", "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM",
//			"", "M", "MM", "MMM" };
//	int i, j, n;
//	for (j = 0, i = 10000; j < 4; ++j, i /= 10) { //然后分解数字，去二维数组里找对应位，输出
//		n = (num % i) / (i / 10);
//		printf("%s", roman[3 - j][n]);
//	}
//	printf("\n");
//}
//
//int main() {
//	int n;
//	char* roman;
//	while (~scanf("%d", &n)) {
//		toRoman(n);
//	}
//	return 0;
//}
