///**
// * Project Name: nyoj
// * File Name: 880.cpp
// * Created on: 2015年6月10日 上午1:30:16
// * Author: jtahstu
// * QQ: 1373758426 E-mail:1373758426@qq.com
// * Copyright (c) 2015, jtahstu , All Rights Reserved.
// */
//#include<stdio.h>
//int main() {
//	char xx[27][60] = { "A", "ABA", "ABCBA", "ABCDCBA", "ABCDEDCBA",
//			"ABCDEFEDCBA", "ABCDEFGFEDCBA", "ABCDEFGHGFEDCBA",
//			"ABCDEFGHIHGFEDCBA", "ABCDEFGHIJIHGFEDCBA", "ABCDEFGHIJKJIHGFEDCBA",
//			"ABCDEFGHIJKLKJIHGFEDCBA", "ABCDEFGHIJKLMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNMLKJIHGFEDCBA", "ABCDEFGHIJKLMNONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPQRSTUVUTSRQPONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQPONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA",
//			"ABCDEFGHIJKLMNOPQRSTUVWXYZYXWVUTSRQPONMLKJIHGFEDCBA" };
//	int text;
//	scanf("%d", &text);
//	while (text--) {
//		int x, i, j;
//		scanf("%d", &x);
//		for (i = 0; i <= x; i++) {
//			for (j = x - i; j >= 0; j--)
//				printf(" ");
//			printf("%s\n", xx[i]);
//		}
//		for (i = x - 1; i >= 0; i--) {
//			for (j = x - i; j >= 0; j--)
//				printf(" ");
//			printf("%s\n", xx[i]);
//		}
//
//	}
//	return 0;
//}

//样例输入
//
//    1
//    2
//
//样例输出
//
//       A
//      ABA
//     ABCBA
//      ABA
//       A

