/**
 * Project Name: nyoj
 * File Name: 371.cpp
 * Created on: 2015年7月19日 下午4:53:10
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char walk[5] = "NESW";
//	int de;
//	int x;
//	int y;
//	int n;
//	scanf("%d", &n);
//	while (n--) {
//		x = 0;
//		y = 0;
//		char temp[110];
//		de = 0;
//		scanf("%s", temp);
//		int len = strlen(temp);
//		for (int i = 0; i < len; ++i) {
//			if (temp[i] == 'L')
//				de = (de + 3) % 4;
//			if (temp[i] == 'R')
//				de = (de + 1) % 4;
//			if (temp[i] == 'M') {
//				if (walk[de] == 'N')
//					y++;
//				if (walk[de] == 'S')
//					y--;
//				if (walk[de] == 'E')
//					x++;
//				if (walk[de] == 'W')
//					x--;
//			}
//		}
//		printf("%d %d %c\n", x, y, walk[de]);
//	}
//	return 0;
//}
